#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KCIPADHDIIN.h"

class FEFOELKPLMI;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IFBOLDAKPPD_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0xEBC9720)
#define IFBOLDAKPPD_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0xEBC97B0)
#define IFBOLDAKPPD_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0xEBC95A0)
#define IFBOLDAKPPD__CTOR_OFFSET UNITYSDK_OFFSET(0xEBC96A0)

inline static constexpr unsigned int IFBOLDAKPPD_TypeDefinitionIndex = 73270;

class IFBOLDAKPPD : public ::KCIPADHDIIN
{
public:
	::System::Collections::Generic::List_1<::FEFOELKPLMI*>* BGCMILFHGIP; // 0x10
	::System::Int32 HDCOGNIILJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBOLDAKPPD__CTOR_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBOLDAKPPD_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBOLDAKPPD_ANEOCOIFDDJ_OFFSET))(this);
	}

	static ::IFBOLDAKPPD* BBPCBEEHALC()
	{
		return ((::IFBOLDAKPPD*(*)())((::PBYTE)hIl2Cpp + IFBOLDAKPPD_BBPCBEEHALC_OFFSET))();
	}
};
