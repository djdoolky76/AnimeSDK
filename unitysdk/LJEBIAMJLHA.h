#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAJELNMMPIP.h"

class AJAMLAJJNHA;
class GHBHLPHOOAB;
namespace MoleMole { class UIGrandMarcelAdventureChildWindowController; }

#define LJEBIAMJLHA_DLBGMLKCIIP_OFFSET UNITYSDK_OFFSET(0x16374680)
#define LJEBIAMJLHA_IBELDKINIOF_OFFSET UNITYSDK_OFFSET(0x16374490)
#define LJEBIAMJLHA_KCCFDFNOIJC_OFFSET UNITYSDK_OFFSET(0x16374670)
#define LJEBIAMJLHA_OFINMOFKGFI_OFFSET UNITYSDK_OFFSET(0x16374930)
#define LJEBIAMJLHA__CTOR_OFFSET UNITYSDK_OFFSET(0x163743F0)

inline static constexpr unsigned int LJEBIAMJLHA_TypeDefinitionIndex = 45300;

class LJEBIAMJLHA : public ::KAJELNMMPIP
{
public:
	::MoleMole::UIGrandMarcelAdventureChildWindowController* MACHGCHBMBO; // 0x48
	::GHBHLPHOOAB* IGJOPJJHPOI; // 0x50

	::System::Void _ctor(::AJAMLAJJNHA* KAINLJMNCHE)
	{
		return ((::System::Void(*)(::PVOID, ::AJAMLAJJNHA*))((::PBYTE)hIl2Cpp + LJEBIAMJLHA__CTOR_OFFSET))(this, KAINLJMNCHE);
	}

	::System::Void IBELDKINIOF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEBIAMJLHA_IBELDKINIOF_OFFSET))(this);
	}

	::System::Void KCCFDFNOIJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEBIAMJLHA_KCCFDFNOIJC_OFFSET))(this);
	}

	::System::Void DLBGMLKCIIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEBIAMJLHA_DLBGMLKCIIP_OFFSET))(this);
	}

	::System::Void OFINMOFKGFI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEBIAMJLHA_OFINMOFKGFI_OFFSET))(this);
	}
};
