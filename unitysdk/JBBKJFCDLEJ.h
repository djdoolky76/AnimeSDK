#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ElfRestaurant/SIMEmotionState.h"
#include "unitysdk/RPG/GameCore/ElfBehaviorStateType.h"
#include "unitysdk/RPG/GameCore/ElfProperty.h"
#include "unitysdk/RPG/GameCore/ElfTargetType.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityType.h"
#include "unitysdk/RPG/GameCore/RestaurantDynamicValueType.h"
#include "unitysdk/RPG/GameCore/RestaurantNormalEventType.h"
#include "unitysdk/RPG/GameCore/RestaurantSuperEventType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EEJFCAJBLFK;
class HJCLAOMEAIE;
class PGBLBOJBDGG;
namespace Entitas { template <typename T> class IMatcher_1; }
namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::Client::LittleGame::ElfRestaurant { class ElfRestaurantEventParams; }
namespace RPG::GameCore { class ElfBehaviorStateContentItem; }
namespace RPG::GameCore { class ElfBehaviorStateEmojiItem; }
namespace RPG::GameCore { class ElfBehaviorStateItem; }
namespace RPG::GameCore { class ElfBuff; }
namespace RPG::GameCore { class ElfPropertyModifier; }
namespace RPG::GameCore { class ElfWaveCustomerConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define JBBKJFCDLEJ_AMMAIKILABM_OFFSET UNITYSDK_OFFSET(0x16560B40)
#define JBBKJFCDLEJ_APHHINANHDO_OFFSET UNITYSDK_OFFSET(0x16566340)
#define JBBKJFCDLEJ_CCNANDILPIL_OFFSET UNITYSDK_OFFSET(0x16564CE0)
#define JBBKJFCDLEJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x16566640)
#define JBBKJFCDLEJ_CEPBIIDFJFK_OFFSET UNITYSDK_OFFSET(0x165646E0)
#define JBBKJFCDLEJ_CLEIBFKCDIE_OFFSET UNITYSDK_OFFSET(0x16564E80)
#define JBBKJFCDLEJ_CLOKNOIBGEB_OFFSET UNITYSDK_OFFSET(0x16563560)
#define JBBKJFCDLEJ_CMPNCFCJCNE_OFFSET UNITYSDK_OFFSET(0x16563870)
#define JBBKJFCDLEJ_DAIFPONBGIO_OFFSET UNITYSDK_OFFSET(0x165661F0)
#define JBBKJFCDLEJ_EDCOHEFPNGD_OFFSET UNITYSDK_OFFSET(0x16564770)
#define JBBKJFCDLEJ_EECPELLIOGF_OFFSET UNITYSDK_OFFSET(0x16564A80)
#define JBBKJFCDLEJ_FACGACANGKO_OFFSET UNITYSDK_OFFSET(0x16565390)
#define JBBKJFCDLEJ_FCLEHAKOBOA_OFFSET UNITYSDK_OFFSET(0x16565010)
#define JBBKJFCDLEJ_FFOBDOBOEDD_OFFSET UNITYSDK_OFFSET(0x16560AB0)
#define JBBKJFCDLEJ_FPOBGELAIBH_OFFSET UNITYSDK_OFFSET(0x16565250)
#define JBBKJFCDLEJ_HBCHANLAPAC_OFFSET UNITYSDK_OFFSET(0x16564F20)
#define JBBKJFCDLEJ_HGGKHNJGNPA_OFFSET UNITYSDK_OFFSET(0x16561330)
#define JBBKJFCDLEJ_HHGCBDIDFDA_OFFSET UNITYSDK_OFFSET(0x16564B80)
#define JBBKJFCDLEJ_HKDBPLHGHBA_OFFSET UNITYSDK_OFFSET(0x16564130)
#define JBBKJFCDLEJ_HMGPDIMINDG_OFFSET UNITYSDK_OFFSET(0x16563040)
#define JBBKJFCDLEJ_IGABFBNOPGG_OFFSET UNITYSDK_OFFSET(0x16566150)
#define JBBKJFCDLEJ_JGKBDJNFFEG_OFFSET UNITYSDK_OFFSET(0x16563C30)
#define JBBKJFCDLEJ_JIPDJJOJDEJ_OFFSET UNITYSDK_OFFSET(0x16563EB0)
#define JBBKJFCDLEJ_JKPBOGAEKKM_OFFSET UNITYSDK_OFFSET(0x16564500)
#define JBBKJFCDLEJ_JONOFIGIPPH_OFFSET UNITYSDK_OFFSET(0x16564230)
#define JBBKJFCDLEJ_KBLJAHKCNDN_OFFSET UNITYSDK_OFFSET(0x16562BB0)
#define JBBKJFCDLEJ_KGCNBJNJCKJ_OFFSET UNITYSDK_OFFSET(0x16560850)
#define JBBKJFCDLEJ_KJDFJAENBEG_OFFSET UNITYSDK_OFFSET(0x16564C40)
#define JBBKJFCDLEJ_KJHNEKEMOMK_OFFSET UNITYSDK_OFFSET(0x165620F0)
#define JBBKJFCDLEJ_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0x165665B0)
#define JBBKJFCDLEJ_KKMPOAHBMHB_OFFSET UNITYSDK_OFFSET(0x16562A50)
#define JBBKJFCDLEJ_LFGNLMGHHLI_OFFSET UNITYSDK_OFFSET(0x16564330)
#define JBBKJFCDLEJ_LIDJOJDLBEM_OFFSET UNITYSDK_OFFSET(0x165614D0)
#define JBBKJFCDLEJ_MAEGDMGEDED_OFFSET UNITYSDK_OFFSET(0x16560CB0)
#define JBBKJFCDLEJ_MDGNJPIMCPH_OFFSET UNITYSDK_OFFSET(0x16564DA0)
#define JBBKJFCDLEJ_MJEODHKPKEB_1_OFFSET UNITYSDK_OFFSET(0x16560E90)
#define JBBKJFCDLEJ_MJEODHKPKEB_2_OFFSET UNITYSDK_OFFSET(0x16560F40)
#define JBBKJFCDLEJ_MJEODHKPKEB_OFFSET UNITYSDK_OFFSET(0x16560D70)
#define JBBKJFCDLEJ_MPKMEGHCCNF_OFFSET UNITYSDK_OFFSET(0x16561100)
#define JBBKJFCDLEJ_NEPHODBELFK_OFFSET UNITYSDK_OFFSET(0x16560BF0)
#define JBBKJFCDLEJ_NGAFFJCJABL_OFFSET UNITYSDK_OFFSET(0x16561000)
#define JBBKJFCDLEJ_NJPNLPAAEBB_1_OFFSET UNITYSDK_OFFSET(0x16562690)
#define JBBKJFCDLEJ_NJPNLPAAEBB_OFFSET UNITYSDK_OFFSET(0x165622D0)
#define JBBKJFCDLEJ_NNIABFKELNC_OFFSET UNITYSDK_OFFSET(0x16561160)
#define JBBKJFCDLEJ_PEOOHJOEOAM_OFFSET UNITYSDK_OFFSET(0x165609B0)
#define JBBKJFCDLEJ_PFEMAHAGPAC_OFFSET UNITYSDK_OFFSET(0x16562EC0)
#define JBBKJFCDLEJ_PFNJEFEHFCP_OFFSET UNITYSDK_OFFSET(0x16564BE0)

