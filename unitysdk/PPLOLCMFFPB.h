#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterVisibleReason.h"
#include "unitysdk/RPG/GameCore/EntityClassifyType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EKFMIDBJDIA;
namespace RPG::Client { class MapProp; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class HoyoTag; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropConfig; }
namespace RPG::GameCore { class PropRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define PPLOLCMFFPB_ADDBJOIHBKB_OFFSET UNITYSDK_OFFSET(0xC38DE80)
#define PPLOLCMFFPB_CBPBDFOFCFG_OFFSET UNITYSDK_OFFSET(0xC38EFA0)
#define PPLOLCMFFPB_CCJIMEIIKGC_OFFSET UNITYSDK_OFFSET(0xC3911B0)
#define PPLOLCMFFPB_CCTOR_OFFSET UNITYSDK_OFFSET(0xC391730)
#define PPLOLCMFFPB_CNAEINPOPDK_OFFSET UNITYSDK_OFFSET(0xC390FB0)
#define PPLOLCMFFPB_CNALEHFANBA_OFFSET UNITYSDK_OFFSET(0xC38F590)
#define PPLOLCMFFPB_CTOR_OFFSET UNITYSDK_OFFSET(0xC38D7A0)
#define PPLOLCMFFPB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC38D9C0)
#define PPLOLCMFFPB_DLAKLIOCNOL_OFFSET UNITYSDK_OFFSET(0xC38FA80)
#define PPLOLCMFFPB_EEAHPLDLKDF_OFFSET UNITYSDK_OFFSET(0xC38DCC0)
#define PPLOLCMFFPB_GCBGBEMMPNB_OFFSET UNITYSDK_OFFSET(0xC38DF80)
#define PPLOLCMFFPB_GET_PROPENTITYLIST_OFFSET UNITYSDK_OFFSET(0xC3914F0)
#define PPLOLCMFFPB_GNBJKCCONNM_OFFSET UNITYSDK_OFFSET(0xC390940)
#define PPLOLCMFFPB_HIHNAEBFEJG_OFFSET UNITYSDK_OFFSET(0xC38DBF0)
#define PPLOLCMFFPB_HPLBGPECDFH_OFFSET UNITYSDK_OFFSET(0xC391420)
#define PPLOLCMFFPB_IFLFLBHDPMN_OFFSET UNITYSDK_OFFSET(0xC38F7F0)
#define PPLOLCMFFPB_IMPNLGKBHAK_OFFSET UNITYSDK_OFFSET(0xC38FE20)
#define PPLOLCMFFPB_JHGKFFIEDIF_OFFSET UNITYSDK_OFFSET(0xC38E430)
#define PPLOLCMFFPB_JIGPGFEDNKH_OFFSET UNITYSDK_OFFSET(0xC3912F0)
#define PPLOLCMFFPB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC38F790)
#define PPLOLCMFFPB_KKHAEKMFIOC_OFFSET UNITYSDK_OFFSET(0xC390BB0)
#define PPLOLCMFFPB_KKLNMOBNLIO_OFFSET UNITYSDK_OFFSET(0xC38FB60)
#define PPLOLCMFFPB_KPKMMGOIKCI_OFFSET UNITYSDK_OFFSET(0xC38FAF0)
#define PPLOLCMFFPB_LBIEHKNPNPD_OFFSET UNITYSDK_OFFSET(0xC38F170)
#define PPLOLCMFFPB_LFMNFMNHLHB_OFFSET UNITYSDK_OFFSET(0xC38EDB0)
#define PPLOLCMFFPB_MDOCPKPABKB_OFFSET UNITYSDK_OFFSET(0xC38F9A0)
#define PPLOLCMFFPB_MKCLBIEOFHE_OFFSET UNITYSDK_OFFSET(0xC38DE00)
#define PPLOLCMFFPB_OINCMPLKLID_OFFSET UNITYSDK_OFFSET(0xC38EAA0)
#define PPLOLCMFFPB_OMMHEMICHDF_OFFSET UNITYSDK_OFFSET(0xC391510)
#define PPLOLCMFFPB_PBGACOEMPBD_OFFSET UNITYSDK_OFFSET(0xC390020)
#define PPLOLCMFFPB_PEKGIJOIAFI_OFFSET UNITYSDK_OFFSET(0xC38DD30)
#define PPLOLCMFFPB_SET_PROPENTITYLIST_OFFSET UNITYSDK_OFFSET(0xC391500)

inline static constexpr unsigned int PPLOLCMFFPB_TypeDefinitionIndex = 60768;

