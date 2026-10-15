#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace RPG::Client { class MonoEffectPluginMahJongItem; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Transform; }

#define KJEDLCJFCOJ_CFIKMAIEBHO_OFFSET UNITYSDK_OFFSET(0xB441730)
#define KJEDLCJFCOJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB4419D0)
#define KJEDLCJFCOJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4408B0)
#define KJEDLCJFCOJ_FBDJOABNKOO_OFFSET UNITYSDK_OFFSET(0xB4413A0)
#define KJEDLCJFCOJ_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xB441350)
#define KJEDLCJFCOJ_JKCFKACJKJO_OFFSET UNITYSDK_OFFSET(0xB4414B0)
#define KJEDLCJFCOJ_KLIOBGEPFEH_OFFSET UNITYSDK_OFFSET(0xB440920)
#define KJEDLCJFCOJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB440840)
#define KJEDLCJFCOJ_NPAPLJMOKNF_OFFSET UNITYSDK_OFFSET(0xB441660)
#define KJEDLCJFCOJ_POPNLPIAOCM_OFFSET UNITYSDK_OFFSET(0xB441520)

inline static constexpr unsigned int KJEDLCJFCOJ_TypeDefinitionIndex = 69883;

	class KJEDLCJFCOJ : public ::RPG::Client::BehaviorBase
	{
	public:
		::UnityEngine::Transform* KJECKLAEOIA; // 0x18
		::UnityEngine::Transform* DKHPIIPIHNL; // 0x20
		::UnityEngine::Vector4 KMIFMAALFKE; // 0x28
		::System::Boolean NELNMBMIEBL; // 0x38
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector4 DLNODFHBLMD; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJEDLCJFCOJ_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + KJEDLCJFCOJ_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJEDLCJFCOJ_DISPOSE_OFFSET))(this);
		}

		::System::Void KLIOBGEPFEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJEDLCJFCOJ_KLIOBGEPFEH_OFFSET))(this);
		}

		::System::Void FBDJOABNKOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJEDLCJFCOJ_FBDJOABNKOO_OFFSET))(this);
		}

		::System::Void JKCFKACJKJO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KJEDLCJFCOJ_JKCFKACJKJO_OFFSET))(this, a1);
		}

		::System::Void POPNLPIAOCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJEDLCJFCOJ_POPNLPIAOCM_OFFSET))(this);
		}

		::System::Void NPAPLJMOKNF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJEDLCJFCOJ_NPAPLJMOKNF_OFFSET))(this);
		}

		::System::Void CFIKMAIEBHO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KJEDLCJFCOJ_CFIKMAIEBHO_OFFSET))(this, a1);
		}

		::RPG::Client::MonoEffectPluginMahJongItem* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEffectPluginMahJongItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJEDLCJFCOJ_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
