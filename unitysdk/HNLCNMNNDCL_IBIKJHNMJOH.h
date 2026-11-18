#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define HNLCNMNNDCL_IBIKJHNMJOH_EBIIIEKGOCP_OFFSET UNITYSDK_OFFSET(0x773570)
#define HNLCNMNNDCL_IBIKJHNMJOH_EQUALS_OFFSET UNITYSDK_OFFSET(0x7734E0)
#define HNLCNMNNDCL_IBIKJHNMJOH_PADHEHLKBDO_OFFSET UNITYSDK_OFFSET(0x773560)
#define HNLCNMNNDCL_IBIKJHNMJOH__CCTOR_OFFSET UNITYSDK_OFFSET(0x15DCE7C0)

inline static constexpr unsigned int HNLCNMNNDCL_IBIKJHNMJOH_TypeDefinitionIndex = 47710;

struct alignas(8) HNLCNMNNDCL_IBIKJHNMJOH
{
	static ::HNLCNMNNDCL_IBIKJHNMJOH* StaticGet_FDJHEBHLJLD()
	{
		return (::HNLCNMNNDCL_IBIKJHNMJOH*)Il2CppClass::FromTypeDefinitionIndex(HNLCNMNNDCL_IBIKJHNMJOH_TypeDefinitionIndex)->GetStaticField(0x40C30);
	}
	::System::Int32 MGMDLMBEDJF; // 0x10
	::System::Int32 GLPGONDHMLI; // 0x14
	::System::Func_2<::System::Int32, ::System::Boolean>* AMMNBINFGDD; // 0x18

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNLCNMNNDCL_IBIKJHNMJOH__CCTOR_OFFSET))();
	}

	/*
	::System::Boolean Equals(::HNLCNMNNDCL_IBIKJHNMJOH LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::HNLCNMNNDCL_IBIKJHNMJOH))((::PBYTE)hIl2Cpp + HNLCNMNNDCL_IBIKJHNMJOH_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean PADHEHLKBDO(::System::Object* LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HNLCNMNNDCL_IBIKJHNMJOH_PADHEHLKBDO_OFFSET))(this, LIBPKNHDIGP);
	}

	/*
	::System::Int32 EBIIIEKGOCP(::HNLCNMNNDCL_IBIKJHNMJOH PHHDHIBOCKA)
	{
		return ((::System::Int32(*)(::PVOID, ::HNLCNMNNDCL_IBIKJHNMJOH))((::PBYTE)hIl2Cpp + HNLCNMNNDCL_IBIKJHNMJOH_EBIIIEKGOCP_OFFSET))(this, PHHDHIBOCKA);
	}
	*/
};
