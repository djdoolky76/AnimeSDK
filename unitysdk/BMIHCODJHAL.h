#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AdventurePhase; }
namespace RPG::GameCore { class GameWorld; }
namespace System::Reflection { class FieldInfo; }

#define BMIHCODJHAL_AIOGOGINLHD_OFFSET UNITYSDK_OFFSET(0xBDAF050)
#define BMIHCODJHAL_CCTOR_OFFSET UNITYSDK_OFFSET(0xBDAF780)
#define BMIHCODJHAL_HCFJNBHPACH_OFFSET UNITYSDK_OFFSET(0xBDAF4A0)

inline static constexpr unsigned int BMIHCODJHAL_TypeDefinitionIndex = 50026;

	class BMIHCODJHAL : public ::System::Object
	{
	public:
		static ::System::Reflection::FieldInfo** StaticGet_JGPJDJLDDGG()
		{
			return (::System::Reflection::FieldInfo**)UnitySDK::FromName("", "BMIHCODJHAL")->GetStaticField(0x6FC10);
		}

		static ::RPG::GameCore::GameWorld** StaticGet_JEOADHBDKMO()
		{
			return (::RPG::GameCore::GameWorld**)UnitySDK::FromName("", "BMIHCODJHAL")->GetStaticField(0x6FC18);
		}

		static ::System::Reflection::FieldInfo** StaticGet_NNGFOPLABOF()
		{
			return (::System::Reflection::FieldInfo**)UnitySDK::FromName("", "BMIHCODJHAL")->GetStaticField(0x6FC20);
		}

		static ::RPG::Client::AdventurePhase** StaticGet_NOHNKAIALPJ()
		{
			return (::RPG::Client::AdventurePhase**)UnitySDK::FromName("", "BMIHCODJHAL")->GetStaticField(0x6FC28);
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
