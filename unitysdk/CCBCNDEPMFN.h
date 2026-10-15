#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class NNAFEEPMIGK;
namespace UnityEngine { class Animation; }

#define CCBCNDEPMFN_CFGBHPPEFKI_OFFSET UNITYSDK_OFFSET(0xC732BC0)
#define CCBCNDEPMFN_CHKHMMGCPCB_OFFSET UNITYSDK_OFFSET(0xC732AA0)
#define CCBCNDEPMFN_CMCCHFLAOOE_OFFSET UNITYSDK_OFFSET(0xC4B5800)
#define CCBCNDEPMFN_CTOR_OFFSET UNITYSDK_OFFSET(0xC732C30)
#define CCBCNDEPMFN_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xC4B58D0)
#define CCBCNDEPMFN_ECLKKLALEMJ_OFFSET UNITYSDK_OFFSET(0xC4B56E0)
#define CCBCNDEPMFN_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xC4B5930)
#define CCBCNDEPMFN_FFGLFENEBPF_OFFSET UNITYSDK_OFFSET(0xC4B55C0)
#define CCBCNDEPMFN_IAALPPGKDGL_OFFSET UNITYSDK_OFFSET(0xC732B10)
#define CCBCNDEPMFN__ONBIND_OFFSET UNITYSDK_OFFSET(0xC4B5560)
#define CCBCNDEPMFN__ONTICK_OFFSET UNITYSDK_OFFSET(0xC4B5A10)

inline static constexpr unsigned int CCBCNDEPMFN_TypeDefinitionIndex = 71749;

	class CCBCNDEPMFN : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x60
		::NNAFEEPMIGK* NBHJNGJIIEA; // 0x68
		::System::Boolean FFIAGGGEAEG; // 0x70
		::System::Boolean ILDBHNDGCIJ; // 0x71
		::System::Byte _padding0[0x2];
		::System::Single CDNCDAMIFEJ; // 0x74
		::System::Single BOOBHMPPKNL; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCBCNDEPMFN_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCBCNDEPMFN__ONBIND_OFFSET))(this);
		}

		::System::Void FFGLFENEBPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCBCNDEPMFN_FFGLFENEBPF_OFFSET))(this);
		}

		::System::Void CMCCHFLAOOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCBCNDEPMFN_CMCCHFLAOOE_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + CCBCNDEPMFN_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCBCNDEPMFN_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CCBCNDEPMFN__ONTICK_OFFSET))(this, a1);
		}

		::System::Void ECLKKLALEMJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CCBCNDEPMFN_ECLKKLALEMJ_OFFSET))(this, a1);
		}

		::System::Void CHKHMMGCPCB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCBCNDEPMFN_CHKHMMGCPCB_OFFSET))(this);
		}

		::System::Void IAALPPGKDGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCBCNDEPMFN_IAALPPGKDGL_OFFSET))(this);
		}

		::System::Void CFGBHPPEFKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCBCNDEPMFN_CFGBHPPEFKI_OFFSET))(this);
		}

	};
