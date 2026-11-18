#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFMDDIOEJGI.h"
#include "unitysdk/System/Object.h"

class KOIDMLPJGML;
namespace System { template <typename T1, typename T2> class Func_2; }

#define PDBMCIAEGOE___C_HCJPCLHFPJM_OFFSET UNITYSDK_OFFSET(0x1AFD6F00)
#define PDBMCIAEGOE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AFD6EB0)
#define PDBMCIAEGOE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFD6EF0)

inline static constexpr unsigned int PDBMCIAEGOE___c_TypeDefinitionIndex = 76924;

class PDBMCIAEGOE___c : public ::System::Object
{
public:
	static ::System::Func_2<::IFMDDIOEJGI, ::KOIDMLPJGML*>** StaticGet___9__22_0()
	{
		return (::System::Func_2<::IFMDDIOEJGI, ::KOIDMLPJGML*>**)Il2CppClass::FromTypeDefinitionIndex(PDBMCIAEGOE___c_TypeDefinitionIndex)->GetStaticField(0x49320);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PDBMCIAEGOE___c_TypeDefinitionIndex)->GetStaticField(0x49328);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDBMCIAEGOE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDBMCIAEGOE___C__CTOR_OFFSET))(this);
	}

	::KOIDMLPJGML* HCJPCLHFPJM(::IFMDDIOEJGI HMMMOCJAEOA)
	{
		return ((::KOIDMLPJGML*(*)(::PVOID, ::IFMDDIOEJGI))((::PBYTE)hIl2Cpp + PDBMCIAEGOE___C_HCJPCLHFPJM_OFFSET))(this, HMMMOCJAEOA);
	}
};
