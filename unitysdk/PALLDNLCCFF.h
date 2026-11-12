#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class IEOMGIBLHJB;
class NJKFOJJDGGG;

#define PALLDNLCCFF_CTOR_OFFSET UNITYSDK_OFFSET(0xC8D4F80)
#define PALLDNLCCFF_DNEFBHADJHJ_OFFSET UNITYSDK_OFFSET(0xC8D5040)
#define PALLDNLCCFF_GET_LEFTSKIPCOUNT_OFFSET UNITYSDK_OFFSET(0xC8D51D0)
#define PALLDNLCCFF_GET_TOTALSKIPCOUNT_OFFSET UNITYSDK_OFFSET(0xC8D51B0)
#define PALLDNLCCFF_SET_LEFTSKIPCOUNT_OFFSET UNITYSDK_OFFSET(0xC8D51E0)
#define PALLDNLCCFF_SET_TOTALSKIPCOUNT_OFFSET UNITYSDK_OFFSET(0xC8D51C0)
#define PALLDNLCCFF_UPDATE_OFFSET UNITYSDK_OFFSET(0xC8D50A0)

inline static constexpr unsigned int PALLDNLCCFF_TypeDefinitionIndex = 66624;

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
