#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EPCHCFOEJNL.h"
#include "unitysdk/System/Object.h"

#define JOMHKKNICMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD79430)

inline static constexpr unsigned int JOMHKKNICMN_TypeDefinitionIndex = 43893;

	class JOMHKKNICMN : public ::System::Object
	{
	public:
		::EPCHCFOEJNL LHIENABAKPH; // 0x10
		::System::Single BEKJOOHPKIL; // 0xC0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMHKKNICMN_CTOR_OFFSET))(this);
		}

	};
