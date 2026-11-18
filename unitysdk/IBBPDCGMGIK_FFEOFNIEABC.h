#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define IBBPDCGMGIK_FFEOFNIEABC_BNHIDAPEHNL_OFFSET UNITYSDK_OFFSET(0x1608F9D0)
#define IBBPDCGMGIK_FFEOFNIEABC_BPKOFNOGDJJ_OFFSET UNITYSDK_OFFSET(0x1608FA90)
#define IBBPDCGMGIK_FFEOFNIEABC_CGKIMGDNPNF_OFFSET UNITYSDK_OFFSET(0x1608F9E0)
#define IBBPDCGMGIK_FFEOFNIEABC_MAKNEHPPFFN_OFFSET UNITYSDK_OFFSET(0x1608F9F0)
#define IBBPDCGMGIK_FFEOFNIEABC__CTOR_OFFSET UNITYSDK_OFFSET(0x1608F9C0)

inline static constexpr unsigned int IBBPDCGMGIK_FFEOFNIEABC_TypeDefinitionIndex = 54150;

class IBBPDCGMGIK_FFEOFNIEABC : public ::System::Object
{
public:
	::HOCDHMEPPEG DJPMNKCDAFL; // 0x10
	::System::UInt32 COEDCJKHHON; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBBPDCGMGIK_FFEOFNIEABC__CTOR_OFFSET))(this);
	}

	::System::Void BNHIDAPEHNL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBBPDCGMGIK_FFEOFNIEABC_BNHIDAPEHNL_OFFSET))(this);
	}

	::System::Void CGKIMGDNPNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBBPDCGMGIK_FFEOFNIEABC_CGKIMGDNPNF_OFFSET))(this);
	}

	::System::Void MAKNEHPPFFN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBBPDCGMGIK_FFEOFNIEABC_MAKNEHPPFFN_OFFSET))(this);
	}

	::System::Boolean BPKOFNOGDJJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IBBPDCGMGIK_FFEOFNIEABC_BPKOFNOGDJJ_OFFSET))(this);
	}
};
