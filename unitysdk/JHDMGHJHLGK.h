#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/UnityEngine/Color.h"
class AEIDHPBIDKK;

#define JHDMGHJHLGK_CTOR_OFFSET UNITYSDK_OFFSET(0xB1A4950)
#define JHDMGHJHLGK_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xB1A44C0)
#define JHDMGHJHLGK_EJDAKAECODE_OFFSET UNITYSDK_OFFSET(0xB1A47B0)
#define JHDMGHJHLGK_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB1A4520)
#define JHDMGHJHLGK_HHNCOGOHCHC_OFFSET UNITYSDK_OFFSET(0xB1A4700)

inline static constexpr unsigned int JHDMGHJHLGK_TypeDefinitionIndex = 71405;

	class JHDMGHJHLGK : public ::FMPCODLIOLG
	{
	public:
		::Il2CppArray<::AEIDHPBIDKK*>* EGLCKKBLNPL; // 0x60
		::System::UInt32 EPCFHPAJBOI; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDMGHJHLGK_CTOR_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + JHDMGHJHLGK_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDMGHJHLGK_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void HHNCOGOHCHC(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + JHDMGHJHLGK_HHNCOGOHCHC_OFFSET))(this, a1);
		}

		::System::Void EJDAKAECODE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JHDMGHJHLGK_EJDAKAECODE_OFFSET))(this, a1);
		}

	};
