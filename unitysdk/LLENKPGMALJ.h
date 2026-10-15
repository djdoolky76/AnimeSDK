#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class MonoDBBridgeControl; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MonoBehaviour; }

#define LLENKPGMALJ_AJJKKFKAICG_OFFSET UNITYSDK_OFFSET(0xB760E60)
#define LLENKPGMALJ_CENDJCLOJMB_OFFSET UNITYSDK_OFFSET(0xB75ED60)
#define LLENKPGMALJ_CGFJHMMCNLG_OFFSET UNITYSDK_OFFSET(0xB7612B0)
#define LLENKPGMALJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB7615D0)
#define LLENKPGMALJ_EAJLHLEHALG_OFFSET UNITYSDK_OFFSET(0xB761230)
#define LLENKPGMALJ_EBJKCPODAOP_OFFSET UNITYSDK_OFFSET(0xB75FFA0)
#define LLENKPGMALJ_FBENONCKNEM_OFFSET UNITYSDK_OFFSET(0xB75FAE0)
#define LLENKPGMALJ_FEFEOHPOCLB_OFFSET UNITYSDK_OFFSET(0xB760700)
#define LLENKPGMALJ_HBOHKIPCHHE_OFFSET UNITYSDK_OFFSET(0xB75E9F0)
#define LLENKPGMALJ_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xB75E980)
#define LLENKPGMALJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB75DE40)
#define LLENKPGMALJ_LFDOLBEBGBK_OFFSET UNITYSDK_OFFSET(0xB75F470)
#define LLENKPGMALJ_OFOLBOAMHJA_OFFSET UNITYSDK_OFFSET(0xB761270)

inline static constexpr unsigned int LLENKPGMALJ_TypeDefinitionIndex = 70368;

	class LLENKPGMALJ : public ::RPG::Client::BehaviorBase
	{
	public:
		::UnityEngine::GameObject* OGKKHOMHOFH; // 0x18
		::UnityEngine::GameObject* GKNJHDJOOOD; // 0x20
		::UnityEngine::GameObject* IBDEJJLLPML; // 0x28
		::UnityEngine::GameObject* JOHFPMKFNNE; // 0x30
		::UnityEngine::GameObject* BMNLALGELAE; // 0x38
		::UnityEngine::GameObject* MGIAPGLNFAM; // 0x40
		::UnityEngine::MaterialPropertyBlock* PDHIJGFALHJ; // 0x48
		::UnityEngine::GameObject* PEALFJCJCJF; // 0x50
		::UnityEngine::GameObject* EINKMONLLDH; // 0x58
		::System::Single PGMIOKKLHIE; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLENKPGMALJ_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + LLENKPGMALJ_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void HBOHKIPCHHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLENKPGMALJ_HBOHKIPCHHE_OFFSET))(this);
		}

		::System::Void EAJLHLEHALG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLENKPGMALJ_EAJLHLEHALG_OFFSET))(this);
		}

		::System::Void OFOLBOAMHJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLENKPGMALJ_OFOLBOAMHJA_OFFSET))(this);
		}

		::System::Void FBENONCKNEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLENKPGMALJ_FBENONCKNEM_OFFSET))(this);
		}

		::System::Void CENDJCLOJMB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLENKPGMALJ_CENDJCLOJMB_OFFSET))(this);
		}

		::System::Void LFDOLBEBGBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLENKPGMALJ_LFDOLBEBGBK_OFFSET))(this);
		}

		::System::Void EBJKCPODAOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLENKPGMALJ_EBJKCPODAOP_OFFSET))(this);
		}

		::System::Void FEFEOHPOCLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLENKPGMALJ_FEFEOHPOCLB_OFFSET))(this);
		}

		::System::Void CGFJHMMCNLG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLENKPGMALJ_CGFJHMMCNLG_OFFSET))(this);
		}

		::System::Void AJJKKFKAICG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLENKPGMALJ_AJJKKFKAICG_OFFSET))(this);
		}

		::RPG::Client::MonoDBBridgeControl* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoDBBridgeControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLENKPGMALJ_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
