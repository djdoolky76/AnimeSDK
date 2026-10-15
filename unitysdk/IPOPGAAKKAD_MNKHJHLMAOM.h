#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceRegionTag.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IPOPGAAKKAD_MNKHJHLMAOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6E89C0)

	class IPOPGAAKKAD_MNKHJHLMAOM : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* NOMGIHMAEAB; // 0x10
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::CakeRaceRegionTag>* CHLPPAAJIPE; // 0x18
		::System::Int32 NMFMLFFKMFH; // 0x20
		::System::UInt32 IOBNOAFLFEC; // 0x24
		::System::UInt32 BLKOJCABBJO; // 0x28
		::System::UInt32 HIGBNCKIODM; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPOPGAAKKAD_MNKHJHLMAOM_CTOR_OFFSET))(this);
		}

	};
