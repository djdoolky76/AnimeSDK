#pragma once
#include "unitysdk/unitysdk.h"

namespace TA::Iris { class IrisRenderingContext; }

#define TA_IRIS_IRISRENDERER_AD970635A668CF89_OFFSET UNITYSDK_OFFSET(0x1678550)
#define TA_IRIS_IRISRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x28E1660)

namespace TA::Iris
{
	inline static constexpr unsigned int IrisRenderer_TypeDefinitionIndex = 16365;

	class IrisRenderer
	{
	public:
		::TA::Iris::IrisRenderingContext* Context; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_IRIS_IRISRENDERER__CTOR_OFFSET))(this);
		}

		::System::Boolean AD970635A668CF89()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_IRIS_IRISRENDERER_AD970635A668CF89_OFFSET))(this);
		}
	};
}
