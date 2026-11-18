#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLPJECICNDE.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_INLEVELCUSTOMIZEDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x13EED4B0)

namespace MoleMole
{
	inline static constexpr unsigned int InLevelCustomizedData_TypeDefinitionIndex = 64495;

	class InLevelCustomizedData : public ::System::Object
	{
	public:
		::System::String* paramName; // 0x10
		::BLPJECICNDE paramType; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* paramComment; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELCUSTOMIZEDDATA__CTOR_OFFSET))(this);
		}
	};
}
