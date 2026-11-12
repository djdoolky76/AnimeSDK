#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OnHitAnimType.h"
#include "unitysdk/System/Object.h"

#define GJOHMDHHGJN_MAKCCEPFLFK_OFFSET UNITYSDK_OFFSET(0x169BBBD0)
#define GJOHMDHHGJN_MNAPLKEFBCE_OFFSET UNITYSDK_OFFSET(0x169BBB80)
#define GJOHMDHHGJN_PAMMJBPMBMN_OFFSET UNITYSDK_OFFSET(0x169BBB30)

inline static constexpr unsigned int GJOHMDHHGJN_TypeDefinitionIndex = 57135;

	class GJOHMDHHGJN : public ::System::Object
	{
	public:
		static ::System::Boolean PAMMJBPMBMN(::RPG::GameCore::OnHitAnimType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::OnHitAnimType))((::PBYTE)hIl2Cpp + GJOHMDHHGJN_PAMMJBPMBMN_OFFSET))(a1);
		}

		static ::System::Boolean MNAPLKEFBCE(::RPG::GameCore::OnHitAnimType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::OnHitAnimType))((::PBYTE)hIl2Cpp + GJOHMDHHGJN_MNAPLKEFBCE_OFFSET))(a1);
		}

		static ::System::Boolean MAKCCEPFLFK(::RPG::GameCore::OnHitAnimType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::OnHitAnimType))((::PBYTE)hIl2Cpp + GJOHMDHHGJN_MAKCCEPFLFK_OFFSET))(a1);
		}

	};
