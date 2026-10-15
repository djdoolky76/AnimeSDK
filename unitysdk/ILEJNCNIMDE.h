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

#define ILEJNCNIMDE_ADD_CHANGED_OFFSET UNITYSDK_OFFSET(0x1649FD80)
#define ILEJNCNIMDE_BKJGMFOKKKN_1_OFFSET UNITYSDK_OFFSET(0x164A0880)
#define ILEJNCNIMDE_BKJGMFOKKKN_2_OFFSET UNITYSDK_OFFSET(0x164A0A40)
#define ILEJNCNIMDE_BKJGMFOKKKN_3_OFFSET UNITYSDK_OFFSET(0x164A0C00)
#define ILEJNCNIMDE_BKJGMFOKKKN_OFFSET UNITYSDK_OFFSET(0x164A04F0)
#define ILEJNCNIMDE_CCTOR_OFFSET UNITYSDK_OFFSET(0x164A1730)
#define ILEJNCNIMDE_CGMCOJBGGAI_OFFSET UNITYSDK_OFFSET(0x164A03B0)
#define ILEJNCNIMDE_CODCPIAPGOE_OFFSET UNITYSDK_OFFSET(0x164A0000)
#define ILEJNCNIMDE_DBOCNHDMILL_OFFSET UNITYSDK_OFFSET(0x164A0FC0)
#define ILEJNCNIMDE_GEGBLIHFCBH_OFFSET UNITYSDK_OFFSET(0x1649FFA0)
#define ILEJNCNIMDE_GGGDECCEBGP_OFFSET UNITYSDK_OFFSET(0x164A0310)
#define ILEJNCNIMDE_GNCJAGHKEPO_1_OFFSET UNITYSDK_OFFSET(0x164A0980)
#define ILEJNCNIMDE_GNCJAGHKEPO_2_OFFSET UNITYSDK_OFFSET(0x164A0B40)
#define ILEJNCNIMDE_GNCJAGHKEPO_3_OFFSET UNITYSDK_OFFSET(0x164A0D00)
#define ILEJNCNIMDE_GNCJAGHKEPO_OFFSET UNITYSDK_OFFSET(0x164A05F0)
#define ILEJNCNIMDE_GNNPFBBMFLA_OFFSET UNITYSDK_OFFSET(0x164A00C0)
#define ILEJNCNIMDE_HEOBFABJCPB_OFFSET UNITYSDK_OFFSET(0x164A1590)
#define ILEJNCNIMDE_HLFCKAJEBHD_OFFSET UNITYSDK_OFFSET(0x164A0060)
#define ILEJNCNIMDE_LAEEDGPGDBF_OFFSET UNITYSDK_OFFSET(0x164A0450)
#define ILEJNCNIMDE_LBODBMDDLGH_OFFSET UNITYSDK_OFFSET(0x1649FF40)
#define ILEJNCNIMDE_LINGIKJCILM_OFFSET UNITYSDK_OFFSET(0x164A06B0)
#define ILEJNCNIMDE_MBEFMDCFIGJ_OFFSET UNITYSDK_OFFSET(0x164A1160)
#define ILEJNCNIMDE_MKCAPIEIOOE_OFFSET UNITYSDK_OFFSET(0x164A0270)
#define ILEJNCNIMDE_OCJJCEOMHNE_OFFSET UNITYSDK_OFFSET(0x164A13B0)
#define ILEJNCNIMDE_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x164A0DB0)
#define ILEJNCNIMDE_REMOVE_CHANGED_OFFSET UNITYSDK_OFFSET(0x1649FE60)

inline static constexpr unsigned int ILEJNCNIMDE_TypeDefinitionIndex = 48963;

	class ILEJNCNIMDE : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::RPGTools::LDWhiteBox::WhiteBoxRouteNode*>** StaticGet_CPFIGFNIGBD()
		{
			return (::System::Collections::Generic::HashSet_1<::RPGTools::LDWhiteBox::WhiteBoxRouteNode*>**)UnitySDK::FromName("", "ILEJNCNIMDE")->GetStaticField(0x64F00);
		}

		static ::System::Collections::Generic::HashSet_1<::RPGTools::LDWhiteBox::WhiteBoxRegion*>** StaticGet_EGGKMANCCCF()
		{
			return (::System::Collections::Generic::HashSet_1<::RPGTools::LDWhiteBox::WhiteBoxRegion*>**)UnitySDK::FromName("", "ILEJNCNIMDE")->GetStaticField(0x64F08);
		}

		static ::System::Action** StaticGet_Changed()
		{
			return (::System::Action**)UnitySDK::FromName("", "ILEJNCNIMDE")->GetStaticField(0x64F10);
		}

		static ::System::Collections::Generic::HashSet_1<::RPGTools::LDWhiteBox::WhiteBoxPath*>** StaticGet_HPELNGDMFON()
		{
			return (::System::Collections::Generic::HashSet_1<::RPGTools::LDWhiteBox::WhiteBoxPath*>**)UnitySDK::FromName("", "ILEJNCNIMDE")->GetStaticField(0x64F18);
		}

		static ::System::Collections::Generic::HashSet_1<::RPGTools::LDWhiteBox::WhiteBoxConnector*>** StaticGet_JCDLPKIGCKN()
		{
			return (::System::Collections::Generic::HashSet_1<::RPGTools::LDWhiteBox::WhiteBoxConnector*>**)UnitySDK::FromName("", "ILEJNCNIMDE")->GetStaticField(0x64F20);
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
