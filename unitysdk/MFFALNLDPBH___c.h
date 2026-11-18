#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MFFALNLDPBH___C_NDLDOLFPKCP_OFFSET UNITYSDK_OFFSET(0x185301E0)
#define MFFALNLDPBH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18530190)
#define MFFALNLDPBH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x185301D0)

inline static constexpr unsigned int MFFALNLDPBH___c_TypeDefinitionIndex = 67722;

class MFFALNLDPBH___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__16_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MFFALNLDPBH___c_TypeDefinitionIndex)->GetStaticField(0x4BF90);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MFFALNLDPBH___c_TypeDefinitionIndex)->GetStaticField(0x4BF98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFFALNLDPBH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFALNLDPBH___C__CTOR_OFFSET))(this);
	}

	::System::Void NDLDOLFPKCP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFALNLDPBH___C_NDLDOLFPKCP_OFFSET))(this);
	}
};
