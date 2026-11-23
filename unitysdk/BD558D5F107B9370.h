#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define BD558D5F107B9370_BA0AFB830600D2A9_OFFSET UNITYSDK_OFFSET(0x21A2B90)
#define BD558D5F107B9370_BEACCB0D98B80C21_OFFSET UNITYSDK_OFFSET(0x184BDF0)
#define BD558D5F107B9370__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAECF0)

inline static constexpr unsigned int BD558D5F107B9370_TypeDefinitionIndex = 11607;

struct alignas(8) BD558D5F107B9370
{
	::System::Object* E249D1B75C587B26; // 0x10
	::System::Object* E8F3148A854C0045; // 0x18

	::System::Object* BA0AFB830600D2A9()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BD558D5F107B9370_BA0AFB830600D2A9_OFFSET))(this);
	}

	::System::Void _ctor(::System::Object* A5C299C395D3E1B2, ::System::Object* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + BD558D5F107B9370__CTOR_OFFSET))(this, A5C299C395D3E1B2, E937D4885DAA1AE8);
	}

	::System::Object* BEACCB0D98B80C21()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BD558D5F107B9370_BEACCB0D98B80C21_OFFSET))(this);
	}
};
