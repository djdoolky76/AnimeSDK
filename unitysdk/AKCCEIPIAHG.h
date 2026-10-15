#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ColliderConfig; }
namespace UnityEngine { class Collider; }

#define AKCCEIPIAHG_ELDFJHFKAFP_OFFSET UNITYSDK_OFFSET(0x12CCAF30)
#define AKCCEIPIAHG_IMOKMCCOCEP_OFFSET UNITYSDK_OFFSET(0x12CCACF0)

	class AKCCEIPIAHG : public ::System::Object
	{
	public:
		static ::System::Void IMOKMCCOCEP(::RPG::GameCore::ColliderConfig* a1, ::UnityEngine::Collider* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::ColliderConfig*, ::UnityEngine::Collider*, ::System::Single))((::PBYTE)hIl2Cpp + AKCCEIPIAHG_IMOKMCCOCEP_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::ColliderConfig* ELDFJHFKAFP(::UnityEngine::Collider* a1)
		{
			return ((::RPG::GameCore::ColliderConfig*(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AKCCEIPIAHG_ELDFJHFKAFP_OFFSET))(a1);
		}

	};
