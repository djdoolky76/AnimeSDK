#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIGDIGIBOONEWBIE_HIGHLIGHTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA4E880)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigDigibooNewbie_HighLightData_TypeDefinitionIndex = 64909;

	class ConfigDigibooNewbie_HighLightData : public ::System::Object
	{
	public:
		::System::String* Path; // 0x10
		::System::Boolean AddSortingOrder; // 0x18
		::System::Boolean DisableClick; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGDIGIBOONEWBIE_HIGHLIGHTDATA__CTOR_OFFSET))(this);
		}
	};
}
