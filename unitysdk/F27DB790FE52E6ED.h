#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define F27DB790FE52E6ED_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1EA3560)
#define F27DB790FE52E6ED__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F27DB790FE52E6ED_TypeDefinitionIndex = 6698;

class F27DB790FE52E6ED : public ::System::Object
{
public:
	::System::Boolean E46D80DB71223A63; // 0x10
	::System::Byte _padding0[0x3];
	::System::UInt32 F6DB1DF39B5DB8AB; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F27DB790FE52E6ED__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::F27DB790FE52E6ED* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::F27DB790FE52E6ED*))((::PBYTE)hIl2Cpp + F27DB790FE52E6ED_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