	class JBBKJFCDLEJ : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_AIKAJNHNMFM()
		{
			return (::System::String**)UnitySDK::FromName("", "JBBKJFCDLEJ")->GetStaticField(0x13FD0);
		}

		static ::RPG::Client::ElfRestaurantGameInstance** StaticGet_HIDONCNDKJD()
		{
			return (::RPG::Client::ElfRestaurantGameInstance**)UnitySDK::FromName("", "JBBKJFCDLEJ")->GetStaticField(0x13FD8);
		}

		static ::System::String** StaticGet_AOIDNJKGABF()
		{
			return (::System::String**)UnitySDK::FromName("", "JBBKJFCDLEJ")->GetStaticField(0x13FE0);
		}

		static ::System::String** StaticGet_MAKPFNDHGLG()
		{
			return (::System::String**)UnitySDK::FromName("", "JBBKJFCDLEJ")->GetStaticField(0x13FE8);
		}

		static ::System::String** StaticGet_ACMBKCPFKPO()
		{
			return (::System::String**)UnitySDK::FromName("", "JBBKJFCDLEJ")->GetStaticField(0x13FF0);
		}

		static ::System::String** StaticGet_FCENPNHPKIK()
		{
			return (::System::String**)UnitySDK::FromName("", "JBBKJFCDLEJ")->GetStaticField(0x13FF8);
		}

