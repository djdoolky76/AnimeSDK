#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KPBPGBNIDOK.h"
#include "unitysdk/System/Object.h"

#define JFNFPKPAGFK___C_LCFCPJPHJLP_OFFSET UNITYSDK_OFFSET(0x1A984B20)
#define JFNFPKPAGFK___C_PHBPOFCIOMJ_OFFSET UNITYSDK_OFFSET(0x1A984B30)
#define JFNFPKPAGFK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A984AD0)
#define JFNFPKPAGFK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A984B10)

inline static constexpr unsigned int JFNFPKPAGFK___c_TypeDefinitionIndex = 22485;

class JFNFPKPAGFK___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JFNFPKPAGFK___c_TypeDefinitionIndex)->GetStaticField(0x1EFB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFNFPKPAGFK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFNFPKPAGFK___C__CTOR_OFFSET))(this);
	}

	::KPBPGBNIDOK LCFCPJPHJLP(::System::Int32 HAAEBCOBKFF)
	{
		return ((::KPBPGBNIDOK(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JFNFPKPAGFK___C_LCFCPJPHJLP_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Int32 PHBPOFCIOMJ(::KPBPGBNIDOK HAAEBCOBKFF)
	{
		return ((::System::Int32(*)(::PVOID, ::KPBPGBNIDOK))((::PBYTE)hIl2Cpp + JFNFPKPAGFK___C_PHBPOFCIOMJ_OFFSET))(this, HAAEBCOBKFF);
	}
};
