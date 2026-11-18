#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIMIIOKPLDE.h"
#include "unitysdk/DPKOIBEFPAO.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/System/ValueType.h"

class IBENDELLLAO;
class OJDPGBEDCNF;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define BFOPAEHFPMM_GLMNEPCBDCF_OFFSET UNITYSDK_OFFSET(0x388A60)
#define BFOPAEHFPMM_HEOGKOFDBCB_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BFOPAEHFPMM_IFIIMGIFCKG_OFFSET UNITYSDK_OFFSET(0x4254B0)
#define BFOPAEHFPMM_JDPOHNOOALP_OFFSET UNITYSDK_OFFSET(0x7CEA50)
#define BFOPAEHFPMM_PFNKCDBNAGE_OFFSET UNITYSDK_OFFSET(0x3CED50)

inline static constexpr unsigned int BFOPAEHFPMM_TypeDefinitionIndex = 57410;

struct alignas(8) BFOPAEHFPMM
{
	::System::Int32 APKIKLPPHEA; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* _DIKFGPCLIBH_k__BackingField; // 0x18
	::System::String* _MNJAFGPLAGH_k__BackingField; // 0x20
	::Foundation::AssetPath AOOLNBKIHAG; // 0x28
	::Foundation::AssetPath BBNJEOPKHOL; // 0x38
	::System::Boolean MICOPEGJDBD; // 0x48
	::System::Byte _padding1[0x7];
	::System::Func_1<::System::Boolean>* OABALDCAKFP; // 0x50
	::System::Boolean ONOHNBOMDDB; // 0x58
	::System::Boolean DBBIDCBDBDB; // 0x59
	::System::Boolean AJCMAAHCOMP; // 0x5A
	::System::Byte _padding2[0x5];
	::System::Action_1<::System::Int32>* BKHGLJNJCKN; // 0x60
	::Foundation::AssetPath KEJNOEILIGI; // 0x68
	::DPKOIBEFPAO PAJPOHPPPEO; // 0x78
	::System::Boolean JFMACAABKGA; // 0x90
	::System::Byte _padding3[0x3];
	::MoleMole::LanguageType MBABHIFLICA; // 0x94
	::BIMIIOKPLDE NIBCFAEBNDM; // 0x98
	::System::Byte _padding4[0x4];
	::OJDPGBEDCNF* CJAMMMBPMLP; // 0xA0
	::IBENDELLLAO* HHIJHDFHPOI; // 0xA8

	::System::String* HEOGKOFDBCB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFOPAEHFPMM_HEOGKOFDBCB_OFFSET))(this);
	}

	::System::Void GLMNEPCBDCF(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BFOPAEHFPMM_GLMNEPCBDCF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* PFNKCDBNAGE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFOPAEHFPMM_PFNKCDBNAGE_OFFSET))(this);
	}

	::System::Void IFIIMGIFCKG(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BFOPAEHFPMM_IFIIMGIFCKG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean JDPOHNOOALP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BFOPAEHFPMM_JDPOHNOOALP_OFFSET))(this);
	}
};
