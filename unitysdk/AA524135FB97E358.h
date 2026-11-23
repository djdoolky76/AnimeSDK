#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EBC90AC81571FEEF;
namespace System { class String; }
namespace System::Globalization { class CultureInfo; }

#define AA524135FB97E358_A19E36C032EA416E_OFFSET UNITYSDK_OFFSET(0x3E604B0)
#define AA524135FB97E358_E3994E40D46F336D_OFFSET UNITYSDK_OFFSET(0x3E60420)
#define AA524135FB97E358__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3E60610)
#define AA524135FB97E358__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3E60710)
#define AA524135FB97E358__CTOR_OFFSET UNITYSDK_OFFSET(0x3E60790)

inline static constexpr unsigned int AA524135FB97E358_TypeDefinitionIndex = 14860;

class AA524135FB97E358 : public ::System::Object
{
public:
	::EBC90AC81571FEEF* FC9680310BA7A688; // 0x10
	::System::Boolean BB9D47361355C0D2; // 0x18
	::System::Boolean ECBB091F9085B7BE; // 0x19

	::System::Void _ctor(::System::String* E6798252E0149937, ::System::Boolean AE35EA9AA70EF36E, ::System::Boolean EBBB3BEFA4ED0884)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + AA524135FB97E358__CTOR_OFFSET))(this, E6798252E0149937, AE35EA9AA70EF36E, EBBB3BEFA4ED0884);
	}

	::System::Boolean E3994E40D46F336D(::AA524135FB97E358* AAC3B705B96116EF, ::System::Boolean F6727A0EF5C58A0B)
	{
		return ((::System::Boolean(*)(::PVOID, ::AA524135FB97E358*, ::System::Boolean))((::PBYTE)hIl2Cpp + AA524135FB97E358_E3994E40D46F336D_OFFSET))(this, AAC3B705B96116EF, F6727A0EF5C58A0B);
	}

	::System::Void _ctor_1(::System::Char E9B1EC1226C9BC85, ::System::Boolean F8111C18AC2B9824, ::System::Boolean AE35EA9AA70EF36E, ::System::Boolean EBBB3BEFA4ED0884)
	{
		return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + AA524135FB97E358__CTOR_1_OFFSET))(this, E9B1EC1226C9BC85, F8111C18AC2B9824, AE35EA9AA70EF36E, EBBB3BEFA4ED0884);
	}

	::System::String* A19E36C032EA416E(::System::Globalization::CultureInfo* B639ACA4E77C2506)
	{
		return ((::System::String*(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + AA524135FB97E358_A19E36C032EA416E_OFFSET))(this, B639ACA4E77C2506);
	}

	::System::Void _ctor_2(::System::Boolean AE35EA9AA70EF36E)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AA524135FB97E358__CTOR_2_OFFSET))(this, AE35EA9AA70EF36E);
	}
};
