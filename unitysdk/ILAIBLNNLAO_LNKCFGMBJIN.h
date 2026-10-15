#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
class KLEFGGIHGMI;

#define ILAIBLNNLAO_LNKCFGMBJIN_CTOR_OFFSET UNITYSDK_OFFSET(0x16498790)
#define ILAIBLNNLAO_LNKCFGMBJIN_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x164944E0)
#define ILAIBLNNLAO_LNKCFGMBJIN_LOKGLLGOOKP_OFFSET UNITYSDK_OFFSET(0x164956D0)

inline static constexpr unsigned int ILAIBLNNLAO_LNKCFGMBJIN_TypeDefinitionIndex = 60626;

	class ILAIBLNNLAO_LNKCFGMBJIN : public ::System::Object
	{
	public:
		::KLEFGGIHGMI* DMOKGPMOFGM; // 0x10
		::UnityEngine::Matrix4x4 HGPFBOLEACI; // 0x18
		::System::Boolean LIKCBPAJJFN; // 0x58
		::System::Void _ctor(::KLEFGGIHGMI* a1, ::UnityEngine::Matrix4x4 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::KLEFGGIHGMI*, ::UnityEngine::Matrix4x4, ::System::Boolean))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_LNKCFGMBJIN_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LOKGLLGOOKP(::UnityEngine::Matrix4x4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_LNKCFGMBJIN_LOKGLLGOOKP_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_LNKCFGMBJIN_KHGIKBFDLFB_OFFSET))(this);
		}

	};
