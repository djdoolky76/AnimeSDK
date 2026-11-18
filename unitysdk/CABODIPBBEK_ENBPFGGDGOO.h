#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CABODIPBBEK_ENBPFGGDGOO_GJGAIMIKJEH_OFFSET UNITYSDK_OFFSET(0x18DBE510)
#define CABODIPBBEK_ENBPFGGDGOO__CTOR_OFFSET UNITYSDK_OFFSET(0x18DBE500)

inline static constexpr unsigned int CABODIPBBEK_ENBPFGGDGOO_TypeDefinitionIndex = 91311;

class CABODIPBBEK_ENBPFGGDGOO : public ::System::Object
{
public:
	::Foundation::ViewObject::ViewObjectHandle OMPHGGCEIBD; // 0x10
	::System::String* PMMOBMKAHPI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CABODIPBBEK_ENBPFGGDGOO__CTOR_OFFSET))(this);
	}

	::System::Void GJGAIMIKJEH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CABODIPBBEK_ENBPFGGDGOO_GJGAIMIKJEH_OFFSET))(this);
	}
};
