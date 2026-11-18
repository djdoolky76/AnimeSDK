#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JJGIFAPBOPH;
namespace System { class String; }

#define DLEIBKICEDA_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x1EF9CB80)
#define DLEIBKICEDA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EF9CB10)
#define DLEIBKICEDA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EF9CA90)
#define DLEIBKICEDA__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF9CA10)

inline static constexpr unsigned int DLEIBKICEDA_TypeDefinitionIndex = 29111;

class DLEIBKICEDA : public ::System::Object
{
public:
	::JJGIFAPBOPH* KHABHIGBPIN; // 0x10

	::System::Void _ctor(::System::String* FHCKJMMOFJG, ::JJGIFAPBOPH* BEKDGKLDKOM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::JJGIFAPBOPH*))((::PBYTE)hIl2Cpp + DLEIBKICEDA__CTOR_OFFSET))(this, FHCKJMMOFJG, BEKDGKLDKOM);
	}

	::System::Void _ctor_1(::JJGIFAPBOPH* BEKDGKLDKOM)
	{
		return ((::System::Void(*)(::PVOID, ::JJGIFAPBOPH*))((::PBYTE)hIl2Cpp + DLEIBKICEDA__CTOR_1_OFFSET))(this, BEKDGKLDKOM);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEIBKICEDA_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEIBKICEDA_DPIHOJBBGLA_OFFSET))(this);
	}
};
