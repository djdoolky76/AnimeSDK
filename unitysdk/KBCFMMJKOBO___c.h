#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define KBCFMMJKOBO___C_DDFHDJJEAKH_OFFSET UNITYSDK_OFFSET(0x15B78D60)
#define KBCFMMJKOBO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B78D10)
#define KBCFMMJKOBO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15B78D50)

inline static constexpr unsigned int KBCFMMJKOBO___c_TypeDefinitionIndex = 41943;

class KBCFMMJKOBO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KBCFMMJKOBO___c_TypeDefinitionIndex)->GetStaticField(0x38150);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBCFMMJKOBO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCFMMJKOBO___C__CTOR_OFFSET))(this);
	}

	::System::Void DDFHDJJEAKH(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KBCFMMJKOBO___C_DDFHDJJEAKH_OFFSET))(this, KECKGDFIALJ);
	}
};
