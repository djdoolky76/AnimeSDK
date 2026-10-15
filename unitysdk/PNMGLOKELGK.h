#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKDHBHBFEDD;
namespace RPG::GameCore { class AnimParamRangeEntry; }
namespace System { class String; }

#define PNMGLOKELGK_CTOR_OFFSET UNITYSDK_OFFSET(0xC34E230)
#define PNMGLOKELGK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC34E1E0)

	class PNMGLOKELGK : public ::System::Object
	{
	public:
		::RPG::GameCore::AnimParamRangeEntry* OPNIHKDKFAB; // 0x10
		::MKDHBHBFEDD* NGEALADFOOA; // 0x18
		::System::String* AOFHKOFDKDP; // 0x20
		::System::Boolean ACIFMOBGGBF; // 0x28
		::System::Boolean IOBJFEJFLJP; // 0x29
		::System::Byte _padding0[0x2];
		::System::Int32 PEKCBOAHBBK; // 0x2C
		::System::Boolean LKEOOOCDJOK; // 0x30
		::System::Boolean FMCDBCBAAEF; // 0x31
		::System::Boolean LBKPCHOICLE; // 0x32
		::System::Boolean ANGACHKEMLG; // 0x33
		::System::Int32 IFLMLBNGHHE; // 0x34
		::System::Single GFCFHLJEHMC; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNMGLOKELGK_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNMGLOKELGK_DISPOSE_OFFSET))(this);
		}

	};
