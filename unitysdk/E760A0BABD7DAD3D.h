#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AD61077CFCBEFAEA.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E865F6F8B8B44C1E.h"

#define E760A0BABD7DAD3D__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E760A0BABD7DAD3D_TypeDefinitionIndex = 7384;

class E760A0BABD7DAD3D : public ::E379DE61A548837D
{
public:
	::E865F6F8B8B44C1E AF41532E7F7801AD; // 0x38
	::AD61077CFCBEFAEA BE7797D345032773; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E760A0BABD7DAD3D__CTOR_OFFSET))(this);
	}
};
