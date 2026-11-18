#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KCIPADHDIIN.h"

class IEFJNJDNLDP;
class NDDKGELLJPM;
class PMIIAABJCBA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKEPOAFMMKN_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x135F1720)
#define AKEPOAFMMKN_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x135F1690)
#define AKEPOAFMMKN_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x135F13E0)
#define AKEPOAFMMKN__CTOR_OFFSET UNITYSDK_OFFSET(0x135F1560)

inline static constexpr unsigned int AKEPOAFMMKN_TypeDefinitionIndex = 80447;

class AKEPOAFMMKN : public ::KCIPADHDIIN
{
public:
	::System::Collections::Generic::List_1<::NDDKGELLJPM*>* CNGININHPMN; // 0x10
	::System::Collections::Generic::List_1<::IEFJNJDNLDP*>* GIKLDDBNILH; // 0x18
	::System::Collections::Generic::List_1<::PMIIAABJCBA*>* KMKCELBEDPB; // 0x20
	::System::Boolean IIDNDLLMJPB; // 0x28
	::System::Byte _padding0[0x3];
	::System::Int32 ACOMLHHPCCH; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEPOAFMMKN__CTOR_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEPOAFMMKN_FCMNHLDLJCI_OFFSET))(this);
	}

	static ::AKEPOAFMMKN* BBPCBEEHALC()
	{
		return ((::AKEPOAFMMKN*(*)())((::PBYTE)hIl2Cpp + AKEPOAFMMKN_BBPCBEEHALC_OFFSET))();
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEPOAFMMKN_ANEOCOIFDDJ_OFFSET))(this);
	}
};
