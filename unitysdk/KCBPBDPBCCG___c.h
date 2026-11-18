#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FMDGDHCHEGP;
namespace System { template <typename T> class Predicate_1; }

#define KCBPBDPBCCG___C_NLNGNHLEPOI_OFFSET UNITYSDK_OFFSET(0x163308E0)
#define KCBPBDPBCCG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16330890)
#define KCBPBDPBCCG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x163308D0)

inline static constexpr unsigned int KCBPBDPBCCG___c_TypeDefinitionIndex = 42248;

class KCBPBDPBCCG___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::FMDGDHCHEGP*>** StaticGet___9__10_0()
	{
		return (::System::Predicate_1<::FMDGDHCHEGP*>**)Il2CppClass::FromTypeDefinitionIndex(KCBPBDPBCCG___c_TypeDefinitionIndex)->GetStaticField(0x444F0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KCBPBDPBCCG___c_TypeDefinitionIndex)->GetStaticField(0x444F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCBPBDPBCCG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCBPBDPBCCG___C__CTOR_OFFSET))(this);
	}

	::System::Boolean NLNGNHLEPOI(::FMDGDHCHEGP* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::FMDGDHCHEGP*))((::PBYTE)hIl2Cpp + KCBPBDPBCCG___C_NLNGNHLEPOI_OFFSET))(this, HAAEBCOBKFF);
	}
};
