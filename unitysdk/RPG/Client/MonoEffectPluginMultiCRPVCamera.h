#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"
class AIINICCOBFB;
namespace RPG::CustomRP { class CRPVirtualCameraVolumn; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD802080)
#define RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_CTOR_OFFSET UNITYSDK_OFFSET(0xD802400)
#define RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xD802150)
#define RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_DISABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD802270)
#define RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD801FB0)
#define RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_ENABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD802200)
#define RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xD802380)
#define RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0xD8023F0)
#define RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xD801E80)
#define RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xD801EC0)
#define RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_TICK_OFFSET UNITYSDK_OFFSET(0xD8022F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginMultiCRPVCamera_TypeDefinitionIndex = 70079;

	class MonoEffectPluginMultiCRPVCamera : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::RPG::CustomRP::CRPVirtualCameraVolumn* VCameraVolumn; // 0x28
		::System::Collections::Generic::List_1<::System::Object*>* SlotReferenceTransforms; // 0x30
		::System::Collections::Generic::List_1<::System::Object*>* RendererSlots; // 0x38
		::System::Collections::Generic::List_1<::System::Object*>* VirtaulCameraSlots; // 0x40
		::System::Boolean UseVirtualCameraFollowMonoPlugin; // 0x48
		::System::Byte _padding0[0x7];
		::Il2CppArray<::System::Int32>* RenderOrderIndex; // 0x50
		::UnityEngine::Vector2 ReplacedTextureSize; // 0x58
		::UnityEngine::Vector2 ReplacedTextureOffset; // 0x60
		::UnityEngine::Vector4 ReplacedTextureAtlasDivision; // 0x68
		::System::Boolean EnableViewPortTransition; // 0x78
		::System::Byte _padding1[0x3];
		::System::Single ViewPortTransitionDuration; // 0x7C
		::System::Single ViewPortTransitionStartTime; // 0x80
		::System::Byte _padding2[0x4];
		::UnityEngine::AnimationCurve* ViewPortSizeTransitionCurve; // 0x88
		::UnityEngine::AnimationCurve* ViewPortPositionTransitionCurve; // 0x90
		::System::Boolean EnableFakeRTTransition; // 0x98
		::System::Byte _padding3[0x3];
		::System::Single FakeRTTransitionDuration; // 0x9C
		::System::Single FakeRTTransitionStartTime; // 0xA0
		::System::Byte _padding4[0x4];
		::UnityEngine::AnimationCurve* FakeRTTransitionCurve; // 0xA8
		::AIINICCOBFB* KADDKEGNCHE; // 0xB0
		// static const ::System::Object MAX_CRPCAMERA_COUNT; // 0x0
		// static const ::System::Object MAX_SLOT_COUNT; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void EnablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_ENABLEPLUGIN_OFFSET))(this);
		}

		::System::Void DisablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_DISABLEPLUGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_TICK_OFFSET))(this, a1);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::AIINICCOBFB* get_Behavior()
		{
			return ((::AIINICCOBFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_GET_BEHAVIOR_OFFSET))(this);
		}

	};
}
