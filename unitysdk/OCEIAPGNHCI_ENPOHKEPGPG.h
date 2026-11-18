#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define OCEIAPGNHCI_ENPOHKEPGPG_HMJGCAHLIFH_OFFSET UNITYSDK_OFFSET(0x1005AA10)
#define OCEIAPGNHCI_ENPOHKEPGPG_KHGDMBNJEIE_OFFSET UNITYSDK_OFFSET(0x1005AA70)
#define OCEIAPGNHCI_ENPOHKEPGPG__CTOR_OFFSET UNITYSDK_OFFSET(0x1005AA00)

inline static constexpr unsigned int OCEIAPGNHCI_ENPOHKEPGPG_TypeDefinitionIndex = 41471;

class OCEIAPGNHCI_ENPOHKEPGPG : public ::System::Object
{
public:
	::System::Action_1<::OAEFGCLEHHO*>* EJGDHCIBCJH; // 0x10
	::System::Action_1<::OAEFGCLEHHO*>* BLLNHDIDKPA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEIAPGNHCI_ENPOHKEPGPG__CTOR_OFFSET))(this);
	}

	::System::Void HMJGCAHLIFH(::OAEFGCLEHHO* IMILJHBDOGJ)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OCEIAPGNHCI_ENPOHKEPGPG_HMJGCAHLIFH_OFFSET))(this, IMILJHBDOGJ);
	}

	::System::Void KHGDMBNJEIE(::OAEFGCLEHHO* JBLGEGMELPE)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OCEIAPGNHCI_ENPOHKEPGPG_KHGDMBNJEIE_OFFSET))(this, JBLGEGMELPE);
	}
};
