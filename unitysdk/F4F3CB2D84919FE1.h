#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E12F55A5FCCCF1EC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

#define F4F3CB2D84919FE1_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x242AA80)
#define F4F3CB2D84919FE1__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F4F3CB2D84919FE1_TypeDefinitionIndex = 4238;

class F4F3CB2D84919FE1 : public ::System::Object
{
public:
	::E12F55A5FCCCF1EC A8FA03AB120F3647; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F4F3CB2D84919FE1__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F4F3CB2D84919FE1*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F4F3CB2D84919FE1*&))((::PBYTE)hIl2Cpp + F4F3CB2D84919FE1_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
