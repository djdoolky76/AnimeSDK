#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define EDA8500EEA282E68_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define EDA8500EEA282E68__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EDA8500EEA282E68_TypeDefinitionIndex = 8948;

class EDA8500EEA282E68 : public ::System::Object
{
public:
	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::EDA8500EEA282E68* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::EDA8500EEA282E68*))((::PBYTE)hIl2Cpp + EDA8500EEA282E68_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDA8500EEA282E68__CTOR_OFFSET))(this);
	}
};
