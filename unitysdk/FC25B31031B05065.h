#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A79E5B44579ED434.h"

class A7D164E589ADC251;
class B4101FAB46582450;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define FC25B31031B05065_AC0E10D97ADE2187_OFFSET UNITYSDK_OFFSET(0x1DAFBF0)
#define FC25B31031B05065__CTOR_OFFSET UNITYSDK_OFFSET(0x1B49C90)

inline static constexpr unsigned int FC25B31031B05065_TypeDefinitionIndex = 10162;

class FC25B31031B05065 : public ::A79E5B44579ED434
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FC25B31031B05065__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::B4101FAB46582450*>* AC0E10D97ADE2187(::A7D164E589ADC251* ACDE58E97E37D13C)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::B4101FAB46582450*>*(*)(::PVOID, ::A7D164E589ADC251*))((::PBYTE)hIl2Cpp + FC25B31031B05065_AC0E10D97ADE2187_OFFSET))(this, ACDE58E97E37D13C);
	}
};
