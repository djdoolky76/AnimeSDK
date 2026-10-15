#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPGTools::LDWhiteBox { class WhiteBoxConnector; }
namespace RPGTools::LDWhiteBox { class WhiteBoxPath; }
namespace RPGTools::LDWhiteBox { class WhiteBoxRegion; }
namespace RPGTools::LDWhiteBox { class WhiteBoxRouteNode; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define ILEJNCNIMDE_ADD_CHANGED_OFFSET UNITYSDK_OFFSET(0x164ADCA0)
#define ILEJNCNIMDE_BKJGMFOKKKN_1_OFFSET UNITYSDK_OFFSET(0x164AE7A0)
#define ILEJNCNIMDE_BKJGMFOKKKN_2_OFFSET UNITYSDK_OFFSET(0x164AE960)
#define ILEJNCNIMDE_BKJGMFOKKKN_3_OFFSET UNITYSDK_OFFSET(0x164AEB20)
#define ILEJNCNIMDE_BKJGMFOKKKN_OFFSET UNITYSDK_OFFSET(0x164AE410)
#define ILEJNCNIMDE_CCTOR_OFFSET UNITYSDK_OFFSET(0x164AF650)
#define ILEJNCNIMDE_CGMCOJBGGAI_OFFSET UNITYSDK_OFFSET(0x164AE2D0)
#define ILEJNCNIMDE_CODCPIAPGOE_OFFSET UNITYSDK_OFFSET(0x164ADF20)
#define ILEJNCNIMDE_DBOCNHDMILL_OFFSET UNITYSDK_OFFSET(0x164AEEE0)
#define ILEJNCNIMDE_GEGBLIHFCBH_OFFSET UNITYSDK_OFFSET(0x164ADEC0)
#define ILEJNCNIMDE_GGGDECCEBGP_OFFSET UNITYSDK_OFFSET(0x164AE230)
#define ILEJNCNIMDE_GNCJAGHKEPO_1_OFFSET UNITYSDK_OFFSET(0x164AE8A0)
#define ILEJNCNIMDE_GNCJAGHKEPO_2_OFFSET UNITYSDK_OFFSET(0x164AEA60)
#define ILEJNCNIMDE_GNCJAGHKEPO_3_OFFSET UNITYSDK_OFFSET(0x164AEC20)
#define ILEJNCNIMDE_GNCJAGHKEPO_OFFSET UNITYSDK_OFFSET(0x164AE510)
#define ILEJNCNIMDE_GNNPFBBMFLA_OFFSET UNITYSDK_OFFSET(0x164ADFE0)
#define ILEJNCNIMDE_HEOBFABJCPB_OFFSET UNITYSDK_OFFSET(0x164AF4B0)
#define ILEJNCNIMDE_HLFCKAJEBHD_OFFSET UNITYSDK_OFFSET(0x164ADF80)
#define ILEJNCNIMDE_LAEEDGPGDBF_OFFSET UNITYSDK_OFFSET(0x164AE370)
#define ILEJNCNIMDE_LBODBMDDLGH_OFFSET UNITYSDK_OFFSET(0x164ADE60)
#define ILEJNCNIMDE_LINGIKJCILM_OFFSET UNITYSDK_OFFSET(0x164AE5D0)
#define ILEJNCNIMDE_MBEFMDCFIGJ_OFFSET UNITYSDK_OFFSET(0x164AF080)
#define ILEJNCNIMDE_MKCAPIEIOOE_OFFSET UNITYSDK_OFFSET(0x164AE190)
#define ILEJNCNIMDE_OCJJCEOMHNE_OFFSET UNITYSDK_OFFSET(0x164AF2D0)
#define ILEJNCNIMDE_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x164AECD0)
#define ILEJNCNIMDE_REMOVE_CHANGED_OFFSET UNITYSDK_OFFSET(0x164ADD80)

	class ILEJNCNIMDE : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::RPGTools::LDWhiteBox::WhiteBoxRouteNode*>** StaticGet_CPFIGFNIGBD()
		{
			return (::System::Collections::Generic::HashSet_1<::RPGTools::LDWhiteBox::WhiteBoxRouteNode*>**)UnitySDK::FromName("", "ILEJNCNIMDE")->GetStaticField(0x65BC0);
		}

