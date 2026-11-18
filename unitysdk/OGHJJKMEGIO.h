#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JDFJEIJHICL.h"
#include "unitysdk/KFHKIBOMBDA.h"

namespace System { class String; }

#define OGHJJKMEGIO_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0xE14C8C0)
#define OGHJJKMEGIO_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0xE14C9C0)
#define OGHJJKMEGIO_EDHKKMBBHHG_OFFSET UNITYSDK_OFFSET(0xE14C7D0)
#define OGHJJKMEGIO_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0xE14C9B0)
#define OGHJJKMEGIO_TOSTRING_OFFSET UNITYSDK_OFFSET(0xE14C7E0)
#define OGHJJKMEGIO__CTOR_OFFSET UNITYSDK_OFFSET(0xE14C950)

inline static constexpr unsigned int OGHJJKMEGIO_TypeDefinitionIndex = 51318;

class OGHJJKMEGIO : public ::KFHKIBOMBDA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGHJJKMEGIO__CTOR_OFFSET))(this);
	}

	::JDFJEIJHICL EDHKKMBBHHG()
	{
		return ((::JDFJEIJHICL(*)(::PVOID))((::PBYTE)hIl2Cpp + OGHJJKMEGIO_EDHKKMBBHHG_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGHJJKMEGIO_TOSTRING_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGHJJKMEGIO_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGHJJKMEGIO_KHJELIBOECB_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGHJJKMEGIO_DPIHOJBBGLA_OFFSET))(this);
	}
};
