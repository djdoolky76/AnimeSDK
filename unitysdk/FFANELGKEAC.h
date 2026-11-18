#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LICBHCFJLNF.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define FFANELGKEAC_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x1419CF20)
#define FFANELGKEAC_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x1419CFB0)
#define FFANELGKEAC_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x1419CDC0)
#define FFANELGKEAC__CTOR_OFFSET UNITYSDK_OFFSET(0x1419CEC0)

inline static constexpr unsigned int FFANELGKEAC_TypeDefinitionIndex = 44498;

class FFANELGKEAC : public ::LICBHCFJLNF
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* GMIKICBOJCM; // 0x10
	::System::UInt32 IFPCGBJDKCH; // 0x18
	::System::UInt32 MNAIIBHLHMA; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFANELGKEAC__CTOR_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFANELGKEAC_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFANELGKEAC_ANEOCOIFDDJ_OFFSET))(this);
	}

	static ::FFANELGKEAC* BBPCBEEHALC()
	{
		return ((::FFANELGKEAC*(*)())((::PBYTE)hIl2Cpp + FFANELGKEAC_BBPCBEEHALC_OFFSET))();
	}
};
