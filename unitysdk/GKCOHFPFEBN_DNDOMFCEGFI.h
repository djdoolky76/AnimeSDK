#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AINLDBCGKOO;
namespace MoleMole::Battle { class Entity; }

#define GKCOHFPFEBN_DNDOMFCEGFI_BKCIOJBBDBO_OFFSET UNITYSDK_OFFSET(0x149DA430)
#define GKCOHFPFEBN_DNDOMFCEGFI__CTOR_OFFSET UNITYSDK_OFFSET(0x149DA420)

inline static constexpr unsigned int GKCOHFPFEBN_DNDOMFCEGFI_TypeDefinitionIndex = 54790;

class GKCOHFPFEBN_DNDOMFCEGFI : public ::System::Object
{
public:
	::AINLDBCGKOO* LHEDOIFHALB; // 0x10
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCOHFPFEBN_DNDOMFCEGFI__CTOR_OFFSET))(this);
	}

	::System::Void BKCIOJBBDBO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCOHFPFEBN_DNDOMFCEGFI_BKCIOJBBDBO_OFFSET))(this);
	}
};
