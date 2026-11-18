#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_MATANIMATIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x12B4F990)

namespace MoleMole
{
	inline static constexpr unsigned int MatAnimationData_TypeDefinitionIndex = 77459;

	class MatAnimationData : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::String* type; // 0x18
		::System::Boolean enable; // 0x20
		::System::Byte _padding0[0x7];
		::System::Object* oldValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATANIMATIONDATA__CTOR_OFFSET))(this);
		}
	};
}
