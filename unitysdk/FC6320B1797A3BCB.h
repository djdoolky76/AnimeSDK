#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define FC6320B1797A3BCB_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define FC6320B1797A3BCB__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FC6320B1797A3BCB_TypeDefinitionIndex = 8295;

class FC6320B1797A3BCB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FC6320B1797A3BCB__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::FC6320B1797A3BCB* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::FC6320B1797A3BCB*))((::PBYTE)hIl2Cpp + FC6320B1797A3BCB_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
