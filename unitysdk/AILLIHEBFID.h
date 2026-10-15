#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCHICFMEANN.h"
#include "unitysdk/DMCPMMBEDOL.h"
#include "unitysdk/RPG/Client/PetMarble/PetMarbleTeamEditState.h"
#include "unitysdk/System/Object.h"
class BKLPIMMNFOC;
class DCHFGBPMKDI;
class DOIPOJANKGI;
class HNBOHDBLMBE;
class JOFCAOFIHCD;
class MBDOBECHOJA;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::GameCore { class PetMarbleGameConfig; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AILLIHEBFID_ABFMCHDDAHI_OFFSET UNITYSDK_OFFSET(0xEBB2AA0)
#define AILLIHEBFID_ACIDOJGEJIA_OFFSET UNITYSDK_OFFSET(0xEBB0D80)
#define AILLIHEBFID_ADD_SELECTEDMARBLEAPPEARANCEREQUESTED_OFFSET UNITYSDK_OFFSET(0xEBB0630)
#define AILLIHEBFID_ADD_SELFMARBLESELECTEDREQUESTED_OFFSET UNITYSDK_OFFSET(0xEBB05B0)
#define AILLIHEBFID_ADD_SELFREADYREQUESTED_OFFSET UNITYSDK_OFFSET(0xEBB0550)
#define AILLIHEBFID_AHFLLENALPP_OFFSET UNITYSDK_OFFSET(0xEBB07F0)
#define AILLIHEBFID_ALCCALOKNOC_OFFSET UNITYSDK_OFFSET(0xEBB2880)
#define AILLIHEBFID_BDEDEDHCLKE_OFFSET UNITYSDK_OFFSET(0xEBB19D0)
#define AILLIHEBFID_BGBCOAHEGPD_OFFSET UNITYSDK_OFFSET(0xEBB0F40)
#define AILLIHEBFID_CAEIEKAJPHM_OFFSET UNITYSDK_OFFSET(0xEBB0740)
#define AILLIHEBFID_CDPAHCKAPOE_OFFSET UNITYSDK_OFFSET(0xEBB0D40)
#define AILLIHEBFID_CJNFFGFJABM_OFFSET UNITYSDK_OFFSET(0xEBB1CA0)
#define AILLIHEBFID_CTOR_OFFSET UNITYSDK_OFFSET(0xEBAFC90)
#define AILLIHEBFID_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEBB2D30)
#define AILLIHEBFID_EHEPCGHLPBC_OFFSET UNITYSDK_OFFSET(0xEBB0E00)
#define AILLIHEBFID_EJFCAMIJGLB_OFFSET UNITYSDK_OFFSET(0xEBB1FB0)
#define AILLIHEBFID_FJPJANCJGPL_OFFSET UNITYSDK_OFFSET(0xEBB0ED0)
#define AILLIHEBFID_HACJNCHNOMO_OFFSET UNITYSDK_OFFSET(0xEBB09D0)
#define AILLIHEBFID_HDPOMBMJIKG_OFFSET UNITYSDK_OFFSET(0xEBB0E80)
#define AILLIHEBFID_HGHLNMNJNOC_OFFSET UNITYSDK_OFFSET(0xEBB2B90)
#define AILLIHEBFID_ICFJCALGDKD_OFFSET UNITYSDK_OFFSET(0xEBB1C40)
#define AILLIHEBFID_INHBJHGKPGP_OFFSET UNITYSDK_OFFSET(0xEBB1910)
#define AILLIHEBFID_IPIGPPNBILH_OFFSET UNITYSDK_OFFSET(0xEBB0850)
#define AILLIHEBFID_JDJEHEKMEHH_OFFSET UNITYSDK_OFFSET(0xEBB1530)
#define AILLIHEBFID_JDNBDFPHOEM_OFFSET UNITYSDK_OFFSET(0xEBB2380)
#define AILLIHEBFID_LCKCABJFHEA_OFFSET UNITYSDK_OFFSET(0xEBB0CF0)
#define AILLIHEBFID_LCNBGBKFGHA_OFFSET UNITYSDK_OFFSET(0xEBB0910)
#define AILLIHEBFID_MBCGKFGCPOG_OFFSET UNITYSDK_OFFSET(0xEBB0AE0)
#define AILLIHEBFID_NEACLNIKMHO_OFFSET UNITYSDK_OFFSET(0xEBB1790)
#define AILLIHEBFID_ODNMBCFNAEC_OFFSET UNITYSDK_OFFSET(0xEBB0690)
#define AILLIHEBFID_OJDADCNGOCG_OFFSET UNITYSDK_OFFSET(0xEBB0B20)
#define AILLIHEBFID_OOFIJECMPEG_OFFSET UNITYSDK_OFFSET(0xEBB0C60)
#define AILLIHEBFID_OPAMJJJMDPD_OFFSET UNITYSDK_OFFSET(0xEBB1A70)
#define AILLIHEBFID_OPPCOLKCJNI_OFFSET UNITYSDK_OFFSET(0xEBB1BA0)
#define AILLIHEBFID_PALHNCFHNMM_OFFSET UNITYSDK_OFFSET(0xEBB2210)
#define AILLIHEBFID_REMOVE_SELECTEDMARBLEAPPEARANCEREQUESTED_OFFSET UNITYSDK_OFFSET(0xEBB2F30)
#define AILLIHEBFID_REMOVE_SELFMARBLESELECTEDREQUESTED_OFFSET UNITYSDK_OFFSET(0xEBB2EB0)
#define AILLIHEBFID_REMOVE_SELFREADYREQUESTED_OFFSET UNITYSDK_OFFSET(0xEBB2E50)

inline static constexpr unsigned int AILLIHEBFID_TypeDefinitionIndex = 74726;

