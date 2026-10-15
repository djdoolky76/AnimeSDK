#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class IEOMGIBLHJB;
class NJKFOJJDGGG;

#define PALLDNLCCFF_CTOR_OFFSET UNITYSDK_OFFSET(0xBFD2100)
#define PALLDNLCCFF_DNEFBHADJHJ_OFFSET UNITYSDK_OFFSET(0xBFD21C0)
#define PALLDNLCCFF_GET_LEFTSKIPCOUNT_OFFSET UNITYSDK_OFFSET(0xBFD2310)
#define PALLDNLCCFF_GET_TOTALSKIPCOUNT_OFFSET UNITYSDK_OFFSET(0xBFD22F0)
#define PALLDNLCCFF_SET_LEFTSKIPCOUNT_OFFSET UNITYSDK_OFFSET(0xBFD2320)
#define PALLDNLCCFF_SET_TOTALSKIPCOUNT_OFFSET UNITYSDK_OFFSET(0xBFD2300)
#define PALLDNLCCFF_UPDATE_OFFSET UNITYSDK_OFFSET(0xBFD2220)

	class PALLDNLCCFF : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::UInt32 _LeftSkipCount_k__BackingField; // 0x28
		::System::UInt32 _TotalSkipCount_k__BackingField; // 0x2C
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + PALLDNLCCFF_CTOR_OFFSET))(this, a1);
		}

		::System::Void Update(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + PALLDNLCCFF_UPDATE_OFFSET))(this, a1);
		}

		::System::Void DNEFBHADJHJ(::IEOMGIBLHJB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEOMGIBLHJB*))((::PBYTE)hIl2Cpp + PALLDNLCCFF_DNEFBHADJHJ_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalSkipCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PALLDNLCCFF_GET_TOTALSKIPCOUNT_OFFSET))(this);
		}

		::System::Void set_TotalSkipCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PALLDNLCCFF_SET_TOTALSKIPCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_LeftSkipCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PALLDNLCCFF_GET_LEFTSKIPCOUNT_OFFSET))(this);
		}

		::System::Void set_LeftSkipCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PALLDNLCCFF_SET_LEFTSKIPCOUNT_OFFSET))(this, a1);
		}

	};
