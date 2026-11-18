#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EAKOMPBLNOG;
namespace System { template <typename T> class Action_1; }

#define DDMFPNIEPMP___C_DLIAENLPPAL_OFFSET UNITYSDK_OFFSET(0x19D59760)
#define DDMFPNIEPMP___C_FBKLINFAJLN_OFFSET UNITYSDK_OFFSET(0x19D59740)
#define DDMFPNIEPMP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D596F0)
#define DDMFPNIEPMP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19D59730)

inline static constexpr unsigned int DDMFPNIEPMP___c_TypeDefinitionIndex = 59505;

class DDMFPNIEPMP___c : public ::System::Object
{
public:
	static ::System::Action_1<::EAKOMPBLNOG*>** StaticGet___9__6_0()
	{
		return (::System::Action_1<::EAKOMPBLNOG*>**)Il2CppClass::FromTypeDefinitionIndex(DDMFPNIEPMP___c_TypeDefinitionIndex)->GetStaticField(0x40440);
	}
	static ::System::Action_1<::EAKOMPBLNOG*>** StaticGet___9__7_0()
	{
		return (::System::Action_1<::EAKOMPBLNOG*>**)Il2CppClass::FromTypeDefinitionIndex(DDMFPNIEPMP___c_TypeDefinitionIndex)->GetStaticField(0x40448);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DDMFPNIEPMP___c_TypeDefinitionIndex)->GetStaticField(0x40450);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDMFPNIEPMP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDMFPNIEPMP___C__CTOR_OFFSET))(this);
	}

	::System::Void FBKLINFAJLN(::EAKOMPBLNOG* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::EAKOMPBLNOG*))((::PBYTE)hIl2Cpp + DDMFPNIEPMP___C_FBKLINFAJLN_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void DLIAENLPPAL(::EAKOMPBLNOG* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::EAKOMPBLNOG*))((::PBYTE)hIl2Cpp + DDMFPNIEPMP___C_DLIAENLPPAL_OFFSET))(this, AAOCANGHBDG);
	}
};
