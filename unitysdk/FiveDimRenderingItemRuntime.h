#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FiveDimRenderingItem.h"

#define FIVEDIMRENDERINGITEMRUNTIME_CTOR_OFFSET UNITYSDK_OFFSET(0x1B857ED0)
#define FIVEDIMRENDERINGITEMRUNTIME__ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B857E50)
#define FIVEDIMRENDERINGITEMRUNTIME__ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B857E90)

inline static constexpr unsigned int FiveDimRenderingItemRuntime_TypeDefinitionIndex = 48136;

	class FiveDimRenderingItemRuntime : public ::FiveDimRenderingItem
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGITEMRUNTIME_CTOR_OFFSET))(this);
		}

		::System::Void _OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGITEMRUNTIME__ONDISABLE_OFFSET))(this);
		}

		::System::Void _OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIVEDIMRENDERINGITEMRUNTIME__ONENABLE_OFFSET))(this);
		}

	};
