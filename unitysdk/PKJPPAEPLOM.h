#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRoundType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class PKJPPAEPLOM;

#define PKJPPAEPLOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2FC6F0)
#define PKJPPAEPLOM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2FC3C0)

	class PKJPPAEPLOM : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* JAKDNHOHINO; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* LKJNMGCBCAK; // 0x18
		::Il2CppArray<::RPG::GameCore::FateRoundType>* MLNNCPNNDOO; // 0x20
		::System::UInt32 POCKPDCKPMA; // 0x28
		::System::UInt32 AENCLGAIGMD; // 0x2C
		::System::UInt32 MKPCBHODIFB; // 0x30
		::System::UInt32 LOEPLBPFMEN; // 0x34
		::System::UInt32 COPIFAPBMJH; // 0x38
		::System::UInt32 HFGNHCDNPHL; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKJPPAEPLOM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PKJPPAEPLOM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PKJPPAEPLOM*))((::PBYTE)hIl2Cpp + PKJPPAEPLOM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
