#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AB07E24B584983C1.h"

class ED33CFFAA774AD16;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define B539FF9ACBB14AC9_A3C2F655C6B4F5E2_OFFSET UNITYSDK_OFFSET(0x1DA35B0)
#define B539FF9ACBB14AC9_A97F4C0E45F0DBE3_OFFSET UNITYSDK_OFFSET(0x1DA3090)
#define B539FF9ACBB14AC9_AFD5178090BD77F2_OFFSET UNITYSDK_OFFSET(0x1DA31A0)
#define B539FF9ACBB14AC9_BEE64E388CAC2344_OFFSET UNITYSDK_OFFSET(0x1DA3910)
#define B539FF9ACBB14AC9_F3AC94EE7C982E9B_OFFSET UNITYSDK_OFFSET(0x1DA38A0)
#define B539FF9ACBB14AC9__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA3B20)

inline static constexpr unsigned int B539FF9ACBB14AC9_TypeDefinitionIndex = 10192;

class B539FF9ACBB14AC9 : public ::AB07E24B584983C1
{
public:
	::ED33CFFAA774AD16* F3597127D1687748; // 0x50
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* A4E733E16DDEAC8F; // 0x58

	::System::Void F3AC94EE7C982E9B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B539FF9ACBB14AC9_F3AC94EE7C982E9B_OFFSET))(this);
	}

	::System::Void A3C2F655C6B4F5E2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B539FF9ACBB14AC9_A3C2F655C6B4F5E2_OFFSET))(this);
	}

	::System::Void BEE64E388CAC2344()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B539FF9ACBB14AC9_BEE64E388CAC2344_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* A97F4C0E45F0DBE3()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + B539FF9ACBB14AC9_A97F4C0E45F0DBE3_OFFSET))(this);
	}

	::System::Void AFD5178090BD77F2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B539FF9ACBB14AC9_AFD5178090BD77F2_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B539FF9ACBB14AC9__CTOR_OFFSET))(this);
	}
};
