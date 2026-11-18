#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JIDIMFBCIEP;
class NHJNNFHNKPA;
namespace System { template <typename T> class Action_1; }

#define DHPBMNFBFBH___C_MOLGIJNFDLE_OFFSET UNITYSDK_OFFSET(0x1F544F60)
#define DHPBMNFBFBH___C_NJOJPANNEBB_OFFSET UNITYSDK_OFFSET(0x1F544F70)
#define DHPBMNFBFBH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F544F10)
#define DHPBMNFBFBH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F544F50)

inline static constexpr unsigned int DHPBMNFBFBH___c_TypeDefinitionIndex = 28836;

class DHPBMNFBFBH___c : public ::System::Object
{
public:
	static ::System::Action_1<::NHJNNFHNKPA*>** StaticGet___9__26_0()
	{
		return (::System::Action_1<::NHJNNFHNKPA*>**)Il2CppClass::FromTypeDefinitionIndex(DHPBMNFBFBH___c_TypeDefinitionIndex)->GetStaticField(0x25D20);
	}
	static ::System::Action_1<::JIDIMFBCIEP*>** StaticGet___9__37_0()
	{
		return (::System::Action_1<::JIDIMFBCIEP*>**)Il2CppClass::FromTypeDefinitionIndex(DHPBMNFBFBH___c_TypeDefinitionIndex)->GetStaticField(0x25D28);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DHPBMNFBFBH___c_TypeDefinitionIndex)->GetStaticField(0x25D30);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHPBMNFBFBH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHPBMNFBFBH___C__CTOR_OFFSET))(this);
	}

	::System::Void MOLGIJNFDLE(::NHJNNFHNKPA* HAAEBCOBKFF)
	{
		return ((::System::Void(*)(::PVOID, ::NHJNNFHNKPA*))((::PBYTE)hIl2Cpp + DHPBMNFBFBH___C_MOLGIJNFDLE_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Void NJOJPANNEBB(::JIDIMFBCIEP* GBELIHABEDH)
	{
		return ((::System::Void(*)(::PVOID, ::JIDIMFBCIEP*))((::PBYTE)hIl2Cpp + DHPBMNFBFBH___C_NJOJPANNEBB_OFFSET))(this, GBELIHABEDH);
	}
};
