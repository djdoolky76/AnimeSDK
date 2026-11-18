#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define BGIDPGCKCIB__CTOR_OFFSET UNITYSDK_OFFSET(0x113E54C0)

inline static constexpr unsigned int BGIDPGCKCIB_TypeDefinitionIndex = 41344;

class BGIDPGCKCIB : public ::System::Attribute
{
public:
	::Il2CppArray<::System::Type*>* OJIHEIEDILH; // 0x10

	::System::Void _ctor(::Il2CppArray<::System::Type*>* EJFLFEHFBAN)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + BGIDPGCKCIB__CTOR_OFFSET))(this, EJFLFEHFBAN);
	}
};
