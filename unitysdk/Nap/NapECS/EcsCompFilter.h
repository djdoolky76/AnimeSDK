#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/ComponentMask.h"
#include "unitysdk/System/ValueType.h"

#define NAP_NAPECS_ECSCOMPFILTER_ADDEXCLUDE_OFFSET UNITYSDK_OFFSET(0x85FB30)
#define NAP_NAPECS_ECSCOMPFILTER_ADDINCLUDE_OFFSET UNITYSDK_OFFSET(0x85FB20)
#define NAP_NAPECS_ECSCOMPFILTER_FILTER_OFFSET UNITYSDK_OFFSET(0x85FB40)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsCompFilter_TypeDefinitionIndex = 35931;

	struct alignas(4) EcsCompFilter
	{
		::Nap::NapECS::ComponentMask CompIncludeFilter; // 0x10
		::Nap::NapECS::ComponentMask CompExcludeFilter; // 0x50
		::System::Boolean NeedExclude; // 0x90

		::System::Void AddInclude(::System::UInt16 classId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPFILTER_ADDINCLUDE_OFFSET))(this, classId);
		}

		::System::Void AddExclude(::System::UInt16 classId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPFILTER_ADDEXCLUDE_OFFSET))(this, classId);
		}

		::System::Boolean Filter(::Nap::NapECS::ComponentMask& mask)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::ComponentMask&))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPFILTER_FILTER_OFFSET))(this, mask);
		}
	};
}
