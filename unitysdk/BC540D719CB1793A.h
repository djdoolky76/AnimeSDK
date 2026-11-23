#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define BC540D719CB1793A_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1EF1510)
#define BC540D719CB1793A__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BC540D719CB1793A_TypeDefinitionIndex = 7291;

class BC540D719CB1793A : public ::System::Object
{
public:
	::System::UInt32 E05253A39CDB0751; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BC540D719CB1793A__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::BC540D719CB1793A* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::BC540D719CB1793A*))((::PBYTE)hIl2Cpp + BC540D719CB1793A_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
