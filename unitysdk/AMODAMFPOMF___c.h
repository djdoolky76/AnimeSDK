#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DHPIDECJFIG;
namespace System { template <typename T> class Predicate_1; }

#define AMODAMFPOMF___C_PHIFDDBLOJE_OFFSET UNITYSDK_OFFSET(0x17A73060)
#define AMODAMFPOMF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A73010)
#define AMODAMFPOMF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17A73050)

inline static constexpr unsigned int AMODAMFPOMF___c_TypeDefinitionIndex = 10179;

class AMODAMFPOMF___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::DHPIDECJFIG*>** StaticGet___9__23_0()
	{
		return (::System::Predicate_1<::DHPIDECJFIG*>**)Il2CppClass::FromTypeDefinitionIndex(AMODAMFPOMF___c_TypeDefinitionIndex)->GetStaticField(0x7A50);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AMODAMFPOMF___c_TypeDefinitionIndex)->GetStaticField(0x7A58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMODAMFPOMF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMODAMFPOMF___C__CTOR_OFFSET))(this);
	}

	::System::Boolean PHIFDDBLOJE(::DHPIDECJFIG* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::DHPIDECJFIG*))((::PBYTE)hIl2Cpp + AMODAMFPOMF___C_PHIFDDBLOJE_OFFSET))(this, HAAEBCOBKFF);
	}
};
