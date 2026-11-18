#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define DBJFFDGJBON_PBLLLCAPCHE_ODHLOCACHGH_OFFSET UNITYSDK_OFFSET(0x15A28B50)
#define DBJFFDGJBON_PBLLLCAPCHE__CTOR_OFFSET UNITYSDK_OFFSET(0x15A28B40)

inline static constexpr unsigned int DBJFFDGJBON_PBLLLCAPCHE_TypeDefinitionIndex = 58233;

class DBJFFDGJBON_PBLLLCAPCHE : public ::System::Object
{
public:
	::System::Int32 PJJPKPCBFNI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBJFFDGJBON_PBLLLCAPCHE__CTOR_OFFSET))(this);
	}

	::System::Boolean ODHLOCACHGH(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DBJFFDGJBON_PBLLLCAPCHE_ODHLOCACHGH_OFFSET))(this, KECKGDFIALJ);
	}
};
