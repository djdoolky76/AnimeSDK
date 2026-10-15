#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/ViewModel/CraftProgressAttrPipeline/MechCraftPerfUnitType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
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

#define DBIAFBMMBBA_ADD_HANDLEGETTARGETREACHEDDURATION_OFFSET UNITYSDK_OFFSET(0xDFD8890)
#define DBIAFBMMBBA_ADD_HANDLEGETTARGETREACHINGDURATION_OFFSET UNITYSDK_OFFSET(0xDFD87D0)
#define DBIAFBMMBBA_ADD_HANDLEPLAYTARGETREACHING_OFFSET UNITYSDK_OFFSET(0xDFD8950)
#define DBIAFBMMBBA_CFIKPPDJBLN_OFFSET UNITYSDK_OFFSET(0xDFD9190)
#define DBIAFBMMBBA_CKKLPAMJFIC_OFFSET UNITYSDK_OFFSET(0xDFD8A50)
#define DBIAFBMMBBA_CPOEBALMAHJ_OFFSET UNITYSDK_OFFSET(0xDFD9450)
#define DBIAFBMMBBA_CTOR_OFFSET UNITYSDK_OFFSET(0xDFD8B30)
#define DBIAFBMMBBA_DABIFANLIFC_OFFSET UNITYSDK_OFFSET(0xDFD9000)
#define DBIAFBMMBBA_DILILNKELLA_OFFSET UNITYSDK_OFFSET(0xDFD93F0)
#define DBIAFBMMBBA_DLBJJJAAPAM_OFFSET UNITYSDK_OFFSET(0xDFD8F20)
#define DBIAFBMMBBA_DLGBCHNHKKJ_OFFSET UNITYSDK_OFFSET(0xDFD8F90)
#define DBIAFBMMBBA_GCMKLJMJACF_OFFSET UNITYSDK_OFFSET(0xDFD8C80)
#define DBIAFBMMBBA_GET_RADAR_OFFSET UNITYSDK_OFFSET(0xDFD87B0)
#define DBIAFBMMBBA_GET_TARGET_OFFSET UNITYSDK_OFFSET(0xDFD8790)
#define DBIAFBMMBBA_GIDLPMHJBLE_OFFSET UNITYSDK_OFFSET(0xDFD9320)
#define DBIAFBMMBBA_KHFAFNJIPJM_OFFSET UNITYSDK_OFFSET(0xDFD9130)
#define DBIAFBMMBBA_LCPPIOIIICH_OFFSET UNITYSDK_OFFSET(0xDFD9200)
#define DBIAFBMMBBA_MACIPFCFDNE_OFFSET UNITYSDK_OFFSET(0xDFD9560)
#define DBIAFBMMBBA_NIMGIHDAANL_OFFSET UNITYSDK_OFFSET(0xDFD90D0)
#define DBIAFBMMBBA_OFLIBLPPIEH_OFFSET UNITYSDK_OFFSET(0xDFD9070)
#define DBIAFBMMBBA_PNDFAONMJOL_OFFSET UNITYSDK_OFFSET(0xDFD93A0)
#define DBIAFBMMBBA_REMOVE_HANDLEGETTARGETREACHEDDURATION_OFFSET UNITYSDK_OFFSET(0xDFD88F0)
#define DBIAFBMMBBA_REMOVE_HANDLEGETTARGETREACHINGDURATION_OFFSET UNITYSDK_OFFSET(0xDFD8830)
#define DBIAFBMMBBA_REMOVE_HANDLEPLAYTARGETREACHING_OFFSET UNITYSDK_OFFSET(0xDFD89D0)
#define DBIAFBMMBBA_SET_RADAR_OFFSET UNITYSDK_OFFSET(0xDFD87C0)
#define DBIAFBMMBBA_SET_TARGET_OFFSET UNITYSDK_OFFSET(0xDFD87A0)
#define DBIAFBMMBBA___CREATESNAPSHOT_B__31_0_OFFSET UNITYSDK_OFFSET(0xDFD9630)

inline static constexpr unsigned int DBIAFBMMBBA_TypeDefinitionIndex = 79551;

	class DBIAFBMMBBA : public ::System::Object
	{
	public:
		::CBJILMHOMGP* CKFENALECAO; // 0x10
		::DBIAFBMMBBA_JJJAFCAJPNC* HandlePlayTargetReaching; // 0x18
		::FCNLPLHOACB* JOKBAPFCJFM; // 0x20
		::IOJNNBAILBC* _Target_k__BackingField; // 0x28
		::RPG::Client::MechCraft::ViewModel::MechCraftCraftProgressAttrRadarViewModel* _Radar_k__BackingField; // 0x30
		::System::Func_1<::System::Single>* HandleGetTargetReachingDuration; // 0x38
		::System::Func_1<::System::Single>* HandleGetTargetReachedDuration; // 0x40
		::EBHGKOEPPJI* BJCHCAIMLFE; // 0x48
		::DCAJGFPPCDM* ELJHDJJEOEK; // 0x50
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

		::System::Boolean __CreateSnapshot_b__31_0(::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>))((::PBYTE)hIl2Cpp + DBIAFBMMBBA___CREATESNAPSHOT_B__31_0_OFFSET))(this, a1);
		}

	};
