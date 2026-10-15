#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BillboardShowType.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class UIBillboard; }
namespace RPG::GameCore { class BillboardComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define INDKAICGLBD_ALFBEAMBKNB_OFFSET UNITYSDK_OFFSET(0x164DA060)
#define INDKAICGLBD_ALNPBHKAFNJ_OFFSET UNITYSDK_OFFSET(0x164DA8C0)
#define INDKAICGLBD_EMOOIMGMACG_OFFSET UNITYSDK_OFFSET(0x164DA560)
#define INDKAICGLBD_FFKAIHNLGFA_OFFSET UNITYSDK_OFFSET(0x164DA0B0)
#define INDKAICGLBD_HPKHNDHENAK_OFFSET UNITYSDK_OFFSET(0x164DA7C0)
#define INDKAICGLBD_JHAEHHIOGFL_OFFSET UNITYSDK_OFFSET(0x164DA360)
#define INDKAICGLBD_KHAJJDAFMPE_OFFSET UNITYSDK_OFFSET(0x164DA710)
#define INDKAICGLBD_LADPPAFHFCP_OFFSET UNITYSDK_OFFSET(0x164D9F90)

inline static constexpr unsigned int INDKAICGLBD_TypeDefinitionIndex = 73158;

	class INDKAICGLBD : public ::System::Object
	{
	public:
		static ::RPG::Client::BillboardShowType LADPPAFHFCP(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::RPG::Client::BillboardShowType(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + INDKAICGLBD_LADPPAFHFCP_OFFSET))(a1);
		}

		static ::System::Boolean ALFBEAMBKNB(::RPG::Client::BillboardShowType a1, ::RPG::Client::BillboardShowType a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::BillboardShowType, ::RPG::Client::BillboardShowType))((::PBYTE)hIl2Cpp + INDKAICGLBD_ALFBEAMBKNB_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::BillboardComponent* FFKAIHNLGFA(::RPG::GameCore::EntityType a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::GameCore::GameEntity* a4)
		{
			return ((::RPG::GameCore::BillboardComponent*(*)(::RPG::GameCore::EntityType, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + INDKAICGLBD_FFKAIHNLGFA_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void JHAEHHIOGFL(::RPG::Client::UIBillboard* a1)
		{
			return ((::System::Void(*)(::RPG::Client::UIBillboard*))((::PBYTE)hIl2Cpp + INDKAICGLBD_JHAEHHIOGFL_OFFSET))(a1);
		}

		static ::System::Void EMOOIMGMACG(::RPG::Client::UIBillboard* a1)
		{
			return ((::System::Void(*)(::RPG::Client::UIBillboard*))((::PBYTE)hIl2Cpp + INDKAICGLBD_EMOOIMGMACG_OFFSET))(a1);
		}

		static ::System::Single KHAJJDAFMPE(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::System::UInt32))((::PBYTE)hIl2Cpp + INDKAICGLBD_KHAJJDAFMPE_OFFSET))(a1);
		}

		static ::System::String* HPKHNDHENAK(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + INDKAICGLBD_HPKHNDHENAK_OFFSET))(a1, a2, a3);
		}

		static ::System::String* ALNPBHKAFNJ(::System::UInt32 a1, ::System::UInt32 a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + INDKAICGLBD_ALNPBHKAFNJ_OFFSET))(a1, a2, a3);
		}

	};