		static ::System::String** StaticGet_GDCCMBKPIAH()
		{
			return (::System::String**)UnitySDK::FromName("", "JBBKJFCDLEJ")->GetStaticField(0x14000);
		}

		static ::System::String** StaticGet_PNBDJJBFOMP()
		{
			return (::System::String**)UnitySDK::FromName("", "JBBKJFCDLEJ")->GetStaticField(0x14008);
		}

		static ::PGBLBOJBDGG** StaticGet_JFHJIJJNCFG()
		{
			return (::PGBLBOJBDGG**)UnitySDK::FromName("", "JBBKJFCDLEJ")->GetStaticField(0x14010);
		}

		// static const ::System::String* BANDPMBKDCP; // 0x0
		// static const ::System::Object BEPJBGABGND; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_CCTOR_OFFSET))();
		}

		static ::System::Void KGCNBJNJCKJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_KGCNBJNJCKJ_OFFSET))(a1);
		}

		static ::System::UInt32 PEOOHJOEOAM(::System::String* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::UInt32(*)(::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_PEOOHJOEOAM_OFFSET))(a1, a2);
		}

		static ::System::Void FFOBDOBOEDD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_FFOBDOBOEDD_OFFSET))(a1);
		}

		static ::System::Void AMMAIKILABM(::System::String* a1, ::UnityEngine::GameObject* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_AMMAIKILABM_OFFSET))(a1, a2, a3);
		}

		static ::System::Void NEPHODBELFK(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_NEPHODBELFK_OFFSET))(a1);
		}

		static ::System::Void MAEGDMGEDED(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_MAEGDMGEDED_OFFSET))(a1);
		}

		static ::RPG::GameCore::ElfBehaviorStateItem* MJEODHKPKEB(::RPG::GameCore::ElfBehaviorStateItem* a1)
		{
			return ((::RPG::GameCore::ElfBehaviorStateItem*(*)(::RPG::GameCore::ElfBehaviorStateItem*))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_MJEODHKPKEB_OFFSET))(a1);
		}

		static ::RPG::GameCore::ElfBehaviorStateContentItem* MJEODHKPKEB_1(::RPG::GameCore::ElfBehaviorStateContentItem* a1)
		{
			return ((::RPG::GameCore::ElfBehaviorStateContentItem*(*)(::RPG::GameCore::ElfBehaviorStateContentItem*))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_MJEODHKPKEB_1_OFFSET))(a1);
		}

		static ::RPG::GameCore::ElfBehaviorStateEmojiItem* MJEODHKPKEB_2(::RPG::GameCore::ElfBehaviorStateEmojiItem* a1)
		{
			return ((::RPG::GameCore::ElfBehaviorStateEmojiItem*(*)(::RPG::GameCore::ElfBehaviorStateEmojiItem*))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_MJEODHKPKEB_2_OFFSET))(a1);
		}

		static ::System::Void NGAFFJCJABL(::RPG::GameCore::ElfBehaviorStateItem* a1, ::RPG::GameCore::ElfBehaviorStateItem* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::ElfBehaviorStateItem*, ::RPG::GameCore::ElfBehaviorStateItem*))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_NGAFFJCJABL_OFFSET))(a1, a2);
		}

		static ::System::Void MPKMEGHCCNF(::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams* a1)
		{
			return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams*))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_MPKMEGHCCNF_OFFSET))(a1);
		}

		static ::System::Void NNIABFKELNC(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::System::String* a2, ::RPG::Client::TextID a3, ::System::String* a4, ::RPG::GameCore::ElfBehaviorStateType a5, ::System::Single a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::String*, ::RPG::Client::TextID, ::System::String*, ::RPG::GameCore::ElfBehaviorStateType, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_NNIABFKELNC_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void HGGKHNJGNPA(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_HGGKHNJGNPA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* LIDJOJDLBEM(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::RPG::GameCore::ElfTargetType a2, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* a3, ::RPG::GameCore::LittleGameEntityType a4)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::GameCore::ElfTargetType, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::GameCore::LittleGameEntityType))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_LIDJOJDLBEM_OFFSET))(a1, a2, a3, a4);
		}

		static ::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* KJHNEKEMOMK(::RPG::GameCore::LittleGameEntityType a1)
		{
			return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::RPG::GameCore::LittleGameEntityType))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_KJHNEKEMOMK_OFFSET))(a1);
		}

		static ::System::Boolean NJPNLPAAEBB(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::RPG::GameCore::RestaurantDynamicValueType a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::GameCore::RestaurantDynamicValueType, ::System::UInt32))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_NJPNLPAAEBB_OFFSET))(a1, a2, a3);
		}

		static ::System::Single NJPNLPAAEBB_1(::System::String* a1, ::Il2CppArray<::System::Single>* a2)
		{
			return ((::System::Single(*)(::System::String*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_NJPNLPAAEBB_1_OFFSET))(a1, a2);
		}

		static ::System::Void KKMPOAHBMHB(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_KKMPOAHBMHB_OFFSET))(a1, a2, a3);
		}

		static ::System::Void PFEMAHAGPAC(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* a2, ::EEJFCAJBLFK* a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::EEJFCAJBLFK*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_PFEMAHAGPAC_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void KBLJAHKCNDN(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::System::UInt32 a2, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* a3)
		{
			return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::UInt32, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_KBLJAHKCNDN_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CLOKNOIBGEB(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::System::UInt32 a2, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* a3)
		{
			return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::UInt32, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_CLOKNOIBGEB_OFFSET))(a1, a2, a3);
		}

		static ::System::Void JGKBDJNFFEG(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::System::String* a2, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* a3, ::Il2CppArray<::System::Single>* a4)
		{
			return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::String*, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_JGKBDJNFFEG_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void JIPDJJOJDEJ(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::System::String* a2, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* a3, ::Il2CppArray<::System::Single>* a4)
		{
			return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::String*, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_JIPDJJOJDEJ_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void HMGPDIMINDG(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::RPG::GameCore::ElfBuff* a2, ::Il2CppArray<::System::Single>* a3)
		{
			return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::GameCore::ElfBuff*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_HMGPDIMINDG_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CMPNCFCJCNE(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::RPG::GameCore::ElfBuff* a2, ::Il2CppArray<::System::Single>* a3)
		{
			return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::GameCore::ElfBuff*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_CMPNCFCJCNE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void HKDBPLHGHBA(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::Il2CppArray<::RPG::GameCore::ElfPropertyModifier*>* a2, ::Il2CppArray<::System::Single>* a3)
		{
			return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::Il2CppArray<::RPG::GameCore::ElfPropertyModifier*>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_HKDBPLHGHBA_OFFSET))(a1, a2, a3);
		}

		static ::System::Void JONOFIGIPPH(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::Il2CppArray<::RPG::GameCore::ElfPropertyModifier*>* a2, ::Il2CppArray<::System::Single>* a3)
		{
			return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::Il2CppArray<::RPG::GameCore::ElfPropertyModifier*>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_JONOFIGIPPH_OFFSET))(a1, a2, a3);
		}

		static ::System::Void LFGNLMGHHLI(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::RPG::GameCore::ElfPropertyModifier* a2, ::Il2CppArray<::System::Single>* a3)
		{
			return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::GameCore::ElfPropertyModifier*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_LFGNLMGHHLI_OFFSET))(a1, a2, a3);
		}

		static ::System::Void JKPBOGAEKKM(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::RPG::GameCore::ElfPropertyModifier* a2, ::Il2CppArray<::System::Single>* a3)
		{
			return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::GameCore::ElfPropertyModifier*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_JKPBOGAEKKM_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CEPBIIDFJFK(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::RPG::GameCore::ElfProperty a2)
		{
			return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::GameCore::ElfProperty))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_CEPBIIDFJFK_OFFSET))(a1, a2);
		}

		static ::System::Boolean EDCOHEFPNGD(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_EDCOHEFPNGD_OFFSET))(a1);
		}

		static ::System::Boolean EECPELLIOGF(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_EECPELLIOGF_OFFSET))(a1);
		}

		static ::System::Boolean HHGCBDIDFDA(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_HHGCBDIDFDA_OFFSET))(a1);
		}

		static ::System::Boolean PFNJEFEHFCP(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_PFNJEFEHFCP_OFFSET))(a1);
		}

		static ::System::Boolean KJDFJAENBEG(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::RPG::GameCore::RestaurantNormalEventType a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::GameCore::RestaurantNormalEventType))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_KJDFJAENBEG_OFFSET))(a1, a2);
		}

		static ::System::Boolean CCNANDILPIL(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::RPG::GameCore::RestaurantSuperEventType a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::GameCore::RestaurantSuperEventType))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_CCNANDILPIL_OFFSET))(a1, a2);
		}

		static ::System::Single MDGNJPIMCPH(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::RPG::GameCore::ElfProperty a2)
		{
			return ((::System::Single(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::GameCore::ElfProperty))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_MDGNJPIMCPH_OFFSET))(a1, a2);
		}

		static ::System::Void CLEIBFKCDIE(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::RPG::GameCore::ElfProperty a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::GameCore::ElfProperty, ::System::Single))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_CLEIBFKCDIE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::LittleGame::ElfRestaurant::SIMEmotionState HBCHANLAPAC(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::RPG::Client::LittleGame::ElfRestaurant::SIMEmotionState(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_HBCHANLAPAC_OFFSET))(a1);
		}

		static ::System::Boolean FCLEHAKOBOA(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_FCLEHAKOBOA_OFFSET))(a1);
		}

		static ::System::Boolean FPOBGELAIBH(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_FPOBGELAIBH_OFFSET))(a1);
		}

		static ::System::Void FACGACANGKO(::RPG::GameCore::RestaurantNormalEventType a1, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* a2, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* a3, ::UnityEngine::Vector3 a4, ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams* a5)
		{
			return ((::System::Void(*)(::RPG::GameCore::RestaurantNormalEventType, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Vector3, ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams*))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_FACGACANGKO_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean IGABFBNOPGG()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_IGABFBNOPGG_OFFSET))();
		}

		static ::System::Boolean DAIFPONBGIO(::HJCLAOMEAIE* a1)
		{
			return ((::System::Boolean(*)(::HJCLAOMEAIE*))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_DAIFPONBGIO_OFFSET))(a1);
		}

		static ::System::Void APHHINANHDO(::RPG::GameCore::ElfWaveCustomerConfig* a1, ::RPG::GameCore::ElfWaveCustomerConfig* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::ElfWaveCustomerConfig*, ::RPG::GameCore::ElfWaveCustomerConfig*))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_APHHINANHDO_OFFSET))(a1, a2);
		}

		static ::System::Boolean KKKIONIDKFA(::UnityEngine::Quaternion a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + JBBKJFCDLEJ_KKKIONIDKFA_OFFSET))(a1);
		}

	};
