#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LICBHCFJLNF.h"

#define GNPPIAHDOLD_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x10F0C9E0)
#define GNPPIAHDOLD_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x10F0CA70)
#define GNPPIAHDOLD_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x10F0C900)
#define GNPPIAHDOLD__CTOR_OFFSET UNITYSDK_OFFSET(0x10F0C9D0)

inline static constexpr unsigned int GNPPIAHDOLD_TypeDefinitionIndex = 67618;

class GNPPIAHDOLD : public ::LICBHCFJLNF
{
public:
	::System::UInt32 LFEEMNNFMLJ; // 0x10
	::System::UInt32 OANCJCPDNNJ; // 0x14
	::System::UInt32 MNAIIBHLHMA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNPPIAHDOLD__CTOR_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNPPIAHDOLD_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNPPIAHDOLD_ANEOCOIFDDJ_OFFSET))(this);
	}

	static ::GNPPIAHDOLD* BBPCBEEHALC()
	{
		return ((::GNPPIAHDOLD*(*)())((::PBYTE)hIl2Cpp + GNPPIAHDOLD_BBPCBEEHALC_OFFSET))();
	}
};
