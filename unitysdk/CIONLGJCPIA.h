#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EJLCJOMCEKJ.h"

namespace MoleMole { class UIGeneralBtn03WidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CIONLGJCPIA_BLPODMDKEIP_OFFSET UNITYSDK_OFFSET(0x1154F3B0)
#define CIONLGJCPIA_DHILGFIJIMI_OFFSET UNITYSDK_OFFSET(0x1154EC70)
#define CIONLGJCPIA_ENDBJNMELCD_OFFSET UNITYSDK_OFFSET(0x1154F6E0)
#define CIONLGJCPIA_GNGBDIDKNLO_OFFSET UNITYSDK_OFFSET(0x1154EED0)
#define CIONLGJCPIA_NKPAGONEHCH_OFFSET UNITYSDK_OFFSET(0x1154EA60)
#define CIONLGJCPIA_OBBJKALBMFL_OFFSET UNITYSDK_OFFSET(0x1154EE40)
#define CIONLGJCPIA__CTOR_OFFSET UNITYSDK_OFFSET(0x1154EE30)

inline static constexpr unsigned int CIONLGJCPIA_TypeDefinitionIndex = 51254;

class CIONLGJCPIA : public ::EJLCJOMCEKJ
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* PKMCKAEDFDB; // 0x20
	::MoleMole::UIGeneralBtn03WidgetController* LKFDJBECGGN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIONLGJCPIA__CTOR_OFFSET))(this);
	}

	::System::Void NKPAGONEHCH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIONLGJCPIA_NKPAGONEHCH_OFFSET))(this);
	}

	::System::Void OBBJKALBMFL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIONLGJCPIA_OBBJKALBMFL_OFFSET))(this);
	}

	::System::Void GNGBDIDKNLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIONLGJCPIA_GNGBDIDKNLO_OFFSET))(this);
	}

	::System::Void DHILGFIJIMI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIONLGJCPIA_DHILGFIJIMI_OFFSET))(this);
	}

	::System::Void ENDBJNMELCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIONLGJCPIA_ENDBJNMELCD_OFFSET))(this);
	}

	::System::Void BLPODMDKEIP(::System::Int32 PAAAECBCAFA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CIONLGJCPIA_BLPODMDKEIP_OFFSET))(this, PAAAECBCAFA);
	}
};
