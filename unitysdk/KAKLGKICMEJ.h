#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class MonoEffectPluginPosm; }
namespace RPG::CustomRP { class CharacterModelShadowCmd; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Renderer; }

#define KAKLGKICMEJ_BPHJGPCHCOA_OFFSET UNITYSDK_OFFSET(0xBB60260)
#define KAKLGKICMEJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBB60D90)
#define KAKLGKICMEJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB5FB80)
#define KAKLGKICMEJ_EHIMLENLPLM_OFFSET UNITYSDK_OFFSET(0xBB60990)
#define KAKLGKICMEJ_FIKCDMLALAJ_OFFSET UNITYSDK_OFFSET(0xBB5FF30)
#define KAKLGKICMEJ_HDACEIKJBLP_OFFSET UNITYSDK_OFFSET(0xBB607F0)
#define KAKLGKICMEJ_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xBB5FEE0)
#define KAKLGKICMEJ_JOACAMAPIDO_OFFSET UNITYSDK_OFFSET(0xBB5FBF0)
#define KAKLGKICMEJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBB5FB10)
#define KAKLGKICMEJ_LNILGFEBALK_OFFSET UNITYSDK_OFFSET(0xBB606C0)

inline static constexpr unsigned int KAKLGKICMEJ_TypeDefinitionIndex = 71851;

	class KAKLGKICMEJ : public ::RPG::Client::BehaviorBase
	{
	public:
		::UnityEngine::GameObject* FECMPADIMEC; // 0x18
		::Il2CppArray<::UnityEngine::Renderer*>* MOECGMPCECP; // 0x20
		::RPG::CustomRP::CharacterModelShadowCmd* NOJGBEEGBDE; // 0x28
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
