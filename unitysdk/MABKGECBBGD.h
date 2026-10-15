#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
class LHBDOALCGHM;
namespace RPG::Client { class MonoEffectPluginReattach; }
namespace System { class Object; }
namespace UnityEngine { class MonoBehaviour; }

#define MABKGECBBGD_CTOR_OFFSET UNITYSDK_OFFSET(0xB838420)
#define MABKGECBBGD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB837A50)
#define MABKGECBBGD_DOJAMKJKLHA_OFFSET UNITYSDK_OFFSET(0xB837E00)
#define MABKGECBBGD_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xB837C70)
#define MABKGECBBGD_KLIOBGEPFEH_OFFSET UNITYSDK_OFFSET(0xB837AC0)
#define MABKGECBBGD_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB8379E0)
#define MABKGECBBGD_NJHJIOLNDMM_OFFSET UNITYSDK_OFFSET(0xB837DB0)
#define MABKGECBBGD_POPNLPIAOCM_OFFSET UNITYSDK_OFFSET(0xB837CC0)

inline static constexpr unsigned int MABKGECBBGD_TypeDefinitionIndex = 69895;

	class MABKGECBBGD : public ::RPG::Client::BehaviorBase
	{
	public:
		::LHBDOALCGHM* BGFDACCIPJI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MABKGECBBGD_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + MABKGECBBGD_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MABKGECBBGD_DISPOSE_OFFSET))(this);
		}

		::System::Void KLIOBGEPFEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MABKGECBBGD_KLIOBGEPFEH_OFFSET))(this);
		}

		::System::Void POPNLPIAOCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MABKGECBBGD_POPNLPIAOCM_OFFSET))(this);
		}

		::System::Void NJHJIOLNDMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MABKGECBBGD_NJHJIOLNDMM_OFFSET))(this);
		}

		::System::Void DOJAMKJKLHA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MABKGECBBGD_DOJAMKJKLHA_OFFSET))(this, a1);
		}

		::RPG::Client::MonoEffectPluginReattach* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEffectPluginReattach*(*)(::PVOID))((::PBYTE)hIl2Cpp + MABKGECBBGD_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
