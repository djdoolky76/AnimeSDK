#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/RTIDHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
namespace RPG::CustomRP { class PassRTRes; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture; }

#define RPG_CUSTOMRP_PASSRTRES_CCTOR_OFFSET UNITYSDK_OFFSET(0x198D4000)
#define RPG_CUSTOMRP_PASSRTRES_CTOR_1_OFFSET UNITYSDK_OFFSET(0x198D3780)
#define RPG_CUSTOMRP_PASSRTRES_CTOR_OFFSET UNITYSDK_OFFSET(0x198D3770)
#define RPG_CUSTOMRP_PASSRTRES_FIND_OFFSET UNITYSDK_OFFSET(0x198D3A20)
#define RPG_CUSTOMRP_PASSRTRES_GETRTID_OFFSET UNITYSDK_OFFSET(0x198D3FA0)
#define RPG_CUSTOMRP_PASSRTRES_GETRT_OFFSET UNITYSDK_OFFSET(0x198D3DF0)
#define RPG_CUSTOMRP_PASSRTRES_GET_1_OFFSET UNITYSDK_OFFSET(0x198CF8A0)
#define RPG_CUSTOMRP_PASSRTRES_GET_OFFSET UNITYSDK_OFFSET(0x198D38D0)
#define RPG_CUSTOMRP_PASSRTRES_INIT_OFFSET UNITYSDK_OFFSET(0x198D3B30)
#define RPG_CUSTOMRP_PASSRTRES_ISEQUAL_1_OFFSET UNITYSDK_OFFSET(0x198D3D30)
#define RPG_CUSTOMRP_PASSRTRES_ISEQUAL_OFFSET UNITYSDK_OFFSET(0x198D3CF0)
#define RPG_CUSTOMRP_PASSRTRES_ISVALID_OFFSET UNITYSDK_OFFSET(0x198D3F50)
#define RPG_CUSTOMRP_PASSRTRES_RESETALL_OFFSET UNITYSDK_OFFSET(0x198D3C10)
#define RPG_CUSTOMRP_PASSRTRES_RESET_OFFSET UNITYSDK_OFFSET(0x198D38C0)
#define RPG_CUSTOMRP_PASSRTRES_RTRELEASE_OFFSET UNITYSDK_OFFSET(0x198D3F10)
#define RPG_CUSTOMRP_PASSRTRES_SETTEX_OFFSET UNITYSDK_OFFSET(0x198CEA40)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int PassRTRes_TypeDefinitionIndex = 38798;

	class PassRTRes : public ::System::Object
	{
	public:
		::System::Int32 index; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::CustomRP::RTIDHandle rtHandler; // 0x18
		static ::RPG::CustomRP::PassRTRes** StaticGet_CameraRT()
		{
			return (::RPG::CustomRP::PassRTRes**)UnitySDK::FromName("RPG.CustomRP", "PassRTRes")->GetStaticField(0x28B00);
		}

		static ::System::Collections::Generic::List_1<::RPG::CustomRP::PassRTRes*>** StaticGet__InternalRTPool()
		{
			return (::System::Collections::Generic::List_1<::RPG::CustomRP::PassRTRes*>**)UnitySDK::FromName("RPG.CustomRP", "PassRTRes")->GetStaticField(0x28B08);
		}

		static ::System::Int32* StaticGet_NullTarget()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "PassRTRes")->GetStaticField(0x8450);
		}

		static ::System::Int32* StaticGet_CameraTarget()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "PassRTRes")->GetStaticField(0x8454);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PASSRTRES_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PASSRTRES_CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PASSRTRES_CCTOR_OFFSET))();
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PASSRTRES_RESET_OFFSET))(this);
		}

		static ::System::Int32 Get(::System::String* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PASSRTRES_GET_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 Find(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PASSRTRES_FIND_OFFSET))(a1, a2);
		}

		static ::RPG::CustomRP::PassRTRes* Get_1(::System::Int32 a1)
		{
			return ((::RPG::CustomRP::PassRTRes*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PASSRTRES_GET_1_OFFSET))(a1);
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PASSRTRES_INIT_OFFSET))();
		}

		static ::System::Void ResetAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PASSRTRES_RESETALL_OFFSET))();
		}

		static ::System::Boolean IsEqual(::RPG::CustomRP::PassRTRes* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::RPG::CustomRP::PassRTRes*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PASSRTRES_ISEQUAL_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsEqual_1(::RPG::CustomRP::PassRTRes* a1, ::UnityEngine::Rendering::RenderTargetIdentifier a2)
		{
			return ((::System::Boolean(*)(::RPG::CustomRP::PassRTRes*, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PASSRTRES_ISEQUAL_1_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetRT(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PASSRTRES_GETRT_OFFSET))(a1);
		}

		static ::System::Void SetTex(::System::Int32 a1, ::UnityEngine::Texture* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PASSRTRES_SETTEX_OFFSET))(a1, a2);
		}

		static ::System::Void RTRelease(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PASSRTRES_RTRELEASE_OFFSET))(a1);
		}

		static ::System::Boolean IsValid(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PASSRTRES_ISVALID_OFFSET))(a1);
		}

		static ::System::Void GetRTID(::System::Int32 a1, ::UnityEngine::Rendering::RenderTargetIdentifier a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PASSRTRES_GETRTID_OFFSET))(a1, a2);
		}

	};
}
