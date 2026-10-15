#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AdventurePhase; }
namespace RPG::GameCore { class GameWorld; }
namespace System::Reflection { class FieldInfo; }

#define BMIHCODJHAL_AIOGOGINLHD_OFFSET UNITYSDK_OFFSET(0xBDAB1B0)
#define BMIHCODJHAL_CCTOR_OFFSET UNITYSDK_OFFSET(0xBDAB8E0)
#define BMIHCODJHAL_HCFJNBHPACH_OFFSET UNITYSDK_OFFSET(0xBDAB600)

inline static constexpr unsigned int BMIHCODJHAL_TypeDefinitionIndex = 50026;

	class BMIHCODJHAL : public ::System::Object
	{
	public:
		static ::RPG::GameCore::GameWorld** StaticGet_JEOADHBDKMO()
		{
			return (::RPG::GameCore::GameWorld**)UnitySDK::FromName("", "BMIHCODJHAL")->GetStaticField(0x6F490);
		}

		static ::System::Reflection::FieldInfo** StaticGet_NNGFOPLABOF()
		{
			return (::System::Reflection::FieldInfo**)UnitySDK::FromName("", "BMIHCODJHAL")->GetStaticField(0x6F498);
		}

		static ::RPG::Client::AdventurePhase** StaticGet_NOHNKAIALPJ()
		{
			return (::RPG::Client::AdventurePhase**)UnitySDK::FromName("", "BMIHCODJHAL")->GetStaticField(0x6F4A0);
		}

		static ::System::Reflection::FieldInfo** StaticGet_JGPJDJLDDGG()
		{
			return (::System::Reflection::FieldInfo**)UnitySDK::FromName("", "BMIHCODJHAL")->GetStaticField(0x6F4A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMIHCODJHAL_CCTOR_OFFSET))();
		}

		static ::System::Void AIOGOGINLHD()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMIHCODJHAL_AIOGOGINLHD_OFFSET))();
		}

		static ::System::Void HCFJNBHPACH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMIHCODJHAL_HCFJNBHPACH_OFFSET))();
		}

	};
