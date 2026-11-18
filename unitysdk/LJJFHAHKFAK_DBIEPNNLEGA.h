#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IJEABDMMNHK;
namespace MoleMole::Battle { class Entity; }

#define LJJFHAHKFAK_DBIEPNNLEGA_HAEPCFLDOLB_OFFSET UNITYSDK_OFFSET(0x184FBA20)
#define LJJFHAHKFAK_DBIEPNNLEGA__CTOR_OFFSET UNITYSDK_OFFSET(0x184FBA10)

inline static constexpr unsigned int LJJFHAHKFAK_DBIEPNNLEGA_TypeDefinitionIndex = 71453;

class LJJFHAHKFAK_DBIEPNNLEGA : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* AMNIHACKELI; // 0x10
	::IJEABDMMNHK* ECPIDGMNINH; // 0x18
	::System::Int32 HKHHHJHCGKL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJFHAHKFAK_DBIEPNNLEGA__CTOR_OFFSET))(this);
	}

	::System::Void HAEPCFLDOLB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJFHAHKFAK_DBIEPNNLEGA_HAEPCFLDOLB_OFFSET))(this);
	}
};