	class PPLOLCMFFPB : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*>* IMCBHOPMLCI; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _PropEntityList_k__BackingField; // 0x18
		::RPG::GameCore::HoyoTag* CENNIMLCDIA; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Matrix4x4>* JKCGMENFGAE; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::MapProp*>* CODPEMLMCAO; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* PLKHAAOBCPC; // 0x38
		::RPG::GameCore::GameWorld* LMMOLOCONLH; // 0x40
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* JFCCIJHDKHJ; // 0x48
		::System::Boolean ECBLJJJILDF; // 0x50
		::RPG::GameCore::CharacterVisibleReason IDOIOMAMBLB; // 0x51
		::System::Boolean IBLCJJKAIFD; // 0x52
		::System::Boolean CIPMPLAJDLP; // 0x53
		static ::System::String** StaticGet_EFHOLEHGNGP()
		{
			return (::System::String**)UnitySDK::FromName("", "PPLOLCMFFPB")->GetStaticField(0xDAF0);
		}

		static ::System::Boolean* StaticGet_EIBLANLCEBH()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PPLOLCMFFPB")->GetStaticField(0x2D90);
		}

		::System::Void _ctor(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + PPLOLCMFFPB_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPLOLCMFFPB_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLOLCMFFPB_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::PropConfig* HIHNAEBFEJG(::RPG::GameCore::PropRow* a1, ::RPG::Client::MapPropDef* a2)
		{
			return ((::RPG::GameCore::PropConfig*(*)(::PVOID, ::RPG::GameCore::PropRow*, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + PPLOLCMFFPB_HIHNAEBFEJG_OFFSET))(this, a1, a2);
		}

		::System::Void EEAHPLDLKDF(::RPG::GameCore::PropComponent* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + PPLOLCMFFPB_EEAHPLDLKDF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PEKGIJOIAFI(::RPG::GameCore::PropComponent* a1, ::RPG::Client::MapPropDef* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + PPLOLCMFFPB_PEKGIJOIAFI_OFFSET))(this, a1, a2);
		}

		::System::Void MKCLBIEOFHE(::RPG::GameCore::PropComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + PPLOLCMFFPB_MKCLBIEOFHE_OFFSET))(this, a1);
		}

		::System::Void ADDBJOIHBKB(::RPG::GameCore::GameEntity* a1, ::RPG::Client::MapPropDef* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + PPLOLCMFFPB_ADDBJOIHBKB_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* GCBGBEMMPNB(::System::UInt32 a1, ::RPG::GameCore::TeamType a2, ::System::String* a3, ::UnityEngine::GameObject* a4, ::RPG::MVector3 a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::RPG::MVector3 a9, ::RPG::Client::MapPropDef* a10, ::System::String* a11, ::System::Action_1<::RPG::GameCore::GameEntity*>* a12, ::RPG::GameCore::EntityClassifyType a13, ::System::Boolean a14, ::RPG::Client::OpenWorld::StreamingItemData* a15, ::System::Boolean a16)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::TeamType, ::System::String*, ::UnityEngine::GameObject*, ::RPG::MVector3, ::System::Single, ::System::Single, ::System::Single, ::RPG::MVector3, ::RPG::Client::MapPropDef*, ::System::String*, ::System::Action_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::EntityClassifyType, ::System::Boolean, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + PPLOLCMFFPB_GCBGBEMMPNB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
		}

		::System::Void JHGKFFIEDIF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PPLOLCMFFPB_JHGKFFIEDIF_OFFSET))(this, a1);
		}

		::System::Void OINCMPLKLID(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PPLOLCMFFPB_OINCMPLKLID_OFFSET))(this, a1);
		}

		::System::Void LFMNFMNHLHB(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + PPLOLCMFFPB_LFMNFMNHLHB_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean CBPBDFOFCFG(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + PPLOLCMFFPB_CBPBDFOFCFG_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::GameEntity* LBIEHKNPNPD(::System::String* a1, ::System::Boolean a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + PPLOLCMFFPB_LBIEHKNPNPD_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PPLOLCMFFPB_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void IFLFLBHDPMN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PPLOLCMFFPB_IFLFLBHDPMN_OFFSET))(this, a1);
		}

		::System::Void MDOCPKPABKB(::RPG::Client::MapProp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + PPLOLCMFFPB_MDOCPKPABKB_OFFSET))(this, a1);
		}

		::System::Void CNALEHFANBA(::RPG::Client::MapProp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + PPLOLCMFFPB_CNALEHFANBA_OFFSET))(this, a1);
		}

		::System::Boolean DLAKLIOCNOL(::RPG::Client::MapProp* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + PPLOLCMFFPB_DLAKLIOCNOL_OFFSET))(this, a1);
		}

		::System::Void KPKMMGOIKCI(::RPG::Client::MapProp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + PPLOLCMFFPB_KPKMMGOIKCI_OFFSET))(this, a1);
		}

		::System::Void KKLNMOBNLIO(::RPG::GameCore::TeamType a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PPLOLCMFFPB_KKLNMOBNLIO_OFFSET))(this, a1, a2);
		}

		::System::Void IMPNLGKBHAK(::RPG::GameCore::TeamType a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType, ::System::UInt32))((::PBYTE)hIl2Cpp + PPLOLCMFFPB_IMPNLGKBHAK_OFFSET))(this, a1, a2);
		}

		::System::Void PBGACOEMPBD(::RPG::GameCore::CharacterVisibleReason a1, ::RPG::GameCore::HoyoTag* a2, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::UInt32, ::System::UInt32>*>* a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterVisibleReason, ::RPG::GameCore::HoyoTag*, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::UInt32, ::System::UInt32>*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PPLOLCMFFPB_PBGACOEMPBD_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void GNBJKCCONNM(::RPG::GameCore::CharacterVisibleReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterVisibleReason))((::PBYTE)hIl2Cpp + PPLOLCMFFPB_GNBJKCCONNM_OFFSET))(this, a1);
		}

		::System::Void KKHAEKMFIOC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PPLOLCMFFPB_KKHAEKMFIOC_OFFSET))(this, a1);
		}

		::System::Void CNAEINPOPDK(::RPG::GameCore::GameEntity* a1, ::RPG::Client::MapPropDef* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + PPLOLCMFFPB_CNAEINPOPDK_OFFSET))(this, a1, a2);
		}

		::System::Void CCJIMEIIKGC(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::PropRow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::PropRow*))((::PBYTE)hIl2Cpp + PPLOLCMFFPB_CCJIMEIIKGC_OFFSET))(this, a1, a2);
		}

		::System::Void JIGPGFEDNKH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PPLOLCMFFPB_JIGPGFEDNKH_OFFSET))(this, a1);
		}

		::System::Void HPLBGPECDFH(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + PPLOLCMFFPB_HPLBGPECDFH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_PropEntityList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLOLCMFFPB_GET_PROPENTITYLIST_OFFSET))(this);
		}

		::System::Void set_PropEntityList(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + PPLOLCMFFPB_SET_PROPENTITYLIST_OFFSET))(this, a1);
		}

		static ::System::String* OMMHEMICHDF(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + PPLOLCMFFPB_OMMHEMICHDF_OFFSET))(a1, a2);
		}

	};
