#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_HOLLOWCARDCOMBINEANIMATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x12B4BAE0)

namespace MoleMole
{
	inline static constexpr unsigned int HollowCardCombineAnimationConfig_TypeDefinitionIndex = 74064;

	class HollowCardCombineAnimationConfig : public ::System::Object
	{
	public:
		::System::String* SmallCard; // 0x10
		::System::String* BigCard; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCARDCOMBINEANIMATIONCONFIG__CTOR_OFFSET))(this);
		}
	};
}
