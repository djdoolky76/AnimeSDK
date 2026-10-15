#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LPMONNHABLI.h"
class APLEMBNFLAA;
namespace System { class String; }

#define RPG_CLIENT_OPENWORLD_STREAMINGSOURCEDEBUGINFO_CCTOR_OFFSET UNITYSDK_OFFSET(0xDA0D730)
#define RPG_CLIENT_OPENWORLD_STREAMINGSOURCEDEBUGINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xDA0D720)
#define RPG_CLIENT_OPENWORLD_STREAMINGSOURCEDEBUGINFO_EDFJBMNKAHA_OFFSET UNITYSDK_OFFSET(0xDA0D250)
#define RPG_CLIENT_OPENWORLD_STREAMINGSOURCEDEBUGINFO_HEJIJGENIFL_OFFSET UNITYSDK_OFFSET(0xDA0D490)
#define RPG_CLIENT_OPENWORLD_STREAMINGSOURCEDEBUGINFO_UPDATEINFO_OFFSET UNITYSDK_OFFSET(0xDA0D020)

namespace RPG::Client::OpenWorld
{
	class StreamingSourceDebugInfo : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 _EffectTypeMask; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* _EffectTypeNames; // 0x20
		::System::String* _AttachTargetType; // 0x28
		::System::String* _AttachTargetInfo; // 0x30
		::UnityEngine::Vector3 _AttachPosition; // 0x38
		static ::Il2CppArray<::System::String*>** StaticGet_MMDBIBADGPK()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.Client.OpenWorld", "StreamingSourceDebugInfo")->GetStaticField(0xD8A0);
		}

		static ::Il2CppArray<::System::Int32>** StaticGet_DIIOBHMCNMN()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("RPG.Client.OpenWorld", "StreamingSourceDebugInfo")->GetStaticField(0xD8A8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGSOURCEDEBUGINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGSOURCEDEBUGINFO_CCTOR_OFFSET))();
		}

		::System::Void UpdateInfo(::APLEMBNFLAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APLEMBNFLAA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGSOURCEDEBUGINFO_UPDATEINFO_OFFSET))(this, a1);
		}

		static ::System::String* EDFJBMNKAHA(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGSOURCEDEBUGINFO_EDFJBMNKAHA_OFFSET))(a1);
		}

		static ::System::String* HEJIJGENIFL(::LPMONNHABLI a1)
		{
			return ((::System::String*(*)(::LPMONNHABLI))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGSOURCEDEBUGINFO_HEJIJGENIFL_OFFSET))(a1);
		}

	};
}
