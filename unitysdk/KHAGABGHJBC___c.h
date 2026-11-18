#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GEIHCPAOKKK;
class NLNIIPDCABP;
namespace System { template <typename T1, typename T2> class Action_2; }

#define KHAGABGHJBC___C_ACEABJAEHIP_OFFSET UNITYSDK_OFFSET(0x18625890)
#define KHAGABGHJBC___C_NKMLFCFNMBO_OFFSET UNITYSDK_OFFSET(0x18625850)
#define KHAGABGHJBC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18625800)
#define KHAGABGHJBC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18625840)

inline static constexpr unsigned int KHAGABGHJBC___c_TypeDefinitionIndex = 52515;

class KHAGABGHJBC___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KHAGABGHJBC___c_TypeDefinitionIndex)->GetStaticField(0x3B7D0);
	}
	static ::System::Action_2<::NLNIIPDCABP*, ::GEIHCPAOKKK*>** StaticGet___9__3_0()
	{
		return (::System::Action_2<::NLNIIPDCABP*, ::GEIHCPAOKKK*>**)Il2CppClass::FromTypeDefinitionIndex(KHAGABGHJBC___c_TypeDefinitionIndex)->GetStaticField(0x3B7D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHAGABGHJBC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHAGABGHJBC___C__CTOR_OFFSET))(this);
	}

	::System::Int32 NKMLFCFNMBO(::NLNIIPDCABP* EJCBEJMGFAJ, ::NLNIIPDCABP* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::NLNIIPDCABP*, ::NLNIIPDCABP*))((::PBYTE)hIl2Cpp + KHAGABGHJBC___C_NKMLFCFNMBO_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	::System::Void ACEABJAEHIP(::NLNIIPDCABP* FNFNDIBMPDE, ::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::PVOID, ::NLNIIPDCABP*, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + KHAGABGHJBC___C_ACEABJAEHIP_OFFSET))(this, FNFNDIBMPDE, OHPJHPEOFLD);
	}
};
