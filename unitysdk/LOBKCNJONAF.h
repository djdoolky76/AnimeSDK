#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class LOBKCNJONAF;
namespace RPG::Client::LittleGame { class Match3EnergyViewStateBuffer; }

#define LOBKCNJONAF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB7F38B0)
#define LOBKCNJONAF_CLEAR_OFFSET UNITYSDK_OFFSET(0xB7F3920)
#define LOBKCNJONAF_CTOR_OFFSET UNITYSDK_OFFSET(0xB7F3C00)
#define LOBKCNJONAF_LGAOOKPFIMF_OFFSET UNITYSDK_OFFSET(0xB7F3B10)
#define LOBKCNJONAF_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xB7F3A10)

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
