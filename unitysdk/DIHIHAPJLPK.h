#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIHIHAPJLPK_MapRotationChargerState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
class DLNCBOGAMFG;
class EKFMIDBJDIA;
class FNFAEAEOFAN;
namespace EffectPlugin { class Effect_CustomFollowPlugin; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client { class MapRotationInfo; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginPerformEventListener; }
namespace RPG::GameCore { class ButtonListTrigger; }
namespace RPG::GameCore { class ColliderTriggerComponent; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DIHIHAPJLPK_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0xEBF5A30)
#define DIHIHAPJLPK_CPNGHFJBGHM_OFFSET UNITYSDK_OFFSET(0xEBF7890)
#define DIHIHAPJLPK_CTOR_OFFSET UNITYSDK_OFFSET(0xEBF7B40)
#define DIHIHAPJLPK_DCDPOCOACJA_OFFSET UNITYSDK_OFFSET(0xEBF7340)
#define DIHIHAPJLPK_DDGGHFEPJBL_OFFSET UNITYSDK_OFFSET(0xEBF5F30)
#define DIHIHAPJLPK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEBF5780)
#define DIHIHAPJLPK_DKFIMEOIFCP_OFFSET UNITYSDK_OFFSET(0xEBF6D40)
#define DIHIHAPJLPK_DPPLFBKFHHN_OFFSET UNITYSDK_OFFSET(0xEBF64C0)
#define DIHIHAPJLPK_EDKBELEEGBD_OFFSET UNITYSDK_OFFSET(0xEBF68A0)
#define DIHIHAPJLPK_EKLCHLNGOIO_OFFSET UNITYSDK_OFFSET(0xEBF7180)
#define DIHIHAPJLPK_EOGHEJENFHA_OFFSET UNITYSDK_OFFSET(0xEBF68F0)
#define DIHIHAPJLPK_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xEBF7AE0)
#define DIHIHAPJLPK_GET_HASINTERACTHANDLER_OFFSET UNITYSDK_OFFSET(0xEBF7B20)
#define DIHIHAPJLPK_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xEBF7B00)
#define DIHIHAPJLPK_GMEIDJNNBIA_OFFSET UNITYSDK_OFFSET(0xEBF5590)
#define DIHIHAPJLPK_GOIKOCDNENH_OFFSET UNITYSDK_OFFSET(0xEBF7760)
#define DIHIHAPJLPK_HBBKOOCDOAP_OFFSET UNITYSDK_OFFSET(0xEBF5B90)
#define DIHIHAPJLPK_HBMKDAGAPAI_OFFSET UNITYSDK_OFFSET(0xEBF6F10)
#define DIHIHAPJLPK_HEHJAJFJJMP_OFFSET UNITYSDK_OFFSET(0xEBF5AE0)
#define DIHIHAPJLPK_IKCMPJLICGE_OFFSET UNITYSDK_OFFSET(0xEBF7A80)
#define DIHIHAPJLPK_IPILJAAPHJL_OFFSET UNITYSDK_OFFSET(0xEBF6070)
#define DIHIHAPJLPK_JEJLPHKIHLB_OFFSET UNITYSDK_OFFSET(0xEBF5630)
#define DIHIHAPJLPK_JIFPPKNBGMH_OFFSET UNITYSDK_OFFSET(0xEBF5920)
#define DIHIHAPJLPK_KAOMFDNCNHO_OFFSET UNITYSDK_OFFSET(0xEBF6210)
#define DIHIHAPJLPK_KCMBMAPKNIP_OFFSET UNITYSDK_OFFSET(0xEBF6270)
#define DIHIHAPJLPK_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xEBF51E0)
#define DIHIHAPJLPK_LPMPFNBIBCC_OFFSET UNITYSDK_OFFSET(0xEBF6DC0)
#define DIHIHAPJLPK_MPKIICDLBIO_OFFSET UNITYSDK_OFFSET(0xEBF6B50)
#define DIHIHAPJLPK_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xEBF7AF0)
#define DIHIHAPJLPK_SET_HASINTERACTHANDLER_OFFSET UNITYSDK_OFFSET(0xEBF7B30)
#define DIHIHAPJLPK_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xEBF7B10)

inline static constexpr unsigned int DIHIHAPJLPK_TypeDefinitionIndex = 57310;

