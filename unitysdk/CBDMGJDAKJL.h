#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJIEIHEDMME;
namespace MoleMole { class UIGeneralConsoleExistNormalBtnWidgetController; }

#define CBDMGJDAKJL_APIGEBKDFEE_OFFSET UNITYSDK_OFFSET(0x1152D480)
#define CBDMGJDAKJL_DAICAOJKFJE_OFFSET UNITYSDK_OFFSET(0x1152D560)
#define CBDMGJDAKJL_DJFHOFAEMFD_OFFSET UNITYSDK_OFFSET(0x1152D750)
#define CBDMGJDAKJL_EHOOPPFKLND_OFFSET UNITYSDK_OFFSET(0x1152D550)
#define CBDMGJDAKJL_IGJADPCKGCE_OFFSET UNITYSDK_OFFSET(0x1152D530)
#define CBDMGJDAKJL_JKNLBHGDEDO_OFFSET UNITYSDK_OFFSET(0x1152D470)
#define CBDMGJDAKJL_OIHIPMFKNBG_OFFSET UNITYSDK_OFFSET(0x1152D5C0)
#define CBDMGJDAKJL__CTOR_OFFSET UNITYSDK_OFFSET(0x1152D460)

inline static constexpr unsigned int CBDMGJDAKJL_TypeDefinitionIndex = 89180;

class CBDMGJDAKJL : public ::System::Object
{
public:
	::MoleMole::UIGeneralConsoleExistNormalBtnWidgetController* PHFDLMILEGI; // 0x10
	::CJIEIHEDMME* IHACKHOBPKG; // 0x18
	::System::Boolean _MNGJCIDOOED_k__BackingField; // 0x20
	::System::Byte _padding0[0x3];
	::System::Int32 ABPEOEOLLMB; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDMGJDAKJL__CTOR_OFFSET))(this);
	}

	::System::Void JKNLBHGDEDO(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CBDMGJDAKJL_JKNLBHGDEDO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void APIGEBKDFEE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDMGJDAKJL_APIGEBKDFEE_OFFSET))(this);
	}

	::System::Void IGJADPCKGCE(::System::Boolean LFPIKGNKOLM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CBDMGJDAKJL_IGJADPCKGCE_OFFSET))(this, LFPIKGNKOLM);
	}

	::System::Boolean EHOOPPFKLND()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDMGJDAKJL_EHOOPPFKLND_OFFSET))(this);
	}

	::System::Void DAICAOJKFJE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDMGJDAKJL_DAICAOJKFJE_OFFSET))(this);
	}

	::System::Boolean OIHIPMFKNBG(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Boolean(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + CBDMGJDAKJL_OIHIPMFKNBG_OFFSET))(this, LADPIPOMBJM);
	}

	::System::Boolean DJFHOFAEMFD(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Boolean(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + CBDMGJDAKJL_DJFHOFAEMFD_OFFSET))(this, LADPIPOMBJM);
	}
};
