#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IEJHOJBLOHI.h"

class KBDGKAJPALP;
class NFBMPKMCHGP;
class OFLPOCHHHLC;
class PMLCKJBHLLB;
namespace System { template <typename T> class Action_1; }

#define JDCPBJMKCHK_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x1DA134F0)
#define JDCPBJMKCHK_HPPJCOEJDBL_OFFSET UNITYSDK_OFFSET(0x1DA13590)
#define JDCPBJMKCHK_KHGPLGMDOFC_OFFSET UNITYSDK_OFFSET(0x1DA130F0)
#define JDCPBJMKCHK_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x1DA13460)
#define JDCPBJMKCHK_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x1DA13300)
#define JDCPBJMKCHK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA133E0)

inline static constexpr unsigned int JDCPBJMKCHK_TypeDefinitionIndex = 94211;

class JDCPBJMKCHK : public ::IEJHOJBLOHI
{
public:
	::KBDGKAJPALP* GEEHGDABNJF; // 0x28
	::System::Action_1<::NFBMPKMCHGP*>* FDEBLOACJEC; // 0x30
	::PMLCKJBHLLB* AAOCANGHBDG; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDCPBJMKCHK__CTOR_OFFSET))(this);
	}

	::System::Void KHGPLGMDOFC(::OFLPOCHHHLC* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::OFLPOCHHHLC*))((::PBYTE)hIl2Cpp + JDCPBJMKCHK_KHGPLGMDOFC_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JDCPBJMKCHK_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void MNEFKNFOABP(::OFLPOCHHHLC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::OFLPOCHHHLC*))((::PBYTE)hIl2Cpp + JDCPBJMKCHK_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void CMFOMGGDPPA(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JDCPBJMKCHK_CMFOMGGDPPA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void HPPJCOEJDBL(::NFBMPKMCHGP* HKPNBFDCAGA)
	{
		return ((::System::Void(*)(::PVOID, ::NFBMPKMCHGP*))((::PBYTE)hIl2Cpp + JDCPBJMKCHK_HPPJCOEJDBL_OFFSET))(this, HKPNBFDCAGA);
	}
};
