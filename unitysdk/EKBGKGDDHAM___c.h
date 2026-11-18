#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NHKLBKEABJB.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define EKBGKGDDHAM___C_EHOLHOBPIEE_OFFSET UNITYSDK_OFFSET(0x1711ACE0)
#define EKBGKGDDHAM___C_IDHEOPJIEIP_OFFSET UNITYSDK_OFFSET(0x1711AC70)
#define EKBGKGDDHAM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1711AC20)
#define EKBGKGDDHAM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1711AC60)

inline static constexpr unsigned int EKBGKGDDHAM___c_TypeDefinitionIndex = 88053;

class EKBGKGDDHAM___c : public ::System::Object
{
public:
	static ::System::Func_2<::MoleMole::Battle::Entity*, ::NHKLBKEABJB>** StaticGet___9__31_1()
	{
		return (::System::Func_2<::MoleMole::Battle::Entity*, ::NHKLBKEABJB>**)Il2CppClass::FromTypeDefinitionIndex(EKBGKGDDHAM___c_TypeDefinitionIndex)->GetStaticField(0x45FC0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EKBGKGDDHAM___c_TypeDefinitionIndex)->GetStaticField(0x45FC8);
	}
	static ::System::Func_1<::NHKLBKEABJB>** StaticGet___9__31_0()
	{
		return (::System::Func_1<::NHKLBKEABJB>**)Il2CppClass::FromTypeDefinitionIndex(EKBGKGDDHAM___c_TypeDefinitionIndex)->GetStaticField(0x45FD0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKBGKGDDHAM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBGKGDDHAM___C__CTOR_OFFSET))(this);
	}

	::NHKLBKEABJB IDHEOPJIEIP()
	{
		return ((::NHKLBKEABJB(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBGKGDDHAM___C_IDHEOPJIEIP_OFFSET))(this);
	}

	::NHKLBKEABJB EHOLHOBPIEE(::MoleMole::Battle::Entity* NFFNEFLKPDG)
	{
		return ((::NHKLBKEABJB(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + EKBGKGDDHAM___C_EHOLHOBPIEE_OFFSET))(this, NFFNEFLKPDG);
	}
};
