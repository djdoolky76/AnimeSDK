#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace TA::Iris { class ModifierBase; }

#define TA_IRIS_IRISMODIFIERCHAIN_E34896D7B2272603_F1F9D832A44F9DD4_OFFSET UNITYSDK_OFFSET(0x2867920)
#define TA_IRIS_IRISMODIFIERCHAIN_E34896D7B2272603__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace TA::Iris
{
	inline static constexpr unsigned int IrisModifierChain_E34896D7B2272603_TypeDefinitionIndex = 16005;

	class IrisModifierChain_E34896D7B2272603 : public ::System::Object
	{
	public:
		::System::String* ED6187AE74CD752F; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_IRIS_IRISMODIFIERCHAIN_E34896D7B2272603__CTOR_OFFSET))(this);
		}

		::System::Boolean F1F9D832A44F9DD4(::TA::Iris::ModifierBase* BB8C609F76620E45)
		{
			return ((::System::Boolean(*)(::PVOID, ::TA::Iris::ModifierBase*))((::PBYTE)hIl2Cpp + TA_IRIS_IRISMODIFIERCHAIN_E34896D7B2272603_F1F9D832A44F9DD4_OFFSET))(this, BB8C609F76620E45);
		}
	};
}
