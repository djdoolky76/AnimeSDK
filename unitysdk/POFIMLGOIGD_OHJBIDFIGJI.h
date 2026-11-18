#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define POFIMLGOIGD_OHJBIDFIGJI_POBHFNNNGPP_OFFSET UNITYSDK_OFFSET(0x1C670460)
#define POFIMLGOIGD_OHJBIDFIGJI__CTOR_OFFSET UNITYSDK_OFFSET(0x1C670450)

inline static constexpr unsigned int POFIMLGOIGD_OHJBIDFIGJI_TypeDefinitionIndex = 57462;

class POFIMLGOIGD_OHJBIDFIGJI : public ::System::Object
{
public:
	::System::Action* BLLNHDIDKPA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POFIMLGOIGD_OHJBIDFIGJI__CTOR_OFFSET))(this);
	}

	::System::Void POBHFNNNGPP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POFIMLGOIGD_OHJBIDFIGJI_POBHFNNNGPP_OFFSET))(this);
	}
};
