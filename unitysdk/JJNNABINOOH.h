#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::Client { class PrefabLoadMeta; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define JJNNABINOOH_CIAHPJCCNCE_OFFSET UNITYSDK_OFFSET(0xBA2C810)
#define JJNNABINOOH_CNFDLJLFBNN_OFFSET UNITYSDK_OFFSET(0xBA2C580)
#define JJNNABINOOH_CTOR_OFFSET UNITYSDK_OFFSET(0xBA2C990)
#define JJNNABINOOH_DIDHIGAFKNI_OFFSET UNITYSDK_OFFSET(0xBA2C700)
#define JJNNABINOOH_HCNIHAHLEGO_OFFSET UNITYSDK_OFFSET(0xBA2C880)
#define JJNNABINOOH_JKEPGGJBMGP_OFFSET UNITYSDK_OFFSET(0xBA2C5F0)
#define JJNNABINOOH__ONBIND_OFFSET UNITYSDK_OFFSET(0xBA2C2D0)
#define JJNNABINOOH__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xBA2C4F0)

inline static constexpr unsigned int JJNNABINOOH_TypeDefinitionIndex = 74271;

	class JJNNABINOOH : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* ALEDBEKLNCE; // 0x60
		::RPG::Client::PrefabLoadMeta* CHNCAFCKHAN; // 0x68
		::UnityEngine::GameObject* FEFMICGONJE; // 0x70
		::UnityEngine::Transform* BIBAGOMGIFE; // 0x78
		::UnityEngine::Transform* DCBAIJBMMJA; // 0x80
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
