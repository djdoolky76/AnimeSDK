#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
class COPMGEHDGNP;
class HNJNCGPBEJB;
class MNBCPGLOMIE;
class OBJANKHLNGO;
class PEKFHPMIPDD;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client::ActivityFinalityBattle::Level { class FinalityBattleMazeBuffItem; }
namespace Sofa::Core { class SimpleCommand; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ELNCIJGALNP_ADD_ONREFRESH_OFFSET UNITYSDK_OFFSET(0x1551DCC0)
#define ELNCIJGALNP_CDPLPLCHGJE_OFFSET UNITYSDK_OFFSET(0x1551DC10)
#define ELNCIJGALNP_CTOR_OFFSET UNITYSDK_OFFSET(0x1551D940)
#define ELNCIJGALNP_DABLLOOBBGA_OFFSET UNITYSDK_OFFSET(0x1551DDA0)
#define ELNCIJGALNP_DDANNDHNEOI_OFFSET UNITYSDK_OFFSET(0x1551DF10)
#define ELNCIJGALNP_EFPHPFCKCIH_OFFSET UNITYSDK_OFFSET(0x1551DB80)
#define ELNCIJGALNP_GET_AVATARFEVERDESC_OFFSET UNITYSDK_OFFSET(0x1551E010)
#define ELNCIJGALNP_GET_CLICKBUFF_OFFSET UNITYSDK_OFFSET(0x1551DCA0)
#define ELNCIJGALNP_GET_CLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x1551DC80)
#define ELNCIJGALNP_GET_CURRENTBUFF_OFFSET UNITYSDK_OFFSET(0x1551DEF0)
#define ELNCIJGALNP_GET_LEADERAVATAR_OFFSET UNITYSDK_OFFSET(0x1551DD80)
#define ELNCIJGALNP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1551DA40)
#define ELNCIJGALNP_MOBDJIMPDCF_OFFSET UNITYSDK_OFFSET(0x1551DEA0)
#define ELNCIJGALNP_REMOVE_ONREFRESH_OFFSET UNITYSDK_OFFSET(0x1551DD20)
#define ELNCIJGALNP_SET_AVATARFEVERDESC_OFFSET UNITYSDK_OFFSET(0x1551E020)
#define ELNCIJGALNP_SET_CLICKBUFF_OFFSET UNITYSDK_OFFSET(0x1551DCB0)
#define ELNCIJGALNP_SET_CLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x1551DC90)
#define ELNCIJGALNP_SET_CURRENTBUFF_OFFSET UNITYSDK_OFFSET(0x1551DF00)
#define ELNCIJGALNP_SET_LEADERAVATAR_OFFSET UNITYSDK_OFFSET(0x1551DD90)

inline static constexpr unsigned int ELNCIJGALNP_TypeDefinitionIndex = 82089;

	class ELNCIJGALNP : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::System::Action* OnRefresh; // 0x20
		::RPG::AvatarSystem::IAvatar* _LeaderAvatar_k__BackingField; // 0x28
		::Sofa::Core::SimpleCommand* _ClickClose_k__BackingField; // 0x30
		::COPMGEHDGNP* LBNAGLIGKIO; // 0x38
		::OBJANKHLNGO* GJALMBBNNOF; // 0x40
		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GPALAPHKDIK; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem*>* NKHCILGCGHE; // 0x50
		::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem* _CurrentBuff_k__BackingField; // 0x58
		::HNJNCGPBEJB* ADJNOFMEIKM; // 0x60
		::System::String* _AvatarFeverDesc_k__BackingField; // 0x68
		::PEKFHPMIPDD* _ClickBuff_k__BackingField; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNCIJGALNP_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::MNBCPGLOMIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNBCPGLOMIE*))((::PBYTE)hIl2Cpp + ELNCIJGALNP_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void EFPHPFCKCIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNCIJGALNP_EFPHPFCKCIH_OFFSET))(this);
		}

		::System::Void CDPLPLCHGJE(::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem*))((::PBYTE)hIl2Cpp + ELNCIJGALNP_CDPLPLCHGJE_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_ClickClose()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNCIJGALNP_GET_CLICKCLOSE_OFFSET))(this);
		}

		::System::Void set_ClickClose(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + ELNCIJGALNP_SET_CLICKCLOSE_OFFSET))(this, a1);
		}

		::PEKFHPMIPDD* get_ClickBuff()
		{
			return ((::PEKFHPMIPDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNCIJGALNP_GET_CLICKBUFF_OFFSET))(this);
		}

		::System::Void set_ClickBuff(::PEKFHPMIPDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEKFHPMIPDD*))((::PBYTE)hIl2Cpp + ELNCIJGALNP_SET_CLICKBUFF_OFFSET))(this, a1);
		}

		::System::Void add_OnRefresh(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ELNCIJGALNP_ADD_ONREFRESH_OFFSET))(this, a1);
		}

		::System::Void remove_OnRefresh(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ELNCIJGALNP_REMOVE_ONREFRESH_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* get_LeaderAvatar()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNCIJGALNP_GET_LEADERAVATAR_OFFSET))(this);
		}

		::System::Void set_LeaderAvatar(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + ELNCIJGALNP_SET_LEADERAVATAR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::IAvatar*>* DABLLOOBBGA()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNCIJGALNP_DABLLOOBBGA_OFFSET))(this);
		}

		::System::Boolean MOBDJIMPDCF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNCIJGALNP_MOBDJIMPDCF_OFFSET))(this);
		}

		::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem* get_CurrentBuff()
		{
			return ((::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNCIJGALNP_GET_CURRENTBUFF_OFFSET))(this);
		}

		::System::Void set_CurrentBuff(::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem*))((::PBYTE)hIl2Cpp + ELNCIJGALNP_SET_CURRENTBUFF_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem*>* DDANNDHNEOI()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleMazeBuffItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNCIJGALNP_DDANNDHNEOI_OFFSET))(this);
		}

		::System::String* get_AvatarFeverDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNCIJGALNP_GET_AVATARFEVERDESC_OFFSET))(this);
		}

		::System::Void set_AvatarFeverDesc(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ELNCIJGALNP_SET_AVATARFEVERDESC_OFFSET))(this, a1);
		}

	};
