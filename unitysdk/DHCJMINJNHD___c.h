#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BAANNHAOKEL;
namespace System { template <typename T> class Action_1; }

#define DHCJMINJNHD___C_IKEHBGKEPAC_OFFSET UNITYSDK_OFFSET(0x12BB2580)
#define DHCJMINJNHD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12BB2530)
#define DHCJMINJNHD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12BB2570)

inline static constexpr unsigned int DHCJMINJNHD___c_TypeDefinitionIndex = 44336;

class DHCJMINJNHD___c : public ::System::Object
{
public:
	static ::System::Action_1<::BAANNHAOKEL*>** StaticGet___9__1_0()
	{
		return (::System::Action_1<::BAANNHAOKEL*>**)Il2CppClass::FromTypeDefinitionIndex(DHCJMINJNHD___c_TypeDefinitionIndex)->GetStaticField(0x45E60);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DHCJMINJNHD___c_TypeDefinitionIndex)->GetStaticField(0x45E68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHCJMINJNHD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHCJMINJNHD___C__CTOR_OFFSET))(this);
	}

	::System::Void IKEHBGKEPAC(::BAANNHAOKEL* GBELIHABEDH)
	{
		return ((::System::Void(*)(::PVOID, ::BAANNHAOKEL*))((::PBYTE)hIl2Cpp + DHCJMINJNHD___C_IKEHBGKEPAC_OFFSET))(this, GBELIHABEDH);
	}
};