		static ::System::Collections::Generic::HashSet_1<::RPGTools::LDWhiteBox::WhiteBoxRegion*>** StaticGet_EGGKMANCCCF()
		{
			return (::System::Collections::Generic::HashSet_1<::RPGTools::LDWhiteBox::WhiteBoxRegion*>**)UnitySDK::FromName("", "ILEJNCNIMDE")->GetStaticField(0x65BC8);
		}

		static ::System::Action** StaticGet_Changed()
		{
			return (::System::Action**)UnitySDK::FromName("", "ILEJNCNIMDE")->GetStaticField(0x65BD0);
		}

		static ::System::Collections::Generic::HashSet_1<::RPGTools::LDWhiteBox::WhiteBoxPath*>** StaticGet_HPELNGDMFON()
		{
			return (::System::Collections::Generic::HashSet_1<::RPGTools::LDWhiteBox::WhiteBoxPath*>**)UnitySDK::FromName("", "ILEJNCNIMDE")->GetStaticField(0x65BD8);
		}

		static ::System::Collections::Generic::HashSet_1<::RPGTools::LDWhiteBox::WhiteBoxConnector*>** StaticGet_JCDLPKIGCKN()
		{
			return (::System::Collections::Generic::HashSet_1<::RPGTools::LDWhiteBox::WhiteBoxConnector*>**)UnitySDK::FromName("", "ILEJNCNIMDE")->GetStaticField(0x65BE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILEJNCNIMDE_CCTOR_OFFSET))();
		}

		static ::System::Void add_Changed(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + ILEJNCNIMDE_ADD_CHANGED_OFFSET))(a1);
		}

		static ::System::Void remove_Changed(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + ILEJNCNIMDE_REMOVE_CHANGED_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::RPGTools::LDWhiteBox::WhiteBoxRegion*>* LBODBMDDLGH()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPGTools::LDWhiteBox::WhiteBoxRegion*>*(*)())((::PBYTE)hIl2Cpp + ILEJNCNIMDE_LBODBMDDLGH_OFFSET))();
		}

		static ::System::Collections::Generic::IEnumerable_1<::RPGTools::LDWhiteBox::WhiteBoxConnector*>* GEGBLIHFCBH()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPGTools::LDWhiteBox::WhiteBoxConnector*>*(*)())((::PBYTE)hIl2Cpp + ILEJNCNIMDE_GEGBLIHFCBH_OFFSET))();
		}

		static ::System::Collections::Generic::IEnumerable_1<::RPGTools::LDWhiteBox::WhiteBoxRouteNode*>* CODCPIAPGOE()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPGTools::LDWhiteBox::WhiteBoxRouteNode*>*(*)())((::PBYTE)hIl2Cpp + ILEJNCNIMDE_CODCPIAPGOE_OFFSET))();
		}

		static ::System::Collections::Generic::IEnumerable_1<::RPGTools::LDWhiteBox::WhiteBoxPath*>* HLFCKAJEBHD()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPGTools::LDWhiteBox::WhiteBoxPath*>*(*)())((::PBYTE)hIl2Cpp + ILEJNCNIMDE_HLFCKAJEBHD_OFFSET))();
		}

		static ::System::Boolean GNNPFBBMFLA()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ILEJNCNIMDE_GNNPFBBMFLA_OFFSET))();
		}

		static ::System::Int32 MKCAPIEIOOE()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + ILEJNCNIMDE_MKCAPIEIOOE_OFFSET))();
		}

		static ::System::Int32 GGGDECCEBGP()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + ILEJNCNIMDE_GGGDECCEBGP_OFFSET))();
		}

		static ::System::Int32 CGMCOJBGGAI()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + ILEJNCNIMDE_CGMCOJBGGAI_OFFSET))();
		}

		static ::System::Int32 LAEEDGPGDBF()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + ILEJNCNIMDE_LAEEDGPGDBF_OFFSET))();
		}

		static ::System::Void BKJGMFOKKKN(::RPGTools::LDWhiteBox::WhiteBoxRegion* a1)
		{
			return ((::System::Void(*)(::RPGTools::LDWhiteBox::WhiteBoxRegion*))((::PBYTE)hIl2Cpp + ILEJNCNIMDE_BKJGMFOKKKN_OFFSET))(a1);
		}

		static ::System::Void GNCJAGHKEPO(::RPGTools::LDWhiteBox::WhiteBoxRegion* a1)
		{
			return ((::System::Void(*)(::RPGTools::LDWhiteBox::WhiteBoxRegion*))((::PBYTE)hIl2Cpp + ILEJNCNIMDE_GNCJAGHKEPO_OFFSET))(a1);
		}

		static ::System::Void BKJGMFOKKKN_1(::RPGTools::LDWhiteBox::WhiteBoxConnector* a1)
		{
			return ((::System::Void(*)(::RPGTools::LDWhiteBox::WhiteBoxConnector*))((::PBYTE)hIl2Cpp + ILEJNCNIMDE_BKJGMFOKKKN_1_OFFSET))(a1);
		}

		static ::System::Void GNCJAGHKEPO_1(::RPGTools::LDWhiteBox::WhiteBoxConnector* a1)
		{
			return ((::System::Void(*)(::RPGTools::LDWhiteBox::WhiteBoxConnector*))((::PBYTE)hIl2Cpp + ILEJNCNIMDE_GNCJAGHKEPO_1_OFFSET))(a1);
		}

		static ::System::Void BKJGMFOKKKN_2(::RPGTools::LDWhiteBox::WhiteBoxRouteNode* a1)
		{
			return ((::System::Void(*)(::RPGTools::LDWhiteBox::WhiteBoxRouteNode*))((::PBYTE)hIl2Cpp + ILEJNCNIMDE_BKJGMFOKKKN_2_OFFSET))(a1);
		}

		static ::System::Void GNCJAGHKEPO_2(::RPGTools::LDWhiteBox::WhiteBoxRouteNode* a1)
		{
			return ((::System::Void(*)(::RPGTools::LDWhiteBox::WhiteBoxRouteNode*))((::PBYTE)hIl2Cpp + ILEJNCNIMDE_GNCJAGHKEPO_2_OFFSET))(a1);
		}

		static ::System::Void BKJGMFOKKKN_3(::RPGTools::LDWhiteBox::WhiteBoxPath* a1)
		{
			return ((::System::Void(*)(::RPGTools::LDWhiteBox::WhiteBoxPath*))((::PBYTE)hIl2Cpp + ILEJNCNIMDE_BKJGMFOKKKN_3_OFFSET))(a1);
		}

		static ::System::Void GNCJAGHKEPO_3(::RPGTools::LDWhiteBox::WhiteBoxPath* a1)
		{
			return ((::System::Void(*)(::RPGTools::LDWhiteBox::WhiteBoxPath*))((::PBYTE)hIl2Cpp + ILEJNCNIMDE_GNCJAGHKEPO_3_OFFSET))(a1);
		}

		static ::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILEJNCNIMDE_PJPFIHFAHGO_OFFSET))();
		}

		static ::System::Void LINGIKJCILM()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILEJNCNIMDE_LINGIKJCILM_OFFSET))();
		}

		static ::RPGTools::LDWhiteBox::WhiteBoxConnector* DBOCNHDMILL(::System::String* a1)
		{
			return ((::RPGTools::LDWhiteBox::WhiteBoxConnector*(*)(::System::String*))((::PBYTE)hIl2Cpp + ILEJNCNIMDE_DBOCNHDMILL_OFFSET))(a1);
		}

		static ::RPGTools::LDWhiteBox::WhiteBoxRouteNode* MBEFMDCFIGJ(::System::String* a1, ::RPGTools::LDWhiteBox::WhiteBoxRegion* a2)
		{
			return ((::RPGTools::LDWhiteBox::WhiteBoxRouteNode*(*)(::System::String*, ::RPGTools::LDWhiteBox::WhiteBoxRegion*))((::PBYTE)hIl2Cpp + ILEJNCNIMDE_MBEFMDCFIGJ_OFFSET))(a1, a2);
		}

		static ::RPGTools::LDWhiteBox::WhiteBoxPath* OCJJCEOMHNE(::System::String* a1, ::RPGTools::LDWhiteBox::WhiteBoxRegion* a2)
		{
			return ((::RPGTools::LDWhiteBox::WhiteBoxPath*(*)(::System::String*, ::RPGTools::LDWhiteBox::WhiteBoxRegion*))((::PBYTE)hIl2Cpp + ILEJNCNIMDE_OCJJCEOMHNE_OFFSET))(a1, a2);
		}

		static ::RPGTools::LDWhiteBox::WhiteBoxRegion* HEOBFABJCPB(::System::String* a1)
		{
			return ((::RPGTools::LDWhiteBox::WhiteBoxRegion*(*)(::System::String*))((::PBYTE)hIl2Cpp + ILEJNCNIMDE_HEOBFABJCPB_OFFSET))(a1);
		}

	};
