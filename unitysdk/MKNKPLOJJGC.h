#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Color.h"
namespace RPG::Client { class MonoEffectPluginWaterColor; }
namespace UnityEngine { class MonoBehaviour; }

#define MKNKPLOJJGC_BIFHEEKKCKB_OFFSET UNITYSDK_OFFSET(0x1B90FFB0)
#define MKNKPLOJJGC_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0x1B90FAF0)
#define MKNKPLOJJGC_CTOR_OFFSET UNITYSDK_OFFSET(0x1B910150)
#define MKNKPLOJJGC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B90FAA0)
#define MKNKPLOJJGC_KLIOBGEPFEH_OFFSET UNITYSDK_OFFSET(0x1B90FB70)
#define MKNKPLOJJGC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1B90F9E0)
#define MKNKPLOJJGC_LLLGFHLPFBM_OFFSET UNITYSDK_OFFSET(0x1B90FD20)
#define MKNKPLOJJGC_POPNLPIAOCM_OFFSET UNITYSDK_OFFSET(0x1B90FF60)

inline static constexpr unsigned int MKNKPLOJJGC_TypeDefinitionIndex = 71867;

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
