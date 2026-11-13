#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class LOBKCNJONAF;
namespace RPG::Client::LittleGame { class Match3EnergyViewStateBuffer; }

#define LOBKCNJONAF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1A5A0D20)
#define LOBKCNJONAF_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A5A0D90)
#define LOBKCNJONAF_CTOR_OFFSET UNITYSDK_OFFSET(0x1A5A1070)
#define LOBKCNJONAF_LGAOOKPFIMF_OFFSET UNITYSDK_OFFSET(0x1A5A0F80)
#define LOBKCNJONAF_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1A5A0E80)

inline static constexpr unsigned int LOBKCNJONAF_TypeDefinitionIndex = 67829;

	class LOBKCNJONAF : public ::MLKDDLHNNHH
	{
	public:
		::RPG::Client::LittleGame::Match3EnergyViewStateBuffer* HPINJBJLCBB; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBKCNJONAF_CTOR_OFFSET))(this);
		}

		static ::LOBKCNJONAF* BPLPBPMEODA()
		{
			return ((::LOBKCNJONAF*(*)())((::PBYTE)hIl2Cpp + LOBKCNJONAF_BPLPBPMEODA_OFFSET))();
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBKCNJONAF_CLEAR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBKCNJONAF_ONEXECUTE_OFFSET))(this);
		}

		::System::Void LGAOOKPFIMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBKCNJONAF_LGAOOKPFIMF_OFFSET))(this);
		}

	};
