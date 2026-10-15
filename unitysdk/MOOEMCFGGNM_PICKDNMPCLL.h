#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class EvolveGearConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOOEMCFGGNM_PICKDNMPCLL_CNHHOBCEHGB_OFFSET UNITYSDK_OFFSET(0xBA30AA0)
#define MOOEMCFGGNM_PICKDNMPCLL_CTOR_OFFSET UNITYSDK_OFFSET(0xBA30CE0)
#define MOOEMCFGGNM_PICKDNMPCLL_OLNFALCHJKB_OFFSET UNITYSDK_OFFSET(0xBA30C00)

inline static constexpr unsigned int MOOEMCFGGNM_PICKDNMPCLL_TypeDefinitionIndex = 56081;

	class MOOEMCFGGNM_PICKDNMPCLL : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::EvolveGearConfig*>* BPGFCIEAJKG; // 0x10
		::RPG::GameCore::FixPoint LHPPOCJCPIA; // 0x18
		::System::UInt32 LDFEJAAOLKB; // 0x20
		::System::UInt32 ILGNCEELEJJ; // 0x24
		::RPG::GameCore::FixPoint DGDEGJPPFLK; // 0x28
		::RPG::GameCore::FixPoint PBJFNFPPJEI; // 0x30
		::RPG::GameCore::FixPoint ENBFEFCDLAH; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOEMCFGGNM_PICKDNMPCLL_CTOR_OFFSET))(this);
		}

		::System::UInt32 CNHHOBCEHGB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOEMCFGGNM_PICKDNMPCLL_CNHHOBCEHGB_OFFSET))(this);
		}

		::System::Single OLNFALCHJKB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOEMCFGGNM_PICKDNMPCLL_OLNFALCHJKB_OFFSET))(this);
		}

	};
