#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define BAB0C2C18264FF54_A0F2096A36F66088_OFFSET UNITYSDK_OFFSET(0x20481F0)
#define BAB0C2C18264FF54_ACED4FBAFBD039FB_OFFSET UNITYSDK_OFFSET(0x2048180)
#define BAB0C2C18264FF54_FEBA495D7EBB1A54_OFFSET UNITYSDK_OFFSET(0x2048130)
#define BAB0C2C18264FF54__CTOR_OFFSET UNITYSDK_OFFSET(0x2048250)

inline static constexpr unsigned int BAB0C2C18264FF54_TypeDefinitionIndex = 8348;

class BAB0C2C18264FF54 : public ::System::Object
{
public:
	::System::Action* F665F0DFC9AEAFA4; // 0x10
	::System::Boolean A6736BF6353788DD; // 0x18

	::System::Boolean FEBA495D7EBB1A54()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BAB0C2C18264FF54_FEBA495D7EBB1A54_OFFSET))(this);
	}

	::System::Void ACED4FBAFBD039FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAB0C2C18264FF54_ACED4FBAFBD039FB_OFFSET))(this);
	}

	::System::Void A0F2096A36F66088(::System::Single EB5670302F34D4B7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BAB0C2C18264FF54_A0F2096A36F66088_OFFSET))(this, EB5670302F34D4B7);
	}

	::System::Void _ctor(::System::Action* E2A5F664113FF4C7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BAB0C2C18264FF54__CTOR_OFFSET))(this, E2A5F664113FF4C7);
	}
};
