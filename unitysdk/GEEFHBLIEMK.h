#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define GEEFHBLIEMK__CTOR_OFFSET UNITYSDK_OFFSET(0x11CA3EE0)

inline static constexpr unsigned int GEEFHBLIEMK_TypeDefinitionIndex = 60189;

class GEEFHBLIEMK : public ::System::Attribute
{
public:
	::Il2CppArray<::System::Type*>* CHEPFHJDLNG; // 0x10

	::System::Void _ctor(::Il2CppArray<::System::Type*>* MANIKLJEGNG)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + GEEFHBLIEMK__CTOR_OFFSET))(this, MANIKLJEGNG);
	}
};
