#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIWindowController; }

#define PMIHPKKOCGI_CCBDDNHFOIJ_OFFSET UNITYSDK_OFFSET(0x1D6329E0)
#define PMIHPKKOCGI_CJFHOCNNDNH_OFFSET UNITYSDK_OFFSET(0x1D6329A0)
#define PMIHPKKOCGI_IAJNKNOAJIK_OFFSET UNITYSDK_OFFSET(0x1D6329C0)
#define PMIHPKKOCGI_JFFBMODPELG_OFFSET UNITYSDK_OFFSET(0x1D632990)
#define PMIHPKKOCGI_JJLANKAPHHP_OFFSET UNITYSDK_OFFSET(0x1D6329F0)
#define PMIHPKKOCGI_NGOFPLIHCPD_OFFSET UNITYSDK_OFFSET(0x1D6329D0)
#define PMIHPKKOCGI_ONMNPLOGJHF_OFFSET UNITYSDK_OFFSET(0x1D6329B0)
#define PMIHPKKOCGI__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6328D0)

inline static constexpr unsigned int PMIHPKKOCGI_TypeDefinitionIndex = 60451;

class PMIHPKKOCGI : public ::System::Object
{
public:
	::MoleMole::UIControllerContextBase* _DDCBPHNMFNE_k__BackingField; // 0x10
	::MoleMole::UIWindowController* _HKFFBPHMFJH_k__BackingField; // 0x18
	::System::UInt64 _PFCAHNCCOLO_k__BackingField; // 0x20

	::System::Void _ctor(::MoleMole::UIWindowController* JOLDOMEIKEF, ::MoleMole::UIControllerContextBase* HNDNDCNFAFP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + PMIHPKKOCGI__CTOR_OFFSET))(this, JOLDOMEIKEF, HNDNDCNFAFP);
	}

	::System::Void JFFBMODPELG(::MoleMole::UIWindowController* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + PMIHPKKOCGI_JFFBMODPELG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CJFHOCNNDNH(::MoleMole::UIControllerContextBase* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + PMIHPKKOCGI_CJFHOCNNDNH_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::UIWindowController* ONMNPLOGJHF()
	{
		return ((::MoleMole::UIWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMIHPKKOCGI_ONMNPLOGJHF_OFFSET))(this);
	}

	::MoleMole::UIControllerContextBase* IAJNKNOAJIK()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMIHPKKOCGI_IAJNKNOAJIK_OFFSET))(this);
	}

	::System::Void NGOFPLIHCPD(::System::UInt64 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + PMIHPKKOCGI_NGOFPLIHCPD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::UInt64 CCBDDNHFOIJ()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + PMIHPKKOCGI_CCBDDNHFOIJ_OFFSET))(this);
	}

	::System::Void JJLANKAPHHP(::MoleMole::UIControllerContextBase* HNDNDCNFAFP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + PMIHPKKOCGI_JJLANKAPHHP_OFFSET))(this, HNDNDCNFAFP);
	}
};
