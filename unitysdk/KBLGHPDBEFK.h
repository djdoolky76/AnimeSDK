#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class BMAILCLKJNE;
class IOOIHHOJOPI;
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIGeneralFilterPopWindowController; }
namespace MoleMole { class UIGeneralToggleWidgetController; }

#define KBLGHPDBEFK_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x155DA1C0)
#define KBLGHPDBEFK_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x155D9C80)
#define KBLGHPDBEFK_HNLBHPIMBID_OFFSET UNITYSDK_OFFSET(0x155D9FF0)
#define KBLGHPDBEFK_JMKAFDIPMEM_OFFSET UNITYSDK_OFFSET(0x155DA150)
#define KBLGHPDBEFK_ODIEHONECLF_OFFSET UNITYSDK_OFFSET(0x155D9D20)
#define KBLGHPDBEFK__CTOR_OFFSET UNITYSDK_OFFSET(0x155D9CD0)

inline static constexpr unsigned int KBLGHPDBEFK_TypeDefinitionIndex = 75424;

class KBLGHPDBEFK : public ::PBJOCICFNGK
{
public:
	// static const ::System::Int32 MNGPKALPFPN = 0x0; // 0x0
	// static const ::System::String* BLCEMBMHOJK; // 0x0
	::MoleMole::UIGeneralToggleWidgetController* EOPOIBOELCJ; // 0x50
	::MoleMole::UIGeneralFilterPopWindowController* GHLFIBDPIBK; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBLGHPDBEFK__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + KBLGHPDBEFK_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void ODIEHONECLF(::System::Boolean LPAEKPPKPED, ::System::Int32 PDILCNBMHOI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + KBLGHPDBEFK_ODIEHONECLF_OFFSET))(this, LPAEKPPKPED, PDILCNBMHOI);
	}

	::System::Void HNLBHPIMBID(::System::Int32 PDILCNBMHOI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KBLGHPDBEFK_HNLBHPIMBID_OFFSET))(this, PDILCNBMHOI);
	}

	::BMAILCLKJNE* JMKAFDIPMEM()
	{
		return ((::BMAILCLKJNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBLGHPDBEFK_JMKAFDIPMEM_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::UIBaseController* FCHMEANLOBJ, ::MoleMole::UIGeneralFilterPopWindowController* CINBLOFEMCD, ::System::Int32 PDILCNBMHOI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::MoleMole::UIGeneralFilterPopWindowController*, ::System::Int32))((::PBYTE)hIl2Cpp + KBLGHPDBEFK_BBOMJDBNHIC_OFFSET))(this, FCHMEANLOBJ, CINBLOFEMCD, PDILCNBMHOI);
	}
};
