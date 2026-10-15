#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Color.h"
namespace RPG::Client { class MonoEffectPluginWaterColor; }
namespace UnityEngine { class MonoBehaviour; }

#define MKNKPLOJJGC_BIFHEEKKCKB_OFFSET UNITYSDK_OFFSET(0xB9A1170)
#define MKNKPLOJJGC_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0xB9A0CA0)
#define MKNKPLOJJGC_CTOR_OFFSET UNITYSDK_OFFSET(0xB9A1310)
#define MKNKPLOJJGC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9A0C50)
#define MKNKPLOJJGC_KLIOBGEPFEH_OFFSET UNITYSDK_OFFSET(0xB9A0D30)
#define MKNKPLOJJGC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB9A0B90)
#define MKNKPLOJJGC_LLLGFHLPFBM_OFFSET UNITYSDK_OFFSET(0xB9A0EE0)
#define MKNKPLOJJGC_POPNLPIAOCM_OFFSET UNITYSDK_OFFSET(0xB9A1120)

	class MKNKPLOJJGC : public ::RPG::Client::BehaviorBase
	{
	public:
		::Il2CppArray<::UnityEngine::Color>* MOBDFNDHGED; // 0x18
		::RPG::Client::MonoEffectPluginWaterColor* NBFGLAKBNGF; // 0x20
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
