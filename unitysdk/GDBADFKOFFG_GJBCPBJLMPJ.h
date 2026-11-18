#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoTowerHolderObject; }
namespace MoleMole::Battle { class Entity; }

#define GDBADFKOFFG_GJBCPBJLMPJ_PIJPAGADPLI_OFFSET UNITYSDK_OFFSET(0x17523F40)
#define GDBADFKOFFG_GJBCPBJLMPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17523F30)

inline static constexpr unsigned int GDBADFKOFFG_GJBCPBJLMPJ_TypeDefinitionIndex = 74142;

class GDBADFKOFFG_GJBCPBJLMPJ : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* HODAIDNDKHD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBADFKOFFG_GJBCPBJLMPJ__CTOR_OFFSET))(this);
	}

	::System::Void PIJPAGADPLI(::MoleMole::MonoTowerHolderObject* NJOAJLDJCCJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoTowerHolderObject*))((::PBYTE)hIl2Cpp + GDBADFKOFFG_GJBCPBJLMPJ_PIJPAGADPLI_OFFSET))(this, NJOAJLDJCCJ);
	}
};
