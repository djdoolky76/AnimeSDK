#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JOLBKPNAIFC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB799C0)

inline static constexpr unsigned int JOLBKPNAIFC_TypeDefinitionIndex = 41936;

	class JOLBKPNAIFC : public ::System::Object
	{
	public:
		::System::Single KKPHFLJDKDH; // 0x10
		::System::Int32 EILKHIEBIKA; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLBKPNAIFC_CTOR_OFFSET))(this);
		}

	};
