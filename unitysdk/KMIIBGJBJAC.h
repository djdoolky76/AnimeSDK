#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HKBFFANBAEO.h"
#include "unitysdk/System/ValueType.h"

class CFMGIKJLMBJ;
class KFHNCJALFJK;
class MNJPCFNLLGO;
class PJIAEJICFAA;

#define KMIIBGJBJAC_GFDEGKPLHDE_OFFSET UNITYSDK_OFFSET(0x7524F0)
#define KMIIBGJBJAC_JPHNBIGFOFM_OFFSET UNITYSDK_OFFSET(0x752470)
#define KMIIBGJBJAC_OKLLFEIJKHN_2_OFFSET UNITYSDK_OFFSET(0x752500)
#define KMIIBGJBJAC_OKLLFEIJKHN_OFFSET UNITYSDK_OFFSET(0x752480)

inline static constexpr unsigned int KMIIBGJBJAC_TypeDefinitionIndex = 65171;

struct alignas(8) KMIIBGJBJAC
{
	::KFHNCJALFJK* ADEDEAIPOLH; // 0x10
	::CFMGIKJLMBJ* NKLNCILFGLM; // 0x18
	::HKBFFANBAEO ICKKBHOPKHA; // 0x20
	::System::Byte _padding0[0x4];
	::MNJPCFNLLGO* ANGAEFIEFHK; // 0x28
	::System::Int32 HPCDHENKMGF; // 0x30
	::System::Int32 FAPPAGFBMCP; // 0x34
	::System::Int32 EHNBNNNBGGF; // 0x38
	::System::UInt32 LMCBDKAJFOH; // 0x3C
	::System::UInt32 PECFAPFBDAJ; // 0x40
	::System::Int32 AMFMABMGNBE; // 0x44
	::System::Boolean HEFMHILPNPC; // 0x48
	::System::Byte _padding1[0x3];
	::System::UInt32 NOCFLDNCECN; // 0x4C
	::System::Boolean CKIEGGKMPCG; // 0x50

	::MNJPCFNLLGO* JPHNBIGFOFM(::PJIAEJICFAA* MNCACPLNJKO)
	{
		return ((::MNJPCFNLLGO*(*)(::PVOID, ::PJIAEJICFAA*))((::PBYTE)hIl2Cpp + KMIIBGJBJAC_JPHNBIGFOFM_OFFSET))(this, MNCACPLNJKO);
	}

	::System::Void OKLLFEIJKHN(::System::Boolean MECOFDHMKEB, ::System::Boolean CJPMNIJEMAN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + KMIIBGJBJAC_OKLLFEIJKHN_OFFSET))(this, MECOFDHMKEB, CJPMNIJEMAN);
	}

	::System::Void GFDEGKPLHDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIIBGJBJAC_GFDEGKPLHDE_OFFSET))(this);
	}

	::System::Void OKLLFEIJKHN_2(::HKBFFANBAEO ICKKBHOPKHA, ::System::Boolean CJPMNIJEMAN)
	{
		return ((::System::Void(*)(::PVOID, ::HKBFFANBAEO, ::System::Boolean))((::PBYTE)hIl2Cpp + KMIIBGJBJAC_OKLLFEIJKHN_2_OFFSET))(this, ICKKBHOPKHA, CJPMNIJEMAN);
	}
};
