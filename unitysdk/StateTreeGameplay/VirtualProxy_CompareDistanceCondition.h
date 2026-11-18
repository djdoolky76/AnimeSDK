#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeGameplay/VirtualProxy_StateTreeCommonConditionBase.h"
#include "unitysdk/UnrealTypes/DataValidationResult.h"
#include "unitysdk/StateTreeCore/StateTreeDataView.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/UnrealTypes/FReadOnlyStructView.h"
#include "unitysdk/UnrealTypes/FStructView.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Struct; }

#define STATETREEGAMEPLAY_VIRTUALPROXY_COMPAREDISTANCECONDITION_COMPILE_OFFSET UNITYSDK_OFFSET(0x1E1A2050)
#define STATETREEGAMEPLAY_VIRTUALPROXY_COMPAREDISTANCECONDITION_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x1E1A20D0)
#define STATETREEGAMEPLAY_VIRTUALPROXY_COMPAREDISTANCECONDITION_TESTCONDITION_OFFSET UNITYSDK_OFFSET(0x1E1A2130)
#define STATETREEGAMEPLAY_VIRTUALPROXY_COMPAREDISTANCECONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1A21A0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int VirtualProxy_CompareDistanceCondition_TypeDefinitionIndex = 63758;

	class VirtualProxy_CompareDistanceCondition : public ::StateTreeGameplay::VirtualProxy_StateTreeCommonConditionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALPROXY_COMPAREDISTANCECONDITION__CTOR_OFFSET))(this);
		}

		::UnrealTypes::DataValidationResult Compile(::UnrealTypes::FStructView& self, ::StateTreeCore::StateTreeDataView instanceDataView)
		{
			return ((::UnrealTypes::DataValidationResult(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALPROXY_COMPAREDISTANCECONDITION_COMPILE_OFFSET))(this, self, instanceDataView);
		}

		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::UnrealTypes::FReadOnlyStructView& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALPROXY_COMPAREDISTANCECONDITION_GETINSTANCEDATATYPE_OFFSET))(this, self);
		}

		::System::Boolean TestCondition(::UnrealTypes::FReadOnlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALPROXY_COMPAREDISTANCECONDITION_TESTCONDITION_OFFSET))(this, self, context);
		}
	};
}
