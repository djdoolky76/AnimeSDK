#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KJKGBJNNOFB;
namespace System { template <typename T1, typename T2> class Func_2; }

#define NOHEPDCJOFF___C_MLHOFEBAIDB_OFFSET UNITYSDK_OFFSET(0x1E241810)
#define NOHEPDCJOFF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2417C0)
#define NOHEPDCJOFF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E241800)

inline static constexpr unsigned int NOHEPDCJOFF___c_TypeDefinitionIndex = 93342;

class NOHEPDCJOFF___c : public ::System::Object
{
public:
	static ::System::Func_2<::KJKGBJNNOFB*, ::System::Int32>** StaticGet___9__16_0()
	{
		return (::System::Func_2<::KJKGBJNNOFB*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NOHEPDCJOFF___c_TypeDefinitionIndex)->GetStaticField(0x526B0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NOHEPDCJOFF___c_TypeDefinitionIndex)->GetStaticField(0x526B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOHEPDCJOFF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHEPDCJOFF___C__CTOR_OFFSET))(this);
	}

	::System::Int32 MLHOFEBAIDB(::KJKGBJNNOFB* HAAEBCOBKFF)
	{
		return ((::System::Int32(*)(::PVOID, ::KJKGBJNNOFB*))((::PBYTE)hIl2Cpp + NOHEPDCJOFF___C_MLHOFEBAIDB_OFFSET))(this, HAAEBCOBKFF);
	}
};
