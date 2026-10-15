#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_SERIALIZABLEHASHSETBASE_JMNLEBPLEGM_CTOR_OFFSET UNITYSDK_OFFSET(0xE48A510)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int SerializableHashSetBase_JMNLEBPLEGM_TypeDefinitionIndex = 51880;

	class SerializableHashSetBase_JMNLEBPLEGM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SERIALIZABLEHASHSETBASE_JMNLEBPLEGM_CTOR_OFFSET))(this);
		}

	};
}
