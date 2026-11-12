#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class NNAFEEPMIGK;
namespace UnityEngine { class Animation; }

#define CCBCNDEPMFN_CFGBHPPEFKI_OFFSET UNITYSDK_OFFSET(0xCE261A0)
#define CCBCNDEPMFN_CHKHMMGCPCB_OFFSET UNITYSDK_OFFSET(0xCE26130)
#define CCBCNDEPMFN_CMCCHFLAOOE_OFFSET UNITYSDK_OFFSET(0xCE25F20)
#define CCBCNDEPMFN_CTOR_OFFSET UNITYSDK_OFFSET(0xCE26340)
#define CCBCNDEPMFN_ECLKKLALEMJ_OFFSET UNITYSDK_OFFSET(0xCE25E00)
#define CCBCNDEPMFN_FFGLFENEBPF_OFFSET UNITYSDK_OFFSET(0xCE25CE0)
#define CCBCNDEPMFN_IAALPPGKDGL_OFFSET UNITYSDK_OFFSET(0xCE26290)
#define CCBCNDEPMFN__ONBIND_OFFSET UNITYSDK_OFFSET(0xCE25C40)
#define CCBCNDEPMFN__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xCE25FF0)
#define CCBCNDEPMFN__ONTICK_OFFSET UNITYSDK_OFFSET(0xCE26210)
#define CCBCNDEPMFN__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xCE26050)

inline static constexpr unsigned int CCBCNDEPMFN_TypeDefinitionIndex = 73741;

	class CCBCNDEPMFN : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x60
		::NNAFEEPMIGK* NBHJNGJIIEA; // 0x68
		::System::Single BOOBHMPPKNL; // 0x70
		::System::Boolean FFIAGGGEAEG; // 0x74
		::System::Boolean ILDBHNDGCIJ; // 0x75
		::System::Byte _padding0[0x2];
		::System::Single CDNCDAMIFEJ; // 0x78
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

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + CCBCNDEPMFN__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCBCNDEPMFN__SETUPVIEW_OFFSET))(this);
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
