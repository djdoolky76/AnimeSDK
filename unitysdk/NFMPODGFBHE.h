#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/ShowEntryType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NFMPODGFBHE_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x105B6670)
#define NFMPODGFBHE_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x105B6C60)
#define NFMPODGFBHE_ILEEFLAOOOM_OFFSET UNITYSDK_OFFSET(0x105B66C0)
#define NFMPODGFBHE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x105B6730)
#define NFMPODGFBHE__CTOR_OFFSET UNITYSDK_OFFSET(0x105B6C50)

inline static constexpr unsigned int NFMPODGFBHE_TypeDefinitionIndex = 62001;

class NFMPODGFBHE : public ::System::Object
{
public:
	::System::String* HKAGGHDEHKF; // 0x10
	::System::String* ELGNJFIOBAA; // 0x18
	::System::String* MCOHLHMKLIP; // 0x20
	::System::Boolean BEBGMPKLCHK; // 0x28
	::System::Boolean HAFDIMGJBHC; // 0x29
	::System::Boolean OMMICGMHOGA; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 DBHFIJGFPOK; // 0x2C
	::MoleMole::HollowChessboard::ShowEntryType OBNIAHNMHPF; // 0x30
	::System::Int32 EIHJFFOMCHD; // 0x34
	::System::Int32 BGBJPCJGJHE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMPODGFBHE__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMPODGFBHE_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 ILEEFLAOOOM()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMPODGFBHE_ILEEFLAOOOM_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMPODGFBHE_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMPODGFBHE_DPIHOJBBGLA_OFFSET))(this);
	}
};
