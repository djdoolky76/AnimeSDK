#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/ViewModel/CraftProgressAttrPipeline/MechCraftPerfUnitType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"
class CBJILMHOMGP;
class DBIAFBMMBBA_JJJAFCAJPNC;
class DCAJGFPPCDM;
class DCAJGFPPCDM_ICDHMCOAAFA;
class EBHGKOEPPJI;
class FCNLPLHOACB;
class GPJENJKHNCN;
class HEKHCLACHJE;
class IAJGGEMFOMB;
class IOJNNBAILBC;
class MBPKHMAJLGK;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftCraftProgressAttrRadarViewModel; }
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { class KeyValuePair; }

#define DBIAFBMMBBA_ADD_HANDLEGETTARGETREACHEDDURATION_OFFSET UNITYSDK_OFFSET(0xDFE2560)
#define DBIAFBMMBBA_ADD_HANDLEGETTARGETREACHINGDURATION_OFFSET UNITYSDK_OFFSET(0xDFE24A0)
#define DBIAFBMMBBA_ADD_HANDLEPLAYTARGETREACHING_OFFSET UNITYSDK_OFFSET(0xDFE2620)
#define DBIAFBMMBBA_CFIKPPDJBLN_OFFSET UNITYSDK_OFFSET(0xDFE2E60)
#define DBIAFBMMBBA_CKKLPAMJFIC_OFFSET UNITYSDK_OFFSET(0xDFE2720)
#define DBIAFBMMBBA_CPOEBALMAHJ_OFFSET UNITYSDK_OFFSET(0xDFE3120)
#define DBIAFBMMBBA_CTOR_OFFSET UNITYSDK_OFFSET(0xDFE2800)
#define DBIAFBMMBBA_DABIFANLIFC_OFFSET UNITYSDK_OFFSET(0xDFE2CD0)
#define DBIAFBMMBBA_DILILNKELLA_OFFSET UNITYSDK_OFFSET(0xDFE30C0)
#define DBIAFBMMBBA_DLBJJJAAPAM_OFFSET UNITYSDK_OFFSET(0xDFE2BF0)
#define DBIAFBMMBBA_DLGBCHNHKKJ_OFFSET UNITYSDK_OFFSET(0xDFE2C60)
#define DBIAFBMMBBA_GCMKLJMJACF_OFFSET UNITYSDK_OFFSET(0xDFE2950)
#define DBIAFBMMBBA_GET_RADAR_OFFSET UNITYSDK_OFFSET(0xDFE2480)
#define DBIAFBMMBBA_GET_TARGET_OFFSET UNITYSDK_OFFSET(0xDFE2460)
#define DBIAFBMMBBA_GIDLPMHJBLE_OFFSET UNITYSDK_OFFSET(0xDFE2FF0)
#define DBIAFBMMBBA_KHFAFNJIPJM_OFFSET UNITYSDK_OFFSET(0xDFE2E00)
#define DBIAFBMMBBA_LCPPIOIIICH_OFFSET UNITYSDK_OFFSET(0xDFE2ED0)
#define DBIAFBMMBBA_MACIPFCFDNE_OFFSET UNITYSDK_OFFSET(0xDFE3230)
#define DBIAFBMMBBA_NIMGIHDAANL_OFFSET UNITYSDK_OFFSET(0xDFE2DA0)
#define DBIAFBMMBBA_OFLIBLPPIEH_OFFSET UNITYSDK_OFFSET(0xDFE2D40)
#define DBIAFBMMBBA_PNDFAONMJOL_OFFSET UNITYSDK_OFFSET(0xDFE3070)
#define DBIAFBMMBBA_REMOVE_HANDLEGETTARGETREACHEDDURATION_OFFSET UNITYSDK_OFFSET(0xDFE25C0)
#define DBIAFBMMBBA_REMOVE_HANDLEGETTARGETREACHINGDURATION_OFFSET UNITYSDK_OFFSET(0xDFE2500)
#define DBIAFBMMBBA_REMOVE_HANDLEPLAYTARGETREACHING_OFFSET UNITYSDK_OFFSET(0xDFE26A0)
#define DBIAFBMMBBA_SET_RADAR_OFFSET UNITYSDK_OFFSET(0xDFE2490)
#define DBIAFBMMBBA_SET_TARGET_OFFSET UNITYSDK_OFFSET(0xDFE2470)
#define DBIAFBMMBBA___CREATESNAPSHOT_B__31_0_OFFSET UNITYSDK_OFFSET(0xDFE3300)

	class DBIAFBMMBBA : public ::System::Object
	{
	public:
		::FCNLPLHOACB* JOKBAPFCJFM; // 0x10
		::EBHGKOEPPJI* BJCHCAIMLFE; // 0x18
		::RPG::Client::MechCraft::ViewModel::MechCraftCraftProgressAttrRadarViewModel* _Radar_k__BackingField; // 0x20
		::DBIAFBMMBBA_JJJAFCAJPNC* HandlePlayTargetReaching; // 0x28
		::System::Func_1<::System::Single>* HandleGetTargetReachingDuration; // 0x30
		::IOJNNBAILBC* _Target_k__BackingField; // 0x38
		::DCAJGFPPCDM* ELJHDJJEOEK; // 0x40
		::System::Func_1<::System::Single>* HandleGetTargetReachedDuration; // 0x48
		::CBJILMHOMGP* CKFENALECAO; // 0x50
		::System::Void _ctor(::FCNLPLHOACB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCNLPLHOACB*))((::PBYTE)hIl2Cpp + DBIAFBMMBBA_CTOR_OFFSET))(this, a1);
		}

		::IOJNNBAILBC* get_Target()
		{
			return ((::IOJNNBAILBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBIAFBMMBBA_GET_TARGET_OFFSET))(this);
		}

		::System::Void set_Target(::IOJNNBAILBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOJNNBAILBC*))((::PBYTE)hIl2Cpp + DBIAFBMMBBA_SET_TARGET_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftCraftProgressAttrRadarViewModel* get_Radar()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftCraftProgressAttrRadarViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBIAFBMMBBA_GET_RADAR_OFFSET))(this);
		}

		::System::Void set_Radar(::RPG::Client::MechCraft::ViewModel::MechCraftCraftProgressAttrRadarViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftCraftProgressAttrRadarViewModel*))((::PBYTE)hIl2Cpp + DBIAFBMMBBA_SET_RADAR_OFFSET))(this, a1);
		}

		::System::Void add_HandleGetTargetReachingDuration(::System::Func_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Single>*))((::PBYTE)hIl2Cpp + DBIAFBMMBBA_ADD_HANDLEGETTARGETREACHINGDURATION_OFFSET))(this, a1);
		}

		::System::Void remove_HandleGetTargetReachingDuration(::System::Func_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Single>*))((::PBYTE)hIl2Cpp + DBIAFBMMBBA_REMOVE_HANDLEGETTARGETREACHINGDURATION_OFFSET))(this, a1);
		}

		::System::Void add_HandleGetTargetReachedDuration(::System::Func_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Single>*))((::PBYTE)hIl2Cpp + DBIAFBMMBBA_ADD_HANDLEGETTARGETREACHEDDURATION_OFFSET))(this, a1);
		}

		::System::Void remove_HandleGetTargetReachedDuration(::System::Func_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Single>*))((::PBYTE)hIl2Cpp + DBIAFBMMBBA_REMOVE_HANDLEGETTARGETREACHEDDURATION_OFFSET))(this, a1);
		}

		::System::Void add_HandlePlayTargetReaching(::DBIAFBMMBBA_JJJAFCAJPNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBIAFBMMBBA_JJJAFCAJPNC*))((::PBYTE)hIl2Cpp + DBIAFBMMBBA_ADD_HANDLEPLAYTARGETREACHING_OFFSET))(this, a1);
		}

		::System::Void remove_HandlePlayTargetReaching(::DBIAFBMMBBA_JJJAFCAJPNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBIAFBMMBBA_JJJAFCAJPNC*))((::PBYTE)hIl2Cpp + DBIAFBMMBBA_REMOVE_HANDLEPLAYTARGETREACHING_OFFSET))(this, a1);
		}

		::CBJILMHOMGP* CKKLPAMJFIC()
		{
			return ((::CBJILMHOMGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBIAFBMMBBA_CKKLPAMJFIC_OFFSET))(this);
		}

		::System::Void DLBJJJAAPAM(::IAJGGEMFOMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAJGGEMFOMB*))((::PBYTE)hIl2Cpp + DBIAFBMMBBA_DLBJJJAAPAM_OFFSET))(this, a1);
		}

		::System::Void DLGBCHNHKKJ(::IAJGGEMFOMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAJGGEMFOMB*))((::PBYTE)hIl2Cpp + DBIAFBMMBBA_DLGBCHNHKKJ_OFFSET))(this, a1);
		}

		::System::Void DABIFANLIFC(::IAJGGEMFOMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAJGGEMFOMB*))((::PBYTE)hIl2Cpp + DBIAFBMMBBA_DABIFANLIFC_OFFSET))(this, a1);
		}

		::System::Void OFLIBLPPIEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBIAFBMMBBA_OFLIBLPPIEH_OFFSET))(this);
		}

		::System::Void NIMGIHDAANL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBIAFBMMBBA_NIMGIHDAANL_OFFSET))(this);
		}

		::DCAJGFPPCDM_ICDHMCOAAFA* GCMKLJMJACF()
		{
			return ((::DCAJGFPPCDM_ICDHMCOAAFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBIAFBMMBBA_GCMKLJMJACF_OFFSET))(this);
		}

		::System::Void KHFAFNJIPJM(::HEKHCLACHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEKHCLACHJE*))((::PBYTE)hIl2Cpp + DBIAFBMMBBA_KHFAFNJIPJM_OFFSET))(this, a1);
		}

		::System::Void CFIKPPDJBLN(::RPG::Client::MechCraft::MechCraftAttributeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType))((::PBYTE)hIl2Cpp + DBIAFBMMBBA_CFIKPPDJBLN_OFFSET))(this, a1);
		}

		::System::Action* LCPPIOIIICH(::RPG::Client::MechCraft::MechCraftAttributeType a1, ::IAJGGEMFOMB* a2)
		{
			return ((::System::Action*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType, ::IAJGGEMFOMB*))((::PBYTE)hIl2Cpp + DBIAFBMMBBA_LCPPIOIIICH_OFFSET))(this, a1, a2);
		}

		::System::Void GIDLPMHJBLE(::RPG::Client::MechCraft::MechCraftAttributeType a1, ::HEKHCLACHJE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType, ::HEKHCLACHJE*))((::PBYTE)hIl2Cpp + DBIAFBMMBBA_GIDLPMHJBLE_OFFSET))(this, a1, a2);
		}

		::System::Void PNDFAONMJOL(::RPG::Client::MechCraft::MechCraftAttributeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType))((::PBYTE)hIl2Cpp + DBIAFBMMBBA_PNDFAONMJOL_OFFSET))(this, a1);
		}

		::System::Void DILILNKELLA(::HEKHCLACHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEKHCLACHJE*))((::PBYTE)hIl2Cpp + DBIAFBMMBBA_DILILNKELLA_OFFSET))(this, a1);
		}

		::System::Single CPOEBALMAHJ(::RPG::Client::MechCraft::ViewModel::CraftProgressAttrPipeline::MechCraftPerfUnitType a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::CraftProgressAttrPipeline::MechCraftPerfUnitType))((::PBYTE)hIl2Cpp + DBIAFBMMBBA_CPOEBALMAHJ_OFFSET))(this, a1);
		}

		::System::Action* MACIPFCFDNE(::MBPKHMAJLGK* a1, ::GPJENJKHNCN* a2)
		{
			return ((::System::Action*(*)(::PVOID, ::MBPKHMAJLGK*, ::GPJENJKHNCN*))((::PBYTE)hIl2Cpp + DBIAFBMMBBA_MACIPFCFDNE_OFFSET))(this, a1, a2);
		}

		::System::Boolean __CreateSnapshot_b__31_0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + DBIAFBMMBBA___CREATESNAPSHOT_B__31_0_OFFSET))(this, a1);
		}

	};
