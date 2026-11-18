#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

class LGAFMFNMCOG;
class MKBBPOFGLOF;
template <typename T> class KCMIFNGABDC_1;

#define KMHKKOGALPG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15BA1ED0)
#define KMHKKOGALPG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15BA1C00)
#define KMHKKOGALPG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15BA21B0)
#define KMHKKOGALPG_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x15BA21C0)
#define KMHKKOGALPG_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x15BA1930)
#define KMHKKOGALPG__CTOR_OFFSET UNITYSDK_OFFSET(0x15BA1F30)

inline static constexpr unsigned int KMHKKOGALPG_TypeDefinitionIndex = 80236;

class KMHKKOGALPG : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Single>* NMLMOHHILMJ; // 0x28
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* OBHADCGHPBE; // 0x30
	::MKBBPOFGLOF* LNMFKACNAKH; // 0x38
	::KCMIFNGABDC_1<::System::Single>* EPKJKHKFLGK; // 0x40
	::MKBBPOFGLOF* DJIGJLABELC; // 0x48
	::KCMIFNGABDC_1<::System::Boolean>* LEJJAKHNJLK; // 0x50
	::KCMIFNGABDC_1<::System::Single>* LIIIDCCHKEP; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHKKOGALPG__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + KMHKKOGALPG_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHKKOGALPG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KMHKKOGALPG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHKKOGALPG_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + KMHKKOGALPG_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}
};