	class AILLIHEBFID : public ::System::Object
	{
	public:
		::DMCPMMBEDOL LIOMDOHHNFH; // 0x10
		::System::Action_2<::System::UInt32, ::System::UInt32>* SelectedMarbleAppearanceRequested; // 0x20
		::System::Action_1<::DMCPMMBEDOL>* BLNMMCJECEL; // 0x28
		::System::Func_1<::System::Boolean>* AFIBMAJKJDP; // 0x30
		::System::Action_3<::System::UInt32, ::System::Boolean, ::System::UInt32>* SelfMarbleSelectedRequested; // 0x38
		::System::Collections::Generic::List_1<::DCHICFMEANN>* LENPPEDOIBG; // 0x40
		::System::Action_1<::System::Boolean>* SelfReadyRequested; // 0x48
		::System::Collections::Generic::List_1<::BKLPIMMNFOC*>* JGBIIJMHNLC; // 0x50
		::DMCPMMBEDOL FABDNOAPLGL; // 0x58
		::System::Collections::Generic::List_1<::HNBOHDBLMBE*>* CMIAPIMBCJI; // 0x68
		::DCHFGBPMKDI* OFMKMFOJKFC; // 0x70
		::System::Action_1<::DMCPMMBEDOL>* NOKLEJHAHPG; // 0x78
		::System::Action* DGGJICFFMNL; // 0x80
		::System::UInt32 EICIJEBDFBF; // 0x88
		::System::UInt32 IKKHNIPGMGK; // 0x8C
		::System::Single LHLIOJPGPEP; // 0x90
		::RPG::Client::PetMarble::PetMarbleTeamEditState DLNIGFGLPLJ; // 0x94
		::System::Boolean GPLMNNALIAI; // 0x98
		::System::Boolean DLNHKFDKFEJ; // 0x99
		::System::Boolean OAMIIFMFEIE; // 0x9A
		::System::Boolean GFAMGLFOMGI; // 0x9B
		::System::Boolean ABHPFJBPAHO; // 0x9C
		::System::Byte _padding0[0x3];
		::System::Single GEONFMBMLEL; // 0xA0
		::System::Int32 OLJBMOGBPKL; // 0xA4
		::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::BKLPIMMNFOC*>* a1, ::DCHFGBPMKDI* a2, ::RPG::GameCore::PetMarbleGameConfig* a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::Func_1<::System::Boolean>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::BKLPIMMNFOC*>*, ::DCHFGBPMKDI*, ::RPG::GameCore::PetMarbleGameConfig*, ::System::UInt32, ::System::UInt32, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + AILLIHEBFID_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::UInt32 ODNMBCFNAEC(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AILLIHEBFID_ODNMBCFNAEC_OFFSET))(this, a1);
		}

		::System::Void CAEIEKAJPHM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AILLIHEBFID_CAEIEKAJPHM_OFFSET))(this, a1);
		}

		::System::Void IPIGPPNBILH(::System::UInt32 a1, ::System::Boolean a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + AILLIHEBFID_IPIGPPNBILH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LCNBGBKFGHA(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AILLIHEBFID_LCNBGBKFGHA_OFFSET))(this, a1, a2);
		}

		::System::Void HACJNCHNOMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AILLIHEBFID_HACJNCHNOMO_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::BKLPIMMNFOC*>* MBCGKFGCPOG()
		{
			return ((::System::Collections::Generic::IList_1<::BKLPIMMNFOC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AILLIHEBFID_MBCGKFGCPOG_OFFSET))(this);
		}

		::System::Single OJDADCNGOCG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AILLIHEBFID_OJDADCNGOCG_OFFSET))(this);
		}

		::RPG::Client::PetMarble::PetMarbleTeamEditState LCKCABJFHEA()
		{
			return ((::RPG::Client::PetMarble::PetMarbleTeamEditState(*)(::PVOID))((::PBYTE)hIl2Cpp + AILLIHEBFID_LCKCABJFHEA_OFFSET))(this);
		}

		::System::Boolean CDPAHCKAPOE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AILLIHEBFID_CDPAHCKAPOE_OFFSET))(this);
		}

		::System::Void ACIDOJGEJIA(::System::Action_1<::DMCPMMBEDOL>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::DMCPMMBEDOL>*))((::PBYTE)hIl2Cpp + AILLIHEBFID_ACIDOJGEJIA_OFFSET))(this, a1);
		}

		::System::Void EHEPCGHLPBC(::System::Action_1<::DMCPMMBEDOL>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::DMCPMMBEDOL>*))((::PBYTE)hIl2Cpp + AILLIHEBFID_EHEPCGHLPBC_OFFSET))(this, a1);
		}

		::System::Void HDPOMBMJIKG(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AILLIHEBFID_HDPOMBMJIKG_OFFSET))(this, a1);
		}

		::System::Void FJPJANCJGPL(::DOIPOJANKGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOIPOJANKGI*))((::PBYTE)hIl2Cpp + AILLIHEBFID_FJPJANCJGPL_OFFSET))(this, a1);
		}

		::System::Void JDJEHEKMEHH(::MBDOBECHOJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBDOBECHOJA*))((::PBYTE)hIl2Cpp + AILLIHEBFID_JDJEHEKMEHH_OFFSET))(this, a1);
		}

		::System::Void INHBJHGKPGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AILLIHEBFID_INHBJHGKPGP_OFFSET))(this);
		}

		::System::Void BDEDEDHCLKE(::System::Collections::Generic::IList_1<::DCHICFMEANN>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::DCHICFMEANN>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AILLIHEBFID_BDEDEDHCLKE_OFFSET))(this, a1, a2);
		}

		::System::Void OPPCOLKCJNI(::System::Collections::Generic::IList_1<::DCHICFMEANN>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::DCHICFMEANN>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AILLIHEBFID_OPPCOLKCJNI_OFFSET))(this, a1, a2);
		}

		::System::Void NEACLNIKMHO(::RPG::Client::PetMarble::PetMarbleTeamEditState a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PetMarble::PetMarbleTeamEditState, ::System::Single))((::PBYTE)hIl2Cpp + AILLIHEBFID_NEACLNIKMHO_OFFSET))(this, a1, a2);
		}

		::System::Void ICFJCALGDKD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AILLIHEBFID_ICFJCALGDKD_OFFSET))(this, a1);
		}

		::System::Void EJFCAMIJGLB(::System::UInt32 a1, ::System::Boolean a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + AILLIHEBFID_EJFCAMIJGLB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PALHNCFHNMM(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AILLIHEBFID_PALHNCFHNMM_OFFSET))(this, a1, a2);
		}

		::System::Void CJNFFGFJABM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AILLIHEBFID_CJNFFGFJABM_OFFSET))(this);
		}

		::System::Void BGBCOAHEGPD(::Google::Protobuf::Collections::RepeatedField_1<::HNBOHDBLMBE*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::HNBOHDBLMBE*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AILLIHEBFID_BGBCOAHEGPD_OFFSET))(this, a1, a2);
		}

		::System::Boolean ALCCALOKNOC(::HNBOHDBLMBE* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HNBOHDBLMBE*, ::System::Boolean))((::PBYTE)hIl2Cpp + AILLIHEBFID_ALCCALOKNOC_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean HGHLNMNJNOC(::HNBOHDBLMBE* a1, ::HNBOHDBLMBE* a2)
		{
			return ((::System::Boolean(*)(::HNBOHDBLMBE*, ::HNBOHDBLMBE*))((::PBYTE)hIl2Cpp + AILLIHEBFID_HGHLNMNJNOC_OFFSET))(a1, a2);
		}

		::System::Collections::Generic::IList_1<::DCHICFMEANN>* ABFMCHDDAHI()
		{
			return ((::System::Collections::Generic::IList_1<::DCHICFMEANN>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AILLIHEBFID_ABFMCHDDAHI_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::DCHICFMEANN>* JDNBDFPHOEM(::Google::Protobuf::Collections::RepeatedField_1<::JOFCAOFIHCD*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::DCHICFMEANN>*(*)(::Google::Protobuf::Collections::RepeatedField_1<::JOFCAOFIHCD*>*))((::PBYTE)hIl2Cpp + AILLIHEBFID_JDNBDFPHOEM_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AILLIHEBFID_DISPOSE_OFFSET))(this);
		}

		::System::Void add_SelfReadyRequested(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + AILLIHEBFID_ADD_SELFREADYREQUESTED_OFFSET))(this, a1);
		}

		::System::Void remove_SelfReadyRequested(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + AILLIHEBFID_REMOVE_SELFREADYREQUESTED_OFFSET))(this, a1);
		}

		::System::Void add_SelfMarbleSelectedRequested(::System::Action_3<::System::UInt32, ::System::Boolean, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::UInt32, ::System::Boolean, ::System::UInt32>*))((::PBYTE)hIl2Cpp + AILLIHEBFID_ADD_SELFMARBLESELECTEDREQUESTED_OFFSET))(this, a1);
		}

		::System::Void remove_SelfMarbleSelectedRequested(::System::Action_3<::System::UInt32, ::System::Boolean, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::UInt32, ::System::Boolean, ::System::UInt32>*))((::PBYTE)hIl2Cpp + AILLIHEBFID_REMOVE_SELFMARBLESELECTEDREQUESTED_OFFSET))(this, a1);
		}

		::System::Void add_SelectedMarbleAppearanceRequested(::System::Action_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + AILLIHEBFID_ADD_SELECTEDMARBLEAPPEARANCEREQUESTED_OFFSET))(this, a1);
		}

		::System::Void remove_SelectedMarbleAppearanceRequested(::System::Action_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + AILLIHEBFID_REMOVE_SELECTEDMARBLEAPPEARANCEREQUESTED_OFFSET))(this, a1);
		}

		::System::Boolean AHFLLENALPP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AILLIHEBFID_AHFLLENALPP_OFFSET))(this);
		}

		static ::DMCPMMBEDOL OPAMJJJMDPD(::System::Collections::Generic::IList_1<::DCHICFMEANN>* a1, ::System::Boolean a2)
		{
			return ((::DMCPMMBEDOL(*)(::System::Collections::Generic::IList_1<::DCHICFMEANN>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AILLIHEBFID_OPAMJJJMDPD_OFFSET))(a1, a2);
		}

		static ::System::Single OOFIJECMPEG()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + AILLIHEBFID_OOFIJECMPEG_OFFSET))();
		}

	};
