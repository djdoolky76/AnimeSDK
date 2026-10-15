#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Color.h"
namespace RPG::Client { class MonoEffectPluginWaterColor; }
namespace UnityEngine { class MonoBehaviour; }

#define MKNKPLOJJGC_BIFHEEKKCKB_OFFSET UNITYSDK_OFFSET(0xB99B320)
#define MKNKPLOJJGC_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0xB99AE60)
#define MKNKPLOJJGC_CTOR_OFFSET UNITYSDK_OFFSET(0xB99B4C0)
#define MKNKPLOJJGC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB99AE10)
#define MKNKPLOJJGC_KLIOBGEPFEH_OFFSET UNITYSDK_OFFSET(0xB99AEE0)
#define MKNKPLOJJGC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB99AD50)
#define MKNKPLOJJGC_LLLGFHLPFBM_OFFSET UNITYSDK_OFFSET(0xB99B090)
#define MKNKPLOJJGC_POPNLPIAOCM_OFFSET UNITYSDK_OFFSET(0xB99B2D0)

inline static constexpr unsigned int MKNKPLOJJGC_TypeDefinitionIndex = 69908;

	class MKNKPLOJJGC : public ::RPG::Client::BehaviorBase
	{
	public:
		::RPG::Client::MonoEffectPluginWaterColor* NBFGLAKBNGF; // 0x18
		::Il2CppArray<::UnityEngine::Color>* MOBDFNDHGED; // 0x20
		::UnityEngine::Color NCGHMKBGPEM; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNKPLOJJGC_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + MKNKPLOJJGC_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNKPLOJJGC_DISPOSE_OFFSET))(this);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNKPLOJJGC_BJMNKLGEMPM_OFFSET))(this);
		}

		::System::Void KLIOBGEPFEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNKPLOJJGC_KLIOBGEPFEH_OFFSET))(this);
		}

		::System::Void POPNLPIAOCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNKPLOJJGC_POPNLPIAOCM_OFFSET))(this);
		}

		::System::Void LLLGFHLPFBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNKPLOJJGC_LLLGFHLPFBM_OFFSET))(this);
		}

		::System::Void BIFHEEKKCKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNKPLOJJGC_BIFHEEKKCKB_OFFSET))(this);
		}

	};
