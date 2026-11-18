#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KPBPGBNIDOK.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define BBMEACCONNF_FJLABMNPFGE_CAGNNKLBOFL_OFFSET UNITYSDK_OFFSET(0x18225CD0)
#define BBMEACCONNF_FJLABMNPFGE_GLKFMGHHJKG_OFFSET UNITYSDK_OFFSET(0x182258D0)
#define BBMEACCONNF_FJLABMNPFGE_JCPJDOIPKKI_OFFSET UNITYSDK_OFFSET(0x18225C20)
#define BBMEACCONNF_FJLABMNPFGE_NFAEDMAHNLE_1_OFFSET UNITYSDK_OFFSET(0x18225C30)
#define BBMEACCONNF_FJLABMNPFGE_NFAEDMAHNLE_OFFSET UNITYSDK_OFFSET(0x182257D0)
#define BBMEACCONNF_FJLABMNPFGE_OKMEFGGMPFG_OFFSET UNITYSDK_OFFSET(0x18225AD0)
#define BBMEACCONNF_FJLABMNPFGE__CTOR_OFFSET UNITYSDK_OFFSET(0x182257C0)

inline static constexpr unsigned int BBMEACCONNF_FJLABMNPFGE_TypeDefinitionIndex = 47187;

class BBMEACCONNF_FJLABMNPFGE : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* CAEPEJGLAOL; // 0x10
	::MoleMole::Battle::Entity* MPEMJGDJDEJ; // 0x18
	::KPBPGBNIDOK GEFOCNMCNJA; // 0x20
	::System::Boolean _CEKOKOHHDEM_k__BackingField; // 0x24

	::System::Void _ctor(::MoleMole::Battle::Entity* OAFBDCMIFAG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BBMEACCONNF_FJLABMNPFGE__CTOR_OFFSET))(this, OAFBDCMIFAG);
	}

	::System::Void NFAEDMAHNLE(::MoleMole::Battle::Entity* KECKGDFIALJ, ::KPBPGBNIDOK KKOGCPPLPNJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::KPBPGBNIDOK))((::PBYTE)hIl2Cpp + BBMEACCONNF_FJLABMNPFGE_NFAEDMAHNLE_OFFSET))(this, KECKGDFIALJ, KKOGCPPLPNJ);
	}

	::System::Void GLKFMGHHJKG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF_FJLABMNPFGE_GLKFMGHHJKG_OFFSET))(this);
	}

	::System::Void OKMEFGGMPFG(::System::Boolean FIPHFGHNNBE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BBMEACCONNF_FJLABMNPFGE_OKMEFGGMPFG_OFFSET))(this, FIPHFGHNNBE);
	}

	::System::Void JCPJDOIPKKI(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BBMEACCONNF_FJLABMNPFGE_JCPJDOIPKKI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void NFAEDMAHNLE_1(::System::Int32 AELLPLBJELA, ::MoleMole::Battle::Entity* KECKGDFIALJ, ::KPBPGBNIDOK KKOGCPPLPNJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*, ::KPBPGBNIDOK))((::PBYTE)hIl2Cpp + BBMEACCONNF_FJLABMNPFGE_NFAEDMAHNLE_1_OFFSET))(this, AELLPLBJELA, KECKGDFIALJ, KKOGCPPLPNJ);
	}

	::System::Boolean CAGNNKLBOFL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF_FJLABMNPFGE_CAGNNKLBOFL_OFFSET))(this);
	}
};
