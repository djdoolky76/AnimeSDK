#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACNNMGIJMFK;
class CFPNIJINMJA_CJKPEHAGJHP;
class ILDNJGBJGPF;
class JBKNCCIENIP;
class PIMCPBPFGMB;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceResultBadgeNoticeViewModel_Factory; }

#define PIMCPBPFGMB_CJHAABBOLCF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC2689B0)
#define PIMCPBPFGMB_CJHAABBOLCF_CTOR_OFFSET UNITYSDK_OFFSET(0xC268990)

inline static constexpr unsigned int PIMCPBPFGMB_CJHAABBOLCF_TypeDefinitionIndex = 81611;

	class PIMCPBPFGMB_CJHAABBOLCF : public ::System::Object
	{
	public:
		::CFPNIJINMJA_CJKPEHAGJHP* BNKKJGNCMHG; // 0x10
		::JBKNCCIENIP* MPFFGNPIDOA; // 0x18
		::ACNNMGIJMFK* KOADDJDNCKO; // 0x20
		::RPG::Client::Challenge::Tierce::ChallengeTierceResultBadgeNoticeViewModel_Factory* HJADEIPGOBM; // 0x28
		::System::Void _ctor(::CFPNIJINMJA_CJKPEHAGJHP* a1, ::RPG::Client::Challenge::Tierce::ChallengeTierceResultBadgeNoticeViewModel_Factory* a2, ::JBKNCCIENIP* a3, ::ACNNMGIJMFK* a4)
		{
			return ((::System::Void(*)(::PVOID, ::CFPNIJINMJA_CJKPEHAGJHP*, ::RPG::Client::Challenge::Tierce::ChallengeTierceResultBadgeNoticeViewModel_Factory*, ::JBKNCCIENIP*, ::ACNNMGIJMFK*))((::PBYTE)hIl2Cpp + PIMCPBPFGMB_CJHAABBOLCF_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::PIMCPBPFGMB* BPLPBPMEODA(::ILDNJGBJGPF* a1)
		{
			return ((::PIMCPBPFGMB*(*)(::PVOID, ::ILDNJGBJGPF*))((::PBYTE)hIl2Cpp + PIMCPBPFGMB_CJHAABBOLCF_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
