#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JOLBKPNAIFC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA7D00)

inline static constexpr unsigned int JOLBKPNAIFC_TypeDefinitionIndex = 41936;

	class JOLBKPNAIFC : public ::System::Object
	{
	public:
		::System::Int32 EILKHIEBIKA; // 0x10
		::System::Single KKPHFLJDKDH; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLBKPNAIFC_CTOR_OFFSET))(this);
		}

	};
