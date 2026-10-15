#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_ALLEYROUTEBIRD_BINDCOMPONENTS_OFFSET UNITYSDK_OFFSET(0xC66E8B0)
#define RPG_CLIENT_ALLEYROUTEBIRD_CCTOR_OFFSET UNITYSDK_OFFSET(0xC66EF60)
#define RPG_CLIENT_ALLEYROUTEBIRD_CHKHMMGCPCB_OFFSET UNITYSDK_OFFSET(0xC66EBF0)
#define RPG_CLIENT_ALLEYROUTEBIRD_CTOR_OFFSET UNITYSDK_OFFSET(0xC66EF50)
#define RPG_CLIENT_ALLEYROUTEBIRD_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xC66ED20)
#define RPG_CLIENT_ALLEYROUTEBIRD_FLY_OFFSET UNITYSDK_OFFSET(0xC66EB80)
#define RPG_CLIENT_ALLEYROUTEBIRD_GDLNHEJDLCJ_1_OFFSET UNITYSDK_OFFSET(0xC66EEE0)
#define RPG_CLIENT_ALLEYROUTEBIRD_GDLNHEJDLCJ_OFFSET UNITYSDK_OFFSET(0xC66EB10)
#define RPG_CLIENT_ALLEYROUTEBIRD_IAALPPGKDGL_OFFSET UNITYSDK_OFFSET(0xC66EE00)
#define RPG_CLIENT_ALLEYROUTEBIRD_SETACTIVE_OFFSET UNITYSDK_OFFSET(0xC66E970)
#define RPG_CLIENT_ALLEYROUTEBIRD_SETCOLOR_OFFSET UNITYSDK_OFFSET(0xC66EA80)
#define RPG_CLIENT_ALLEYROUTEBIRD_SPAWNED_OFFSET UNITYSDK_OFFSET(0xC66ECD0)
#define RPG_CLIENT_ALLEYROUTEBIRD_UPDATE_OFFSET UNITYSDK_OFFSET(0xC66ED70)

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyRouteBird_TypeDefinitionIndex = 62291;

	class AlleyRouteBird : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean IEPEOJKLING; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single PBLGHIGPEIP; // 0x1C
		::System::Single HBDJCFFDGDD; // 0x20
		::System::Byte _padding1[0x4];
		::System::String* NHFPGLCLOMO; // 0x28
		::UnityEngine::Animator* APPGGMLEPLN; // 0x30
		static ::System::Int32* StaticGet_LNGDBLEKGHG()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "AlleyRouteBird")->GetStaticField(0xFD10);
		}

		static ::System::Int32* StaticGet_NOFHFKNDBAO()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "AlleyRouteBird")->GetStaticField(0xFD14);
		}

		// static const ::System::Object FLMBFHONNIM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRD_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRD_CCTOR_OFFSET))();
		}

		::System::Void BindComponents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRD_BINDCOMPONENTS_OFFSET))(this);
		}

		::System::Void SetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRD_SETACTIVE_OFFSET))(this, a1);
		}

		::System::Void SetColor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRD_SETCOLOR_OFFSET))(this, a1);
		}

		::System::Void Fly(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRD_FLY_OFFSET))(this, a1);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRD_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRD_DESPAWNED_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRD_UPDATE_OFFSET))(this);
		}

		::System::Void IAALPPGKDGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRD_IAALPPGKDGL_OFFSET))(this);
		}

		::System::Void CHKHMMGCPCB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRD_CHKHMMGCPCB_OFFSET))(this);
		}

		::System::Void GDLNHEJDLCJ(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRD_GDLNHEJDLCJ_OFFSET))(this, a1);
		}

		::System::Void GDLNHEJDLCJ_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRD_GDLNHEJDLCJ_1_OFFSET))(this, a1);
		}

	};
}
