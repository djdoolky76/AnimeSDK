#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define OCEIAPGNHCI_PGPNANEBIEM_IKNMPOEJMOG_OFFSET UNITYSDK_OFFSET(0x14F60920)
#define OCEIAPGNHCI_PGPNANEBIEM_NEJIGILGCFD_OFFSET UNITYSDK_OFFSET(0x14F608C0)
#define OCEIAPGNHCI_PGPNANEBIEM__CTOR_OFFSET UNITYSDK_OFFSET(0x14F608B0)

inline static constexpr unsigned int OCEIAPGNHCI_PGPNANEBIEM_TypeDefinitionIndex = 41466;

class OCEIAPGNHCI_PGPNANEBIEM : public ::System::Object
{
public:
	::System::Action_1<::OAEFGCLEHHO*>* EJGDHCIBCJH; // 0x10
	::System::Action_1<::OAEFGCLEHHO*>* BLLNHDIDKPA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEIAPGNHCI_PGPNANEBIEM__CTOR_OFFSET))(this);
	}

	::System::Void NEJIGILGCFD(::OAEFGCLEHHO* IMILJHBDOGJ)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OCEIAPGNHCI_PGPNANEBIEM_NEJIGILGCFD_OFFSET))(this, IMILJHBDOGJ);
	}

	::System::Void IKNMPOEJMOG(::OAEFGCLEHHO* JBLGEGMELPE)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OCEIAPGNHCI_PGPNANEBIEM_IKNMPOEJMOG_OFFSET))(this, JBLGEGMELPE);
	}
};
