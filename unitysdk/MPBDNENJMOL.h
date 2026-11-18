#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MKBPNBCBCFG;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MPBDNENJMOL_ABHOKBMOHNP_OFFSET UNITYSDK_OFFSET(0x174B7340)
#define MPBDNENJMOL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x174B70A0)
#define MPBDNENJMOL_PLPBKJIFLDH_OFFSET UNITYSDK_OFFSET(0x174B6AA0)
#define MPBDNENJMOL__CTOR_OFFSET UNITYSDK_OFFSET(0x174B7330)

inline static constexpr unsigned int MPBDNENJMOL_TypeDefinitionIndex = 84353;

class MPBDNENJMOL : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* EONLLNLBEJA; // 0x10
	::System::Collections::Generic::List_1<::MKBPNBCBCFG*>* NHFIHLJECOM; // 0x18
	::System::Boolean INCFFHIIIDK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPBDNENJMOL__CTOR_OFFSET))(this);
	}

	::System::Void PLPBKJIFLDH(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Boolean OBGBAOOJKAG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + MPBDNENJMOL_PLPBKJIFLDH_OFFSET))(this, KECKGDFIALJ, OBGBAOOJKAG);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPBDNENJMOL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void ABHOKBMOHNP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPBDNENJMOL_ABHOKBMOHNP_OFFSET))(this);
	}
};
