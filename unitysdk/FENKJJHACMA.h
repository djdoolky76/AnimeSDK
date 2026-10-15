#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/Client/TriggerEffectParamsRef.h"
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Transform; }

#define FENKJJHACMA_AAIBMNHOOFP_OFFSET UNITYSDK_OFFSET(0x1572C240)
#define FENKJJHACMA_AJFMBBLLIHM_OFFSET UNITYSDK_OFFSET(0x1572C380)
#define FENKJJHACMA_BGEBEKMJIPD_OFFSET UNITYSDK_OFFSET(0x1572C060)
#define FENKJJHACMA_CNGFJBMBIID_OFFSET UNITYSDK_OFFSET(0x1572C480)
#define FENKJJHACMA_CTOR_OFFSET UNITYSDK_OFFSET(0x1572C890)
#define FENKJJHACMA_GMLGNCFNHCA_OFFSET UNITYSDK_OFFSET(0x1572C120)
#define FENKJJHACMA_HFHCBPECGBH_OFFSET UNITYSDK_OFFSET(0x1572BFD0)
#define FENKJJHACMA_NGICNEMJFAG_OFFSET UNITYSDK_OFFSET(0x1572C5B0)
#define FENKJJHACMA_ODEDLGMDAKG_OFFSET UNITYSDK_OFFSET(0x1572BF60)

inline static constexpr unsigned int FENKJJHACMA_TypeDefinitionIndex = 80171;

	class FENKJJHACMA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FENKJJHACMA_CTOR_OFFSET))(this);
		}

		::RPG::Client::MonoEffectManager* ODEDLGMDAKG()
		{
			return ((::RPG::Client::MonoEffectManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + FENKJJHACMA_ODEDLGMDAKG_OFFSET))(this);
		}

		::RPG::Client::TriggerEffectParamsRef HFHCBPECGBH(::System::String* a1)
		{
			return ((::RPG::Client::TriggerEffectParamsRef(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FENKJJHACMA_HFHCBPECGBH_OFFSET))(this, a1);
		}

		::RPG::Client::MonoEffect* BGEBEKMJIPD(::RPG::Client::TriggerEffectParamsRef a1)
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::RPG::Client::TriggerEffectParamsRef))((::PBYTE)hIl2Cpp + FENKJJHACMA_BGEBEKMJIPD_OFFSET))(this, a1);
		}

		::RPG::Client::MonoEffect* GMLGNCFNHCA(::System::String* a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3)
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + FENKJJHACMA_GMLGNCFNHCA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AAIBMNHOOFP(::System::String* a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>*))((::PBYTE)hIl2Cpp + FENKJJHACMA_AAIBMNHOOFP_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::MonoEffect* AJFMBBLLIHM(::System::String* a1, ::UnityEngine::Transform* a2)
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FENKJJHACMA_AJFMBBLLIHM_OFFSET))(this, a1, a2);
		}

		::System::Void CNGFJBMBIID(::System::String* a1, ::UnityEngine::Transform* a2, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>*))((::PBYTE)hIl2Cpp + FENKJJHACMA_CNGFJBMBIID_OFFSET))(this, a1, a2, a3);
		}

		::System::String* NGICNEMJFAG(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FENKJJHACMA_NGICNEMJFAG_OFFSET))(this, a1);
		}

	};
