#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::Client { class PrefabLoadMeta; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define JJNNABINOOH_CIAHPJCCNCE_OFFSET UNITYSDK_OFFSET(0x17B0A8E0)
#define JJNNABINOOH_CNFDLJLFBNN_OFFSET UNITYSDK_OFFSET(0x17B0A650)
#define JJNNABINOOH_CTOR_OFFSET UNITYSDK_OFFSET(0x17B0AA50)
#define JJNNABINOOH_DIDHIGAFKNI_OFFSET UNITYSDK_OFFSET(0x17B0A7D0)
#define JJNNABINOOH_HCNIHAHLEGO_OFFSET UNITYSDK_OFFSET(0x17B0A950)
#define JJNNABINOOH_JKEPGGJBMGP_OFFSET UNITYSDK_OFFSET(0x17B0A6C0)
#define JJNNABINOOH__ONBIND_OFFSET UNITYSDK_OFFSET(0x17B0A3A0)
#define JJNNABINOOH__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x17B0A5C0)

inline static constexpr unsigned int JJNNABINOOH_TypeDefinitionIndex = 74270;

	class JJNNABINOOH : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* DCBAIJBMMJA; // 0x60
		::UnityEngine::GameObject* FEFMICGONJE; // 0x68
		::UnityEngine::Transform* ALEDBEKLNCE; // 0x70
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

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNNABINOOH__SETUPVIEW_OFFSET))(this);
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
