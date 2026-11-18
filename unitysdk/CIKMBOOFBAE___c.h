#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JJJNCBFLMGG;
namespace System { template <typename T> class Action_1; }

#define CIKMBOOFBAE___C_FKFGIOMKCGB_OFFSET UNITYSDK_OFFSET(0x1154E7E0)
#define CIKMBOOFBAE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1154E790)
#define CIKMBOOFBAE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1154E7D0)

inline static constexpr unsigned int CIKMBOOFBAE___c_TypeDefinitionIndex = 77532;

class CIKMBOOFBAE___c : public ::System::Object
{
public:
	static ::System::Action_1<::JJJNCBFLMGG*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::JJJNCBFLMGG*>**)Il2CppClass::FromTypeDefinitionIndex(CIKMBOOFBAE___c_TypeDefinitionIndex)->GetStaticField(0x43080);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CIKMBOOFBAE___c_TypeDefinitionIndex)->GetStaticField(0x43088);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIKMBOOFBAE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIKMBOOFBAE___C__CTOR_OFFSET))(this);
	}

	::System::Void FKFGIOMKCGB(::JJJNCBFLMGG* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::JJJNCBFLMGG*))((::PBYTE)hIl2Cpp + CIKMBOOFBAE___C_FKFGIOMKCGB_OFFSET))(this, GLAOEHCGCFO);
	}
};
