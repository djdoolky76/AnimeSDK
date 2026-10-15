#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::Client { class PrefabLoadMeta; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define JJNNABINOOH_CIAHPJCCNCE_OFFSET UNITYSDK_OFFSET(0xB2091E0)
#define JJNNABINOOH_CNFDLJLFBNN_OFFSET UNITYSDK_OFFSET(0xB208F50)
#define JJNNABINOOH_CTOR_OFFSET UNITYSDK_OFFSET(0xB209350)
#define JJNNABINOOH_DIDHIGAFKNI_OFFSET UNITYSDK_OFFSET(0xB2090D0)
#define JJNNABINOOH_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB208EC0)
#define JJNNABINOOH_HCNIHAHLEGO_OFFSET UNITYSDK_OFFSET(0xB209250)
#define JJNNABINOOH_JKEPGGJBMGP_OFFSET UNITYSDK_OFFSET(0xB208FC0)
#define JJNNABINOOH__ONBIND_OFFSET UNITYSDK_OFFSET(0xB208D10)

	class JJNNABINOOH : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* DCBAIJBMMJA; // 0x60
		::UnityEngine::Transform* ALEDBEKLNCE; // 0x68
		::UnityEngine::GameObject* FEFMICGONJE; // 0x70
		::UnityEngine::Transform* BIBAGOMGIFE; // 0x78
		::RPG::Client::PrefabLoadMeta* CHNCAFCKHAN; // 0x80
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNNABINOOH_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNNABINOOH__ONBIND_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNNABINOOH_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void JKEPGGJBMGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNNABINOOH_JKEPGGJBMGP_OFFSET))(this);
		}

		::System::Void DIDHIGAFKNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNNABINOOH_DIDHIGAFKNI_OFFSET))(this);
		}

		::System::Void CNFDLJLFBNN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNNABINOOH_CNFDLJLFBNN_OFFSET))(this);
		}

		::System::Void CIAHPJCCNCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNNABINOOH_CIAHPJCCNCE_OFFSET))(this);
		}

		::System::Void HCNIHAHLEGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNNABINOOH_HCNIHAHLEGO_OFFSET))(this);
		}

	};
