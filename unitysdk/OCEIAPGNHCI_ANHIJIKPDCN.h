#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define OCEIAPGNHCI_ANHIJIKPDCN_FJIPBIHFFDA_OFFSET UNITYSDK_OFFSET(0x1842E0E0)
#define OCEIAPGNHCI_ANHIJIKPDCN_OELJHIAKHEJ_OFFSET UNITYSDK_OFFSET(0x1842E080)
#define OCEIAPGNHCI_ANHIJIKPDCN__CTOR_OFFSET UNITYSDK_OFFSET(0x1842E070)

inline static constexpr unsigned int OCEIAPGNHCI_ANHIJIKPDCN_TypeDefinitionIndex = 41468;

class OCEIAPGNHCI_ANHIJIKPDCN : public ::System::Object
{
public:
	::System::Action_1<::OAEFGCLEHHO*>* EJGDHCIBCJH; // 0x10
	::System::Action_1<::OAEFGCLEHHO*>* BLLNHDIDKPA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEIAPGNHCI_ANHIJIKPDCN__CTOR_OFFSET))(this);
	}

	::System::Void OELJHIAKHEJ(::OAEFGCLEHHO* IMILJHBDOGJ)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OCEIAPGNHCI_ANHIJIKPDCN_OELJHIAKHEJ_OFFSET))(this, IMILJHBDOGJ);
	}

	::System::Void FJIPBIHFFDA(::OAEFGCLEHHO* JBLGEGMELPE)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OCEIAPGNHCI_ANHIJIKPDCN_FJIPBIHFFDA_OFFSET))(this, JBLGEGMELPE);
	}
};
