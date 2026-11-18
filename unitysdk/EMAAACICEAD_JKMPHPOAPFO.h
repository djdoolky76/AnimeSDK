#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define EMAAACICEAD_JKMPHPOAPFO_BNHIDAPEHNL_OFFSET UNITYSDK_OFFSET(0x11A9CB20)
#define EMAAACICEAD_JKMPHPOAPFO_BPKOFNOGDJJ_OFFSET UNITYSDK_OFFSET(0x11A9CB10)
#define EMAAACICEAD_JKMPHPOAPFO_CGKIMGDNPNF_OFFSET UNITYSDK_OFFSET(0x11A9CBD0)
#define EMAAACICEAD_JKMPHPOAPFO_MAKNEHPPFFN_OFFSET UNITYSDK_OFFSET(0x11A9CB30)
#define EMAAACICEAD_JKMPHPOAPFO__CTOR_OFFSET UNITYSDK_OFFSET(0x11A9CB00)

inline static constexpr unsigned int EMAAACICEAD_JKMPHPOAPFO_TypeDefinitionIndex = 81853;

class EMAAACICEAD_JKMPHPOAPFO : public ::System::Object
{
public:
	::HOCDHMEPPEG DJPMNKCDAFL; // 0x10
	::System::UInt32 COEDCJKHHON; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAAACICEAD_JKMPHPOAPFO__CTOR_OFFSET))(this);
	}

	::System::Boolean BPKOFNOGDJJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAAACICEAD_JKMPHPOAPFO_BPKOFNOGDJJ_OFFSET))(this);
	}

	::System::Void BNHIDAPEHNL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAAACICEAD_JKMPHPOAPFO_BNHIDAPEHNL_OFFSET))(this);
	}

	::System::Void MAKNEHPPFFN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAAACICEAD_JKMPHPOAPFO_MAKNEHPPFFN_OFFSET))(this);
	}

	::System::Void CGKIMGDNPNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAAACICEAD_JKMPHPOAPFO_CGKIMGDNPNF_OFFSET))(this);
	}
};
