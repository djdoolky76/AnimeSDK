#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsComponent; }
namespace System { template <typename T> class Predicate_1; }

#define GDIACAHPLBB___C_APGMBIGCIEF_OFFSET UNITYSDK_OFFSET(0x179D9110)
#define GDIACAHPLBB___C_DNGGEMGOCCK_OFFSET UNITYSDK_OFFSET(0x179D9180)
#define GDIACAHPLBB___C_KIIDNOLCHFN_OFFSET UNITYSDK_OFFSET(0x179D9030)
#define GDIACAHPLBB___C_PPAEALFNHAM_OFFSET UNITYSDK_OFFSET(0x179D90A0)
#define GDIACAHPLBB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x179D8FE0)
#define GDIACAHPLBB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x179D9020)

inline static constexpr unsigned int GDIACAHPLBB___c_TypeDefinitionIndex = 73277;

class GDIACAHPLBB___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GDIACAHPLBB___c_TypeDefinitionIndex)->GetStaticField(0x37830);
	}
	static ::System::Predicate_1<::Nap::NapECS::EcsComponent*>** StaticGet___9__71_1()
	{
		return (::System::Predicate_1<::Nap::NapECS::EcsComponent*>**)Il2CppClass::FromTypeDefinitionIndex(GDIACAHPLBB___c_TypeDefinitionIndex)->GetStaticField(0x37838);
	}
	static ::System::Predicate_1<::Nap::NapECS::EcsComponent*>** StaticGet___9__70_0()
	{
		return (::System::Predicate_1<::Nap::NapECS::EcsComponent*>**)Il2CppClass::FromTypeDefinitionIndex(GDIACAHPLBB___c_TypeDefinitionIndex)->GetStaticField(0x37840);
	}
	static ::System::Predicate_1<::Nap::NapECS::EcsComponent*>** StaticGet___9__70_1()
	{
		return (::System::Predicate_1<::Nap::NapECS::EcsComponent*>**)Il2CppClass::FromTypeDefinitionIndex(GDIACAHPLBB___c_TypeDefinitionIndex)->GetStaticField(0x37848);
	}
	static ::System::Predicate_1<::Nap::NapECS::EcsComponent*>** StaticGet___9__71_0()
	{
		return (::System::Predicate_1<::Nap::NapECS::EcsComponent*>**)Il2CppClass::FromTypeDefinitionIndex(GDIACAHPLBB___c_TypeDefinitionIndex)->GetStaticField(0x37850);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDIACAHPLBB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIACAHPLBB___C__CTOR_OFFSET))(this);
	}

	::System::Boolean KIIDNOLCHFN(::Nap::NapECS::EcsComponent* GBELIHABEDH)
	{
		return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsComponent*))((::PBYTE)hIl2Cpp + GDIACAHPLBB___C_KIIDNOLCHFN_OFFSET))(this, GBELIHABEDH);
	}

	::System::Boolean PPAEALFNHAM(::Nap::NapECS::EcsComponent* GBELIHABEDH)
	{
		return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsComponent*))((::PBYTE)hIl2Cpp + GDIACAHPLBB___C_PPAEALFNHAM_OFFSET))(this, GBELIHABEDH);
	}

	::System::Boolean APGMBIGCIEF(::Nap::NapECS::EcsComponent* GBELIHABEDH)
	{
		return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsComponent*))((::PBYTE)hIl2Cpp + GDIACAHPLBB___C_APGMBIGCIEF_OFFSET))(this, GBELIHABEDH);
	}

	::System::Boolean DNGGEMGOCCK(::Nap::NapECS::EcsComponent* GBELIHABEDH)
	{
		return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsComponent*))((::PBYTE)hIl2Cpp + GDIACAHPLBB___C_DNGGEMGOCCK_OFFSET))(this, GBELIHABEDH);
	}
};
