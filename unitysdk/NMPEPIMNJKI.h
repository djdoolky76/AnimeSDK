#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class BMAILCLKJNE;
class IOOIHHOJOPI;
namespace MoleMole { class UIGeneralSortWidgetToggleInfoContext; }
namespace MoleMole { class UIGeneralToggleWidgetController; }

#define NMPEPIMNJKI_AHBFAPBCOEL_OFFSET UNITYSDK_OFFSET(0xE0AA1C0)
#define NMPEPIMNJKI_CNFMLFHPDKK_OFFSET UNITYSDK_OFFSET(0xE0A9D70)
#define NMPEPIMNJKI_DBDNKNOPPDH_OFFSET UNITYSDK_OFFSET(0xE0AA120)
#define NMPEPIMNJKI_DLJEAGFGEBN_OFFSET UNITYSDK_OFFSET(0xE0A9E50)
#define NMPEPIMNJKI_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0xE0A9BA0)
#define NMPEPIMNJKI_JMKAFDIPMEM_OFFSET UNITYSDK_OFFSET(0xE0A9CB0)
#define NMPEPIMNJKI_OKDMKDOJPLE_OFFSET UNITYSDK_OFFSET(0xE0AA230)
#define NMPEPIMNJKI_PFCKNHPNEFO_OFFSET UNITYSDK_OFFSET(0xE0AA1D0)
#define NMPEPIMNJKI__CTOR_OFFSET UNITYSDK_OFFSET(0xE0A9D20)

inline static constexpr unsigned int NMPEPIMNJKI_TypeDefinitionIndex = 84402;

class NMPEPIMNJKI : public ::PBJOCICFNGK
{
public:
	::MoleMole::UIGeneralToggleWidgetController* EOPOIBOELCJ; // 0x50
	::MoleMole::UIGeneralSortWidgetToggleInfoContext* DAAAEJDBNFI; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMPEPIMNJKI__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + NMPEPIMNJKI_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void CNFMLFHPDKK(::System::Boolean CMBKOECNKKG, ::System::Boolean OFJOIMFKEKA, ::System::Boolean IAOJECCOMPN, ::System::Boolean NLFMLIODNMO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NMPEPIMNJKI_CNFMLFHPDKK_OFFSET))(this, CMBKOECNKKG, OFJOIMFKEKA, IAOJECCOMPN, NLFMLIODNMO);
	}

	::System::Void DLJEAGFGEBN(::MoleMole::UIGeneralSortWidgetToggleInfoContext* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralSortWidgetToggleInfoContext*))((::PBYTE)hIl2Cpp + NMPEPIMNJKI_DLJEAGFGEBN_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void DBDNKNOPPDH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMPEPIMNJKI_DBDNKNOPPDH_OFFSET))(this);
	}

	::MoleMole::UIGeneralToggleWidgetController* AHBFAPBCOEL()
	{
		return ((::MoleMole::UIGeneralToggleWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMPEPIMNJKI_AHBFAPBCOEL_OFFSET))(this);
	}

	::BMAILCLKJNE* JMKAFDIPMEM()
	{
		return ((::BMAILCLKJNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMPEPIMNJKI_JMKAFDIPMEM_OFFSET))(this);
	}

	::System::Boolean PFCKNHPNEFO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NMPEPIMNJKI_PFCKNHPNEFO_OFFSET))(this);
	}

	::System::Void OKDMKDOJPLE(::System::Boolean JMEIBBLEOEL, ::System::Boolean LPANOCGIKGP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NMPEPIMNJKI_OKDMKDOJPLE_OFFSET))(this, JMEIBBLEOEL, LPANOCGIKGP);
	}
};
