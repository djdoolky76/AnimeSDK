#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/UnityEngine/Color.h"
class AEIDHPBIDKK;

#define JHDMGHJHLGK_CTOR_OFFSET UNITYSDK_OFFSET(0xB9CA760)
#define JHDMGHJHLGK_EJDAKAECODE_OFFSET UNITYSDK_OFFSET(0xB9CA5C0)
#define JHDMGHJHLGK_HHNCOGOHCHC_OFFSET UNITYSDK_OFFSET(0xB9CA510)
#define JHDMGHJHLGK__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xB9CA2F0)
#define JHDMGHJHLGK__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xB9CA350)

inline static constexpr unsigned int JHDMGHJHLGK_TypeDefinitionIndex = 73388;

	class JHDMGHJHLGK : public ::FMPCODLIOLG
	{
	public:
		::Il2CppArray<::AEIDHPBIDKK*>* EGLCKKBLNPL; // 0x60
		::System::UInt32 EPCFHPAJBOI; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDMGHJHLGK_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + JHDMGHJHLGK__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDMGHJHLGK__SETUPVIEW_OFFSET))(this);
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