	class DIHIHAPJLPK : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::GameCore::ColliderTriggerComponent* FKDFCAGAEBD; // 0x18
		::System::String* BBKELOEHDEC; // 0x20
		::System::String* FFMEAJEPLOC; // 0x28
		::RPG::Client::MapRotationInfo* OCDIENNPEDA; // 0x30
		::System::String* PDCDBDJGKJH; // 0x38
		::System::String* BJDDCONLDPJ; // 0x40
		::System::String* EBAKELEMPNB; // 0x48
		::System::String* DINOKIKECDO; // 0x50
		::System::String* NENDBLMGHLO; // 0x58
		::RPG::GameCore::ButtonListTrigger* DPLMPFEAHJJ; // 0x60
		::System::Collections::Generic::List_1<::System::String*>* JEIPIEAJOBN; // 0x68
		::FNFAEAEOFAN* NKBGEFMFLJG; // 0x70
		::RPG::Client::MapPropDef* OCCBNFGILCP; // 0x78
		::System::String* IFLOBHPJFIP; // 0x80
		::RPG::Client::MapDef* KKKADHHBMLD; // 0x88
		::System::Action_1<::System::Object*>* HGOJNFKDIMA; // 0x90
		::RPG::GameCore::PropComponent* NKILIBDMOMC; // 0x98
		::DLNCBOGAMFG* BAMECAHHEKC; // 0xA0
		::System::String* GNBHANDCFDK; // 0xA8
		::RPG::Client::TextID KELFHANAHOI; // 0xB0
		::RPG::Client::TextID ADLOPDBLNGG; // 0xC0
		::System::Boolean _HasInteractHandler_k__BackingField; // 0xD0
		::System::Byte _padding0[0x3];
		::System::UInt32 _InstanceID_k__BackingField; // 0xD4
		::System::UInt32 NBJBOHHECAL; // 0xD8
		::System::UInt32 _GroupID_k__BackingField; // 0xDC
		// static const ::System::String* GPPPKCNJKFG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIHIHAPJLPK_CTOR_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIHIHAPJLPK_LMCEDCHJKFF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIHIHAPJLPK_DISPOSE_OFFSET))(this);
		}

		::System::Void JIFPPKNBGMH(::DIHIHAPJLPK_MapRotationChargerState a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIHIHAPJLPK_MapRotationChargerState))((::PBYTE)hIl2Cpp + DIHIHAPJLPK_JIFPPKNBGMH_OFFSET))(this, a1);
		}

		::System::Void DDGGHFEPJBL(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::String* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + DIHIHAPJLPK_DDGGHFEPJBL_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void KAOMFDNCNHO(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + DIHIHAPJLPK_KAOMFDNCNHO_OFFSET))(this, a1, a2);
		}

		::System::Void DPPLFBKFHHN(::System::String* a1, ::RPG::Client::TextID a2, ::RPG::Client::TextID a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::TextID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + DIHIHAPJLPK_DPPLFBKFHHN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EDKBELEEGBD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DIHIHAPJLPK_EDKBELEEGBD_OFFSET))(this, a1);
		}

		::System::Void EOGHEJENFHA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DIHIHAPJLPK_EOGHEJENFHA_OFFSET))(this, a1);
		}

		::System::Void MPKIICDLBIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIHIHAPJLPK_MPKIICDLBIO_OFFSET))(this);
		}

		::System::Void HBMKDAGAPAI(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>*))((::PBYTE)hIl2Cpp + DIHIHAPJLPK_HBMKDAGAPAI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EKLCHLNGOIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIHIHAPJLPK_EKLCHLNGOIO_OFFSET))(this);
		}

		::System::Void DKFIMEOIFCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIHIHAPJLPK_DKFIMEOIFCP_OFFSET))(this);
		}

		::System::Void DCDPOCOACJA(::RPG::Client::MonoEffect* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::System::UInt32))((::PBYTE)hIl2Cpp + DIHIHAPJLPK_DCDPOCOACJA_OFFSET))(this, a1, a2);
		}

		::System::Void GOIKOCDNENH(::EffectPlugin::Effect_CustomFollowPlugin* a1, ::RPG::Client::MonoEffectPluginPerformEventListener* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::EffectPlugin::Effect_CustomFollowPlugin*, ::RPG::Client::MonoEffectPluginPerformEventListener*, ::System::UInt32))((::PBYTE)hIl2Cpp + DIHIHAPJLPK_GOIKOCDNENH_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GMEIDJNNBIA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIHIHAPJLPK_GMEIDJNNBIA_OFFSET))(this);
		}

		::System::Void CPNGHFJBGHM(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + DIHIHAPJLPK_CPNGHFJBGHM_OFFSET))(this, a1);
		}

		::System::Void JEJLPHKIHLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIHIHAPJLPK_JEJLPHKIHLB_OFFSET))(this);
		}

		::System::Void IKCMPJLICGE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIHIHAPJLPK_IKCMPJLICGE_OFFSET))(this, a1);
		}

		::System::Void IPILJAAPHJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIHIHAPJLPK_IPILJAAPHJL_OFFSET))(this);
		}

		::System::Void KCMBMAPKNIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIHIHAPJLPK_KCMBMAPKNIP_OFFSET))(this);
		}

		::System::Void LPMPFNBIBCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIHIHAPJLPK_LPMPFNBIBCC_OFFSET))(this);
		}

		::System::Void HBBKOOCDOAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIHIHAPJLPK_HBBKOOCDOAP_OFFSET))(this);
		}

		::DIHIHAPJLPK_MapRotationChargerState BGDKFHEBDFJ()
		{
			return ((::DIHIHAPJLPK_MapRotationChargerState(*)(::PVOID))((::PBYTE)hIl2Cpp + DIHIHAPJLPK_BGDKFHEBDFJ_OFFSET))(this);
		}

		::System::Void HEHJAJFJJMP(::DIHIHAPJLPK_MapRotationChargerState a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIHIHAPJLPK_MapRotationChargerState))((::PBYTE)hIl2Cpp + DIHIHAPJLPK_HEHJAJFJJMP_OFFSET))(this, a1);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIHIHAPJLPK_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DIHIHAPJLPK_SET_GROUPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_InstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIHIHAPJLPK_GET_INSTANCEID_OFFSET))(this);
		}

		::System::Void set_InstanceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DIHIHAPJLPK_SET_INSTANCEID_OFFSET))(this, a1);
		}

		::System::Boolean get_HasInteractHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIHIHAPJLPK_GET_HASINTERACTHANDLER_OFFSET))(this);
		}

		::System::Void set_HasInteractHandler(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIHIHAPJLPK_SET_HASINTERACTHANDLER_OFFSET))(this, a1);
		}

	};
