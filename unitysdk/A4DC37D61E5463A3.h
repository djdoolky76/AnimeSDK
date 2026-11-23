#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Config/GUID.h"
#include "unitysdk/E0B1EB005A75FE28.h"
#include "unitysdk/E379DE61A548837D.h"

#define A4DC37D61E5463A3__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A4DC37D61E5463A3_TypeDefinitionIndex = 46;

class A4DC37D61E5463A3 : public ::E379DE61A548837D
{
public:
	::ABC::Config::GUID B1E6422003773C9F; // 0x38
	::E0B1EB005A75FE28 BAA593D0D3742EAE; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A4DC37D61E5463A3__CTOR_OFFSET))(this);
	}
};
