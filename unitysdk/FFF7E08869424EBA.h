#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/E70D1C5DFFBFA8D2.h"
#include "unitysdk/System/Object.h"

#define FFF7E08869424EBA_E7761722C28CA115_OFFSET UNITYSDK_OFFSET(0x2064C10)
#define FFF7E08869424EBA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FFF7E08869424EBA_TypeDefinitionIndex = 8410;

class FFF7E08869424EBA : public ::System::Object
{
public:
	static ::System::Boolean E7761722C28CA115(::System::Single A11D4EC92205DAEE, ::System::Single F38046B0C91E49B1, ::E68AA4EB51923C98::E70D1C5DFFBFA8D2 B5D6A065E45349BD)
	{
		return ((::System::Boolean(*)(::System::Single, ::System::Single, ::E68AA4EB51923C98::E70D1C5DFFBFA8D2))((::PBYTE)hIl2Cpp + FFF7E08869424EBA_E7761722C28CA115_OFFSET))(A11D4EC92205DAEE, F38046B0C91E49B1, B5D6A065E45349BD);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFF7E08869424EBA__CTOR_OFFSET))(this);
	}
};
