#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BANDDFEHONE;

#define IHIFPCCBKOF___C__DISPLAYCLASS33_0_CTOR_OFFSET UNITYSDK_OFFSET(0x173D98F0)
#define IHIFPCCBKOF___C__DISPLAYCLASS33_0___PREPAREELATIONACTIONPANELS_B__0_OFFSET UNITYSDK_OFFSET(0x173D9900)

inline static constexpr unsigned int IHIFPCCBKOF___c__DisplayClass33_0_TypeDefinitionIndex = 74232;

	class IHIFPCCBKOF___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::BANDDFEHONE* data; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHIFPCCBKOF___C__DISPLAYCLASS33_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __PrepareElationActionPanels_b__0(::BANDDFEHONE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BANDDFEHONE*))((::PBYTE)hIl2Cpp + IHIFPCCBKOF___C__DISPLAYCLASS33_0___PREPAREELATIONACTIONPANELS_B__0_OFFSET))(this, a1);
		}

	};
