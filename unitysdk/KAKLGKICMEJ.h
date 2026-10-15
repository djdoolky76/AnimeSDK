#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class MonoEffectPluginPosm; }
namespace RPG::CustomRP { class CharacterModelShadowCmd; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Renderer; }

#define KAKLGKICMEJ_BPHJGPCHCOA_OFFSET UNITYSDK_OFFSET(0xB2DB5D0)
#define KAKLGKICMEJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB2DC100)
#define KAKLGKICMEJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2DAEF0)
#define KAKLGKICMEJ_EHIMLENLPLM_OFFSET UNITYSDK_OFFSET(0xB2DBD00)
#define KAKLGKICMEJ_FIKCDMLALAJ_OFFSET UNITYSDK_OFFSET(0xB2DB2A0)
#define KAKLGKICMEJ_HDACEIKJBLP_OFFSET UNITYSDK_OFFSET(0xB2DBB60)
#define KAKLGKICMEJ_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xB2DB250)
#define KAKLGKICMEJ_JOACAMAPIDO_OFFSET UNITYSDK_OFFSET(0xB2DAF60)
#define KAKLGKICMEJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB2DAE80)
#define KAKLGKICMEJ_LNILGFEBALK_OFFSET UNITYSDK_OFFSET(0xB2DBA30)

	class KAKLGKICMEJ : public ::RPG::Client::BehaviorBase
	{
	public:
		::RPG::CustomRP::CharacterModelShadowCmd* NOJGBEEGBDE; // 0x18
		::Il2CppArray<::UnityEngine::Renderer*>* MOECGMPCECP; // 0x20
		::UnityEngine::GameObject* FECMPADIMEC; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKLGKICMEJ_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + KAKLGKICMEJ_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKLGKICMEJ_DISPOSE_OFFSET))(this);
		}

		::System::Void JOACAMAPIDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKLGKICMEJ_JOACAMAPIDO_OFFSET))(this);
		}

		::System::Void LNILGFEBALK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKLGKICMEJ_LNILGFEBALK_OFFSET))(this);
		}

		::System::Void BPHJGPCHCOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKLGKICMEJ_BPHJGPCHCOA_OFFSET))(this);
		}

		::System::Void EHIMLENLPLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKLGKICMEJ_EHIMLENLPLM_OFFSET))(this);
		}

		::System::Void FIKCDMLALAJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KAKLGKICMEJ_FIKCDMLALAJ_OFFSET))(this, a1);
		}

		::System::Void HDACEIKJBLP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KAKLGKICMEJ_HDACEIKJBLP_OFFSET))(this, a1);
		}

		::RPG::Client::MonoEffectPluginPosm* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEffectPluginPosm*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKLGKICMEJ_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
