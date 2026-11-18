#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GEIHCPAOKKK;
class IOFOPBIOOON;
namespace System { template <typename T1, typename T2> class Action_2; }

#define HAHEEBDLOKI___C_PCAKMDFLMOL_OFFSET UNITYSDK_OFFSET(0x17E294D0)
#define HAHEEBDLOKI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E29480)
#define HAHEEBDLOKI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17E294C0)

inline static constexpr unsigned int HAHEEBDLOKI___c_TypeDefinitionIndex = 63625;

class HAHEEBDLOKI___c : public ::System::Object
{
public:
	static ::System::Action_2<::IOFOPBIOOON*, ::GEIHCPAOKKK*>** StaticGet___9__11_0()
	{
		return (::System::Action_2<::IOFOPBIOOON*, ::GEIHCPAOKKK*>**)Il2CppClass::FromTypeDefinitionIndex(HAHEEBDLOKI___c_TypeDefinitionIndex)->GetStaticField(0x46410);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HAHEEBDLOKI___c_TypeDefinitionIndex)->GetStaticField(0x46418);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAHEEBDLOKI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAHEEBDLOKI___C__CTOR_OFFSET))(this);
	}

	::System::Void PCAKMDFLMOL(::IOFOPBIOOON* HDCDJPGAGJO, ::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::PVOID, ::IOFOPBIOOON*, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + HAHEEBDLOKI___C_PCAKMDFLMOL_OFFSET))(this, HDCDJPGAGJO, OHPJHPEOFLD);
	}
};
