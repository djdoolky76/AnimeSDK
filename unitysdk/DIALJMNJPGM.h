#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElfCustomerState.h"
#include "unitysdk/System/Object.h"

#define DIALJMNJPGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBEDFE0)

inline static constexpr unsigned int DIALJMNJPGM_TypeDefinitionIndex = 43074;

	class DIALJMNJPGM : public ::System::Object
	{
	public:
		::System::UInt32 FGEADJLMEOI; // 0x10
		::System::Single BPDHDJELOJA; // 0x14
		::RPG::GameCore::ElfCustomerState BDJCJOHLJKJ; // 0x18
		::System::Int32 KIPNINGLDIJ; // 0x1C
		::System::Boolean BOPGCHFNIPK; // 0x20
		::System::Boolean CINOJLDOGOL; // 0x21
		::System::Byte _padding0[0x2];
		::System::UInt32 LLDCHLHNADA; // 0x24
		::System::UInt32 GKJBKEDFHIB; // 0x28
		::System::UInt32 FDOELDMEBPE; // 0x2C
		::System::UInt32 DFEJABODPGM; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIALJMNJPGM_CTOR_OFFSET))(this);
		}

	};
