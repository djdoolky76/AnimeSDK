#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class Effect_GPUCrowdAnimationBatcher; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MonoBehaviour; }

#define LMGAOOEJHIJ_CLOJHADCIIK_OFFSET UNITYSDK_OFFSET(0xB77FD80)
#define LMGAOOEJHIJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB7802C0)
#define LMGAOOEJHIJ_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xB77E420)
#define LMGAOOEJHIJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB77E220)
#define LMGAOOEJHIJ_MADHLMGKGGJ_OFFSET UNITYSDK_OFFSET(0xB77E490)
#define LMGAOOEJHIJ_OMMICPEMBHP_OFFSET UNITYSDK_OFFSET(0xB77E290)

inline static constexpr unsigned int LMGAOOEJHIJ_TypeDefinitionIndex = 70362;

	class LMGAOOEJHIJ : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::System::Object*>* FJOCKIGEHLM; // 0x18
		::System::Boolean DOJKIIFDOOD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGAOOEJHIJ_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + LMGAOOEJHIJ_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void OMMICPEMBHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGAOOEJHIJ_OMMICPEMBHP_OFFSET))(this);
		}

		::System::Void MADHLMGKGGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGAOOEJHIJ_MADHLMGKGGJ_OFFSET))(this);
		}

		::System::Void CLOJHADCIIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGAOOEJHIJ_CLOJHADCIIK_OFFSET))(this);
		}

		::RPG::Client::Effect_GPUCrowdAnimationBatcher* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::Effect_GPUCrowdAnimationBatcher*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGAOOEJHIJ_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
