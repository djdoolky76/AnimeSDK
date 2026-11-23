#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define BC4A1F0045042C59_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1F1FEF0)
#define BC4A1F0045042C59__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BC4A1F0045042C59_TypeDefinitionIndex = 7530;

class BC4A1F0045042C59 : public ::System::Object
{
public:
	::Il2CppArray<::System::Byte>* A097A103A9647362; // 0x10
	::Il2CppArray<::System::Byte>* BBB1164E9CC74F96; // 0x18

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::BC4A1F0045042C59* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::BC4A1F0045042C59*))((::PBYTE)hIl2Cpp + BC4A1F0045042C59_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BC4A1F0045042C59__CTOR_OFFSET))(this);
	}
};
