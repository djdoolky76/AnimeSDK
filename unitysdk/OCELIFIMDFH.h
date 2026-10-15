#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class BattleCardSelectItem; }
namespace RPG::GameCore { class BattleCardSelectItemGroup; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define OCELIFIMDFH_BJLGBAHGABM_OFFSET UNITYSDK_OFFSET(0xBD5E610)
#define OCELIFIMDFH_CLAGPGJBDBD_OFFSET UNITYSDK_OFFSET(0xBD5F5C0)
#define OCELIFIMDFH_CTOR_OFFSET UNITYSDK_OFFSET(0xBD5E600)
#define OCELIFIMDFH_EGDBHOMAFOF_OFFSET UNITYSDK_OFFSET(0xBD5ED80)
#define OCELIFIMDFH_ELEICCEHHCC_OFFSET UNITYSDK_OFFSET(0xBD5EDE0)
#define OCELIFIMDFH_EOJEEJLPOIO_OFFSET UNITYSDK_OFFSET(0xBD5E660)
#define OCELIFIMDFH_FDBHBACMFAK_OFFSET UNITYSDK_OFFSET(0xBD5E930)
#define OCELIFIMDFH_GGKOBOPLCJJ_OFFSET UNITYSDK_OFFSET(0xBD5E9C0)
#define OCELIFIMDFH_HCFIONJCFNI_OFFSET UNITYSDK_OFFSET(0xBD5EC30)
#define OCELIFIMDFH_HIFFBEILDNC_OFFSET UNITYSDK_OFFSET(0xBD5E7C0)
#define OCELIFIMDFH_HPAKMFGOHCC_OFFSET UNITYSDK_OFFSET(0xBD5EE90)
#define OCELIFIMDFH_JLOGAEFKIPM_OFFSET UNITYSDK_OFFSET(0xBD5F1D0)
#define OCELIFIMDFH_PANFNDDCBDN_OFFSET UNITYSDK_OFFSET(0xBD5F680)
#define OCELIFIMDFH_PPNKPEPHKHI_OFFSET UNITYSDK_OFFSET(0xBD5F770)

inline static constexpr unsigned int OCELIFIMDFH_TypeDefinitionIndex = 56034;

	class OCELIFIMDFH : public ::System::Object
	{
	public:
		::RPG::GameCore::TaskContext* OBKLPOKMIEA; // 0x10
		::Il2CppArray<::RPG::GameCore::BattleCardSelectItemGroup*>* LCFLKHFNCAL; // 0x18
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + OCELIFIMDFH_CTOR_OFFSET))(this, a1);
		}

		::System::Void BJLGBAHGABM(::Il2CppArray<::RPG::GameCore::BattleCardSelectItemGroup*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::BattleCardSelectItemGroup*>*))((::PBYTE)hIl2Cpp + OCELIFIMDFH_BJLGBAHGABM_OFFSET))(this, a1);
		}

		::System::Void HIFFBEILDNC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OCELIFIMDFH_HIFFBEILDNC_OFFSET))(this, a1);
		}

		::System::Void FDBHBACMFAK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OCELIFIMDFH_FDBHBACMFAK_OFFSET))(this, a1);
		}

		::System::Void HCFIONJCFNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCELIFIMDFH_HCFIONJCFNI_OFFSET))(this);
		}

		::System::Void GGKOBOPLCJJ(::RPG::GameCore::BattleCardSelectItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleCardSelectItem*))((::PBYTE)hIl2Cpp + OCELIFIMDFH_GGKOBOPLCJJ_OFFSET))(this, a1);
		}

		::System::Void EOJEEJLPOIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCELIFIMDFH_EOJEEJLPOIO_OFFSET))(this);
		}

		::RPG::GameCore::BattleCardSelectItemGroup* PANFNDDCBDN()
		{
			return ((::RPG::GameCore::BattleCardSelectItemGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCELIFIMDFH_PANFNDDCBDN_OFFSET))(this);
		}

		::System::Void PPNKPEPHKHI(::RPG::GameCore::BattleCardSelectItemGroup* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::BattleCardSelectItemGroup* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleCardSelectItemGroup*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::BattleCardSelectItemGroup*))((::PBYTE)hIl2Cpp + OCELIFIMDFH_PPNKPEPHKHI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CLAGPGJBDBD(::RPG::GameCore::BattleCardSelectItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleCardSelectItem*))((::PBYTE)hIl2Cpp + OCELIFIMDFH_CLAGPGJBDBD_OFFSET))(this, a1);
		}

		::System::Void EGDBHOMAFOF(::RPG::GameCore::BattleCardSelectItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleCardSelectItem*))((::PBYTE)hIl2Cpp + OCELIFIMDFH_EGDBHOMAFOF_OFFSET))(this, a1);
		}

		::System::Void HPAKMFGOHCC(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::MazeBuffRow* a2, ::RPG::GameCore::BattleCardSelectItem* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::MazeBuffRow*, ::RPG::GameCore::BattleCardSelectItem*, ::System::String*))((::PBYTE)hIl2Cpp + OCELIFIMDFH_HPAKMFGOHCC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void JLOGAEFKIPM(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::MazeBuffRow* a2, ::RPG::GameCore::BattleCardSelectItem* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::MazeBuffRow*, ::RPG::GameCore::BattleCardSelectItem*, ::System::String*))((::PBYTE)hIl2Cpp + OCELIFIMDFH_JLOGAEFKIPM_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::GameEntity* ELEICCEHHCC(::RPG::GameCore::BattleCardSelectItem* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::BattleCardSelectItem*))((::PBYTE)hIl2Cpp + OCELIFIMDFH_ELEICCEHHCC_OFFSET))(this, a1);
		}

	};
