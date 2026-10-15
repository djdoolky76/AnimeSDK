#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define BBDHMCAIGFI_CTOR_OFFSET UNITYSDK_OFFSET(0x15E854E0)

	class BBDHMCAIGFI : public ::System::Object
	{
	public:
		::System::UInt32 HEKPNDDKKMM; // 0x10
		::System::UInt32 HHOPLLPEKKE; // 0x14
		::System::UInt32 OHIDKMKBIGJ; // 0x18
		::System::UInt32 DGMAJPCPGNJ; // 0x1C
		::RPG::GameCore::FixPoint FKOGJCPGFPD; // 0x20
		::System::UInt32 INOIOGNMBMM; // 0x28
		::System::UInt32 FFEPLIHOFLA; // 0x2C
		::RPG::GameCore::FixPoint PFIAONCIHOG; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDHMCAIGFI_CTOR_OFFSET))(this);
		}

	};
