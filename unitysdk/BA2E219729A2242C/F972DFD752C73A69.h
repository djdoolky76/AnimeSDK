#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BA2E219729A2242C_F972DFD752C73A69_B3FA9532734C3F29_OFFSET UNITYSDK_OFFSET(0x413C690)
#define BA2E219729A2242C_F972DFD752C73A69_B7528445CFAF9DBC_OFFSET UNITYSDK_OFFSET(0x413C6C0)
#define BA2E219729A2242C_F972DFD752C73A69__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace BA2E219729A2242C
{
	inline static constexpr unsigned int F972DFD752C73A69_TypeDefinitionIndex = 17140;

	class F972DFD752C73A69 : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BA2E219729A2242C_F972DFD752C73A69__CTOR_OFFSET))(this);
		}

		static ::System::Int64 B3FA9532734C3F29()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + BA2E219729A2242C_F972DFD752C73A69_B3FA9532734C3F29_OFFSET))();
		}

		static ::System::Double B7528445CFAF9DBC()
		{
			return ((::System::Double(*)())((::PBYTE)hIl2Cpp + BA2E219729A2242C_F972DFD752C73A69_B7528445CFAF9DBC_OFFSET))();
		}
	};
}
