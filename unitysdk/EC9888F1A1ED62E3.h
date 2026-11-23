#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define EC9888F1A1ED62E3_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define EC9888F1A1ED62E3__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EC9888F1A1ED62E3_TypeDefinitionIndex = 7865;

class EC9888F1A1ED62E3 : public ::System::Object
{
public:
	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::EC9888F1A1ED62E3* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::EC9888F1A1ED62E3*))((::PBYTE)hIl2Cpp + EC9888F1A1ED62E3_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EC9888F1A1ED62E3__CTOR_OFFSET))(this);
	}
};
