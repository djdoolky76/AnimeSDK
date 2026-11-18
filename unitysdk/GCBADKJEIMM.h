#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class KCBEGMCCKCA;
class LGAFMFNMCOG;
class MKBBPOFGLOF;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define GCBADKJEIMM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15702260)
#define GCBADKJEIMM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15701F50)
#define GCBADKJEIMM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15702700)
#define GCBADKJEIMM_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x15702790)
#define GCBADKJEIMM_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x157021B0)
#define GCBADKJEIMM_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x15701E00)
#define GCBADKJEIMM__CTOR_OFFSET UNITYSDK_OFFSET(0x15702500)

inline static constexpr unsigned int GCBADKJEIMM_TypeDefinitionIndex = 92731;

class GCBADKJEIMM : public ::BKCJAIFHNKF
{
public:
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* HKBBDEIDNGM; // 0x18
	::KCMIFNGABDC_1<::System::Single>* ONJGDACPPED; // 0x20
	::AAMKEDEDHPD_1<::System::String*>* KNDBIDCPPHP; // 0x28
	::AAMKEDEDHPD_1<::System::Single>* GEFBDJPDLKO; // 0x30
	::MKBBPOFGLOF* MMFNFINOFPN; // 0x38
	::AAMKEDEDHPD_1<::MoleMole::EntityHandle>* JAECOIFDKFK; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBADKJEIMM__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + GCBADKJEIMM_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBADKJEIMM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GCBADKJEIMM_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + GCBADKJEIMM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBADKJEIMM_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + GCBADKJEIMM_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}
};
