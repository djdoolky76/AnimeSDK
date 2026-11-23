#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define F03E076E695690C5_A7215BCE7A068127_AE5C8072A9A22075_E523DB9ECAE31040_OFFSET UNITYSDK_OFFSET(0x29CEA60)
#define F03E076E695690C5_A7215BCE7A068127_AE5C8072A9A22075__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace F03E076E695690C5
{
	inline static constexpr unsigned int A7215BCE7A068127_AE5C8072A9A22075_TypeDefinitionIndex = 15689;

	class A7215BCE7A068127_AE5C8072A9A22075 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* E04D2BE64FCE9814; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F03E076E695690C5_A7215BCE7A068127_AE5C8072A9A22075__CTOR_OFFSET))(this);
		}

		::System::Void E523DB9ECAE31040(::System::String* E82293C0814051A5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + F03E076E695690C5_A7215BCE7A068127_AE5C8072A9A22075_E523DB9ECAE31040_OFFSET))(this, E82293C0814051A5);
		}
	};
}
