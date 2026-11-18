#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GEAPOJJLAKO;
namespace System { template <typename T1, typename T2> class Func_2; }

#define GMMBMCIOBKM___C_EGCLMNDJBPL_OFFSET UNITYSDK_OFFSET(0x17AD57E0)
#define GMMBMCIOBKM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17AD5790)
#define GMMBMCIOBKM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17AD57D0)

inline static constexpr unsigned int GMMBMCIOBKM___c_TypeDefinitionIndex = 72250;

class GMMBMCIOBKM___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GMMBMCIOBKM___c_TypeDefinitionIndex)->GetStaticField(0x3B020);
	}
	static ::System::Func_2<::GEAPOJJLAKO*, ::System::Int32>** StaticGet___9__51_0()
	{
		return (::System::Func_2<::GEAPOJJLAKO*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GMMBMCIOBKM___c_TypeDefinitionIndex)->GetStaticField(0x3B028);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMMBMCIOBKM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMBMCIOBKM___C__CTOR_OFFSET))(this);
	}

	::System::Int32 EGCLMNDJBPL(::GEAPOJJLAKO* EJCBEJMGFAJ)
	{
		return ((::System::Int32(*)(::PVOID, ::GEAPOJJLAKO*))((::PBYTE)hIl2Cpp + GMMBMCIOBKM___C_EGCLMNDJBPL_OFFSET))(this, EJCBEJMGFAJ);
	}
};
