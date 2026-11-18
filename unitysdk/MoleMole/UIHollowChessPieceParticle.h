#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/MoleMole/UIHollowChessPieceParticle_AttachPointType.h"
#include "unitysdk/MoleMole/UIHollowChessPieceParticle_TransformType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class FOHHIICFBPC;
class MCFPPILFGDB;
class PNJDGHBEMLK;
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x17F43D50)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_BINDPROXY_OFFSET UNITYSDK_OFFSET(0x17F43E20)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_CHANGESCALE_OFFSET UNITYSDK_OFFSET(0x17F43C30)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_DESTRUCTOR_OFFSET UNITYSDK_OFFSET(0x17F43CC0)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GETANIMATIONTIME_OFFSET UNITYSDK_OFFSET(0x17F452A0)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GETTEXTURESHEETFRAMEINDEX_OFFSET UNITYSDK_OFFSET(0x17F42E00)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GETTIME_OFFSET UNITYSDK_OFFSET(0x17F44DB0)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_ATTACHPOINTTYPE_OFFSET UNITYSDK_OFFSET(0x17F42BD0)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_DURATIONSECONDS_OFFSET UNITYSDK_OFFSET(0x17F42FF0)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_HASTEXTURESHEETANIMATION_OFFSET UNITYSDK_OFFSET(0x17F42C30)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_ISLOOP_OFFSET UNITYSDK_OFFSET(0x17F455B0)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x17F42C10)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_ORIGINPATH_OFFSET UNITYSDK_OFFSET(0x17F45580)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_PARTICLEINSTANCE_OFFSET UNITYSDK_OFFSET(0x17F455A0)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_PARTICLESYSTEM_OFFSET UNITYSDK_OFFSET(0x17F42DE0)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_PARTICLETRANSFORMTYPE_OFFSET UNITYSDK_OFFSET(0x17F42BF0)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_PATHHASH_OFFSET UNITYSDK_OFFSET(0x17F45610)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_PATH_OFFSET UNITYSDK_OFFSET(0x17F45570)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_RAWTRANS_OFFSET UNITYSDK_OFFSET(0x17F43370)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_TRANSFORMADDITIVE_OFFSET UNITYSDK_OFFSET(0x17F456A0)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_INIT_OFFSET UNITYSDK_OFFSET(0x17F43390)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x17F44F50)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_PLAY_OFFSET UNITYSDK_OFFSET(0x17F43E80)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_RESETLOCALTRANSFORM_OFFSET UNITYSDK_OFFSET(0x17F433E0)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_SET_ATTACHPOINTTYPE_OFFSET UNITYSDK_OFFSET(0x17F42BE0)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_SET_ORIGINPATH_OFFSET UNITYSDK_OFFSET(0x17F45590)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_SET_PARTICLETRANSFORMTYPE_OFFSET UNITYSDK_OFFSET(0x17F42C00)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_SET_TRANSFORMADDITIVE_OFFSET UNITYSDK_OFFSET(0x17F456C0)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_SIMULATE_OFFSET UNITYSDK_OFFSET(0x17F44BC0)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_STOP_OFFSET UNITYSDK_OFFSET(0x17F44100)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_TRYCHANGETRANSFORMPARENT_1_OFFSET UNITYSDK_OFFSET(0x17F44190)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_TRYCHANGETRANSFORMPARENT_OFFSET UNITYSDK_OFFSET(0x17F43980)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F456E0)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE__CTOR_OFFSET UNITYSDK_OFFSET(0x17F431B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowChessPieceParticle_TypeDefinitionIndex = 83511;

	class UIHollowChessPieceParticle : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3* StaticGet_DefAngle()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(UIHollowChessPieceParticle_TypeDefinitionIndex)->GetStaticField(0xDD20);
		}
		static ::UnityEngine::Vector3* StaticGet_InvalidPos()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(UIHollowChessPieceParticle_TypeDefinitionIndex)->GetStaticField(0xDD2C);
		}
		::FOHHIICFBPC* _particleInstance; // 0x10
		::System::String* _OriginPath_k__BackingField; // 0x18
		::UnityEngine::Animation* _animation; // 0x20
		::System::String* _path; // 0x28
		::System::Nullable_1<::Foundation::Unreal::FTransform> _TransformAdditive_k__BackingField; // 0x30
		::System::Byte _padding0[0x1C];
		::MoleMole::UIHollowChessPieceParticle_TransformType _ParticleTransformType_k__BackingField; // 0x54
		::MoleMole::UIHollowChessPieceParticle_AttachPointType _attachPointType_k__BackingField; // 0x58

		::System::Void _ctor(::FOHHIICFBPC* particleInstance, ::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::FOHHIICFBPC*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE__CTOR_OFFSET))(this, particleInstance, path);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE__CCTOR_OFFSET))();
		}

		::MoleMole::UIHollowChessPieceParticle_AttachPointType get_attachPointType()
		{
			return ((::MoleMole::UIHollowChessPieceParticle_AttachPointType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_ATTACHPOINTTYPE_OFFSET))(this);
		}

		::System::Void set_attachPointType(::MoleMole::UIHollowChessPieceParticle_AttachPointType value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowChessPieceParticle_AttachPointType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_SET_ATTACHPOINTTYPE_OFFSET))(this, value);
		}

		::MoleMole::UIHollowChessPieceParticle_TransformType get_ParticleTransformType()
		{
			return ((::MoleMole::UIHollowChessPieceParticle_TransformType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_PARTICLETRANSFORMTYPE_OFFSET))(this);
		}

		::System::Void set_ParticleTransformType(::MoleMole::UIHollowChessPieceParticle_TransformType value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowChessPieceParticle_TransformType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_SET_PARTICLETRANSFORMTYPE_OFFSET))(this, value);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_ISPLAYING_OFFSET))(this);
		}

		::System::Boolean get_HasTextureSheetAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_HASTEXTURESHEETANIMATION_OFFSET))(this);
		}

		::System::Single GetTextureSheetFrameIndex()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GETTEXTURESHEETFRAMEINDEX_OFFSET))(this);
		}

		::System::Single get_durationSeconds()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_DURATIONSECONDS_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::Transform* parent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_INIT_OFFSET))(this, parent);
		}

		::System::Void ResetLocalTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_RESETLOCALTRANSFORM_OFFSET))(this);
		}

		::System::Boolean TryChangeTransformParent(::UnityEngine::Transform* curParent)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_TRYCHANGETRANSFORMPARENT_OFFSET))(this, curParent);
		}

		::System::Void ChangeScale(::UnityEngine::Vector3 scale)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_CHANGESCALE_OFFSET))(this, scale);
		}

		::System::Void Destructor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_DESTRUCTOR_OFFSET))(this);
		}

		::System::Void BeforeRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_BEFORERECYCLE_OFFSET))(this);
		}

		::System::Void BindProxy(::PNJDGHBEMLK* proxy)
		{
			return ((::System::Void(*)(::PVOID, ::PNJDGHBEMLK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_BINDPROXY_OFFSET))(this, proxy);
		}

		::System::Boolean Play(::System::Boolean loop, ::System::Single speed)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_PLAY_OFFSET))(this, loop, speed);
		}

		::System::Boolean Stop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_STOP_OFFSET))(this);
		}

		::System::Boolean TryChangeTransformParent_1(::MCFPPILFGDB* parentModel, ::System::Action* afterChangeParent)
		{
			return ((::System::Boolean(*)(::PVOID, ::MCFPPILFGDB*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_TRYCHANGETRANSFORMPARENT_1_OFFSET))(this, parentModel, afterChangeParent);
		}

		::System::Void Simulate(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_SIMULATE_OFFSET))(this, time);
		}

		::System::Single GetTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GETTIME_OFFSET))(this);
		}

		::System::Single PlayAnimation(::System::String* animationName, ::System::Single speed)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_PLAYANIMATION_OFFSET))(this, animationName, speed);
		}

		::System::Single GetAnimationTime(::System::String* animationName)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GETANIMATIONTIME_OFFSET))(this, animationName);
		}

		::UnityEngine::Transform* get_RawTrans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_RAWTRANS_OFFSET))(this);
		}

		::System::String* get_Path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_PATH_OFFSET))(this);
		}

		::System::String* get_OriginPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_ORIGINPATH_OFFSET))(this);
		}

		::System::Void set_OriginPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_SET_ORIGINPATH_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystem* get_ParticleSystem()
		{
			return ((::UnityEngine::ParticleSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_PARTICLESYSTEM_OFFSET))(this);
		}

		::FOHHIICFBPC* get_ParticleInstance()
		{
			return ((::FOHHIICFBPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_PARTICLEINSTANCE_OFFSET))(this);
		}

		::System::Boolean get_IsLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_ISLOOP_OFFSET))(this);
		}

		::System::Int32 get_PathHash()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_PATHHASH_OFFSET))(this);
		}

		::System::Nullable_1<::Foundation::Unreal::FTransform> get_TransformAdditive()
		{
			return ((::System::Nullable_1<::Foundation::Unreal::FTransform>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_TRANSFORMADDITIVE_OFFSET))(this);
		}

		::System::Void set_TransformAdditive(::System::Nullable_1<::Foundation::Unreal::FTransform> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Foundation::Unreal::FTransform>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_SET_TRANSFORMADDITIVE_OFFSET))(this, value);
		}
	};
}
