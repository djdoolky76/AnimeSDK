#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T> class Comparison_1; }

#define BBGMJICNHFO___C_PFPPKKNHCNB_OFFSET UNITYSDK_OFFSET(0x186626C0)
#define BBGMJICNHFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18662670)
#define BBGMJICNHFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x186626B0)

inline static constexpr unsigned int BBGMJICNHFO___c_TypeDefinitionIndex = 58909;

class BBGMJICNHFO___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::MoleMole::Battle::Entity*>** StaticGet___9__103_0()
	{
		return (::System::Comparison_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(BBGMJICNHFO___c_TypeDefinitionIndex)->GetStaticField(0x42D50);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BBGMJICNHFO___c_TypeDefinitionIndex)->GetStaticField(0x42D58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBGMJICNHFO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBGMJICNHFO___C__CTOR_OFFSET))(this);
	}

	::System::Int32 PFPPKKNHCNB(::MoleMole::Battle::Entity* AIOCFHKOOKN, ::MoleMole::Battle::Entity* FLBCCCLPGIB)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BBGMJICNHFO___C_PFPPKKNHCNB_OFFSET))(this, AIOCFHKOOKN, FLBCCCLPGIB);
	}
};
