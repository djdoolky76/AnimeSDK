#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EPCHCFOEJNL.h"
#include "unitysdk/System/Object.h"

#define JOMHKKNICMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB799E0)

inline static constexpr unsigned int JOMHKKNICMN_TypeDefinitionIndex = 42912;

	class JOMHKKNICMN : public ::System::Object
	{
	public:
		::System::Single BEKJOOHPKIL; // 0x10
		::EPCHCFOEJNL LHIENABAKPH; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMHKKNICMN_CTOR_OFFSET))(this);
		}

	};
