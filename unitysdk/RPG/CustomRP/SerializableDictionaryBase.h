#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_SERIALIZABLEDICTIONARYBASE_CTOR_OFFSET UNITYSDK_OFFSET(0xEF53D60)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int SerializableDictionaryBase_TypeDefinitionIndex = 52957;

	class SerializableDictionaryBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SERIALIZABLEDICTIONARYBASE_CTOR_OFFSET))(this);
		}

	};
}
