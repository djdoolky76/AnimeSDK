#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JEKOHJMBOOI;
namespace System { template <typename T> class Action_1; }

#define DBFOGNEFCFP___C_GIHBOPKLFKC_OFFSET UNITYSDK_OFFSET(0x1973D7B0)
#define DBFOGNEFCFP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1973D760)
#define DBFOGNEFCFP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1973D7A0)

inline static constexpr unsigned int DBFOGNEFCFP___c_TypeDefinitionIndex = 59007;

class DBFOGNEFCFP___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DBFOGNEFCFP___c_TypeDefinitionIndex)->GetStaticField(0x4CD50);
	}
	static ::System::Action_1<::JEKOHJMBOOI*>** StaticGet___9__54_0()
	{
		return (::System::Action_1<::JEKOHJMBOOI*>**)Il2CppClass::FromTypeDefinitionIndex(DBFOGNEFCFP___c_TypeDefinitionIndex)->GetStaticField(0x4CD58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBFOGNEFCFP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFOGNEFCFP___C__CTOR_OFFSET))(this);
	}

	::System::Void GIHBOPKLFKC(::JEKOHJMBOOI* HAAEBCOBKFF)
	{
		return ((::System::Void(*)(::PVOID, ::JEKOHJMBOOI*))((::PBYTE)hIl2Cpp + DBFOGNEFCFP___C_GIHBOPKLFKC_OFFSET))(this, HAAEBCOBKFF);
	}
};
