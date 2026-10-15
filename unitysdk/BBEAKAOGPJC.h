#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/System/Object.h"
class BMICACAAOGP;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BBEAKAOGPJC_APFIHBCFAEH_1_OFFSET UNITYSDK_OFFSET(0x15E78FE0)
#define BBEAKAOGPJC_APFIHBCFAEH_OFFSET UNITYSDK_OFFSET(0x15E78EE0)
#define BBEAKAOGPJC_CFDEGDEHCJE_OFFSET UNITYSDK_OFFSET(0x15E78E60)
#define BBEAKAOGPJC_ECLMPACNLEF_1_OFFSET UNITYSDK_OFFSET(0x15E79590)
#define BBEAKAOGPJC_ECLMPACNLEF_OFFSET UNITYSDK_OFFSET(0x15E791B0)

inline static constexpr unsigned int BBEAKAOGPJC_TypeDefinitionIndex = 54227;

	class BBEAKAOGPJC : public ::System::Object
	{
	public:
		static ::RPG::GameCore::GameEntity* CFDEGDEHCJE(::BMICACAAOGP* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::BMICACAAOGP*))((::PBYTE)hIl2Cpp + BBEAKAOGPJC_CFDEGDEHCJE_OFFSET))(a1);
		}

		static ::RPG::GameCore::GameEntity* APFIHBCFAEH(::BMICACAAOGP* a1, ::RPG::GameCore::EntityType a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::BMICACAAOGP*, ::RPG::GameCore::EntityType, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BBEAKAOGPJC_APFIHBCFAEH_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::GameEntity* APFIHBCFAEH_1(::BMICACAAOGP* a1, ::RPG::GameCore::EntityType a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::BMICACAAOGP*, ::RPG::GameCore::EntityType, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + BBEAKAOGPJC_APFIHBCFAEH_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ECLMPACNLEF(::BMICACAAOGP* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::RPG::GameCore::EntityType a3, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a4)
		{
			return ((::System::Void(*)(::BMICACAAOGP*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::EntityType, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + BBEAKAOGPJC_ECLMPACNLEF_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ECLMPACNLEF_1(::BMICACAAOGP* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::RPG::GameCore::EntityTypeMask a3, ::RPG::GameCore::AliveStateMask a4, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a5)
		{
			return ((::System::Void(*)(::BMICACAAOGP*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::AliveStateMask, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + BBEAKAOGPJC_ECLMPACNLEF_1_OFFSET))(a1, a2, a3, a4, a5);
		}

	};
