#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/MVector3.h"
class MNGNKCEOKIF_FAIBBDONLAE;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define MNGNKCEOKIF_BCGLIELBIAP_OFFSET UNITYSDK_OFFSET(0x1EF7BC80)
#define MNGNKCEOKIF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF7C020)
#define MNGNKCEOKIF_DIHICKOBOLN_OFFSET UNITYSDK_OFFSET(0x1EF7BFC0)
#define MNGNKCEOKIF_EHDFEMMFHDG_OFFSET UNITYSDK_OFFSET(0x1EF7BFB0)
#define MNGNKCEOKIF_FIBACMKNDGH_OFFSET UNITYSDK_OFFSET(0x1EF7C000)
#define MNGNKCEOKIF_GJOGGMBMFNN_OFFSET UNITYSDK_OFFSET(0x1EF7BFE0)
#define MNGNKCEOKIF_IJANIOLNMHP_OFFSET UNITYSDK_OFFSET(0x1EF7AC00)
#define MNGNKCEOKIF_JBCFPAEELBL_OFFSET UNITYSDK_OFFSET(0x1EF7BA30)
#define MNGNKCEOKIF_MLDOHFAAFBK_OFFSET UNITYSDK_OFFSET(0x1EF61F80)
#define MNGNKCEOKIF_MLKPOHLOJKI_1_OFFSET UNITYSDK_OFFSET(0x1EF7BAC0)
#define MNGNKCEOKIF_MLKPOHLOJKI_2_OFFSET UNITYSDK_OFFSET(0x1EF61290)
#define MNGNKCEOKIF_MLKPOHLOJKI_OFFSET UNITYSDK_OFFSET(0x1EF6DFC0)
#define MNGNKCEOKIF_NCCFBEHADDE_OFFSET UNITYSDK_OFFSET(0x1EF7BEA0)
#define MNGNKCEOKIF_NFKJHIFMHCB_OFFSET UNITYSDK_OFFSET(0x1EF7BAE0)
#define MNGNKCEOKIF_NNLJOKFPCLK_OFFSET UNITYSDK_OFFSET(0x1EF7BF20)
#define MNGNKCEOKIF_ODBIFDIBPDL_1_OFFSET UNITYSDK_OFFSET(0x1EF7BA80)
#define MNGNKCEOKIF_ODBIFDIBPDL_2_OFFSET UNITYSDK_OFFSET(0x1EF7BAA0)
#define MNGNKCEOKIF_ODBIFDIBPDL_OFFSET UNITYSDK_OFFSET(0x1EF67A80)
#define MNGNKCEOKIF_OIHLLEIHJIC_OFFSET UNITYSDK_OFFSET(0x1EF7BA60)
#define MNGNKCEOKIF_OKDFDOILLDA_OFFSET UNITYSDK_OFFSET(0x1EF6D780)
#define MNGNKCEOKIF_POBHKMHMOGE_OFFSET UNITYSDK_OFFSET(0x1EF7BD00)

inline static constexpr unsigned int MNGNKCEOKIF_TypeDefinitionIndex = 6267;

	class MNGNKCEOKIF : public ::System::Object
	{
	public:
		static ::RPG::MVector2* StaticGet_OLDGDAGGMGA()
		{
			return (::RPG::MVector2*)UnitySDK::FromName("", "MNGNKCEOKIF")->GetStaticField(0x8BF0);
		}

		static ::RPG::MVector2* StaticGet_NOICBCGAHLK()
		{
			return (::RPG::MVector2*)UnitySDK::FromName("", "MNGNKCEOKIF")->GetStaticField(0x8BF8);
		}

		static ::RPG::MVector2* StaticGet_NKHLMJGGKEM()
		{
			return (::RPG::MVector2*)UnitySDK::FromName("", "MNGNKCEOKIF")->GetStaticField(0x8C00);
		}

		static ::RPG::MVector2* StaticGet_CNKOEOFIKJA()
		{
			return (::RPG::MVector2*)UnitySDK::FromName("", "MNGNKCEOKIF")->GetStaticField(0x8C08);
		}

		static ::RPG::MVector2* StaticGet_KCMMGGJKOFD()
		{
			return (::RPG::MVector2*)UnitySDK::FromName("", "MNGNKCEOKIF")->GetStaticField(0x8C10);
		}

		static ::RPG::MVector2* StaticGet_DHJMJPJOOEC()
		{
			return (::RPG::MVector2*)UnitySDK::FromName("", "MNGNKCEOKIF")->GetStaticField(0x8C18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNGNKCEOKIF_CCTOR_OFFSET))();
		}

		static ::MNGNKCEOKIF_FAIBBDONLAE* IJANIOLNMHP(::System::Collections::Generic::IList_1<::RPG::MVector2>* a1, ::System::Single a2)
		{
			return ((::MNGNKCEOKIF_FAIBBDONLAE*(*)(::System::Collections::Generic::IList_1<::RPG::MVector2>*, ::System::Single))((::PBYTE)hIl2Cpp + MNGNKCEOKIF_IJANIOLNMHP_OFFSET))(a1, a2);
		}

		static ::System::Single JBCFPAEELBL(::RPG::MVector2 a1)
		{
			return ((::System::Single(*)(::RPG::MVector2))((::PBYTE)hIl2Cpp + MNGNKCEOKIF_JBCFPAEELBL_OFFSET))(a1);
		}

		static ::System::Single OIHLLEIHJIC(::RPG::MVector2 a1)
		{
			return ((::System::Single(*)(::RPG::MVector2))((::PBYTE)hIl2Cpp + MNGNKCEOKIF_OIHLLEIHJIC_OFFSET))(a1);
		}

		static ::System::Single ODBIFDIBPDL(::RPG::MVector2 a1, ::RPG::MVector2 a2)
		{
			return ((::System::Single(*)(::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + MNGNKCEOKIF_ODBIFDIBPDL_OFFSET))(a1, a2);
		}

		static ::System::Single ODBIFDIBPDL_1(::RPG::MVector2 a1, ::RPG::MVector2 a2)
		{
			return ((::System::Single(*)(::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + MNGNKCEOKIF_ODBIFDIBPDL_1_OFFSET))(a1, a2);
		}

		static ::System::Single ODBIFDIBPDL_2(::RPG::MVector2 a1, ::RPG::MVector2 a2)
		{
			return ((::System::Single(*)(::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + MNGNKCEOKIF_ODBIFDIBPDL_2_OFFSET))(a1, a2);
		}

		static ::System::Single MLKPOHLOJKI(::RPG::MVector2 a1, ::RPG::MVector2 a2)
		{
			return ((::System::Single(*)(::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + MNGNKCEOKIF_MLKPOHLOJKI_OFFSET))(a1, a2);
		}

		static ::System::Single MLKPOHLOJKI_1(::RPG::MVector2 a1, ::RPG::MVector2 a2)
		{
			return ((::System::Single(*)(::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + MNGNKCEOKIF_MLKPOHLOJKI_1_OFFSET))(a1, a2);
		}

		static ::System::Single MLKPOHLOJKI_2(::RPG::MVector2 a1, ::RPG::MVector2 a2)
		{
			return ((::System::Single(*)(::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + MNGNKCEOKIF_MLKPOHLOJKI_2_OFFSET))(a1, a2);
		}

		static ::RPG::MVector2 OKDFDOILLDA(::RPG::MVector2 a1)
		{
			return ((::RPG::MVector2(*)(::RPG::MVector2))((::PBYTE)hIl2Cpp + MNGNKCEOKIF_OKDFDOILLDA_OFFSET))(a1);
		}

		static ::System::Single NFKJHIFMHCB(::RPG::MVector2 a1, ::RPG::MVector2 a2)
		{
			return ((::System::Single(*)(::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + MNGNKCEOKIF_NFKJHIFMHCB_OFFSET))(a1, a2);
		}

		static ::System::Single POBHKMHMOGE(::RPG::MVector2 a1, ::RPG::MVector2 a2)
		{
			return ((::System::Single(*)(::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + MNGNKCEOKIF_POBHKMHMOGE_OFFSET))(a1, a2);
		}

		static ::System::Single BCGLIELBIAP(::RPG::MVector2 a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::RPG::MVector2, ::System::Single))((::PBYTE)hIl2Cpp + MNGNKCEOKIF_BCGLIELBIAP_OFFSET))(a1, a2);
		}

		static ::System::Single NCCFBEHADDE(::RPG::MVector2 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::RPG::MVector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MNGNKCEOKIF_NCCFBEHADDE_OFFSET))(a1, a2, a3);
		}

		static ::System::Single NNLJOKFPCLK(::RPG::MVector2 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::RPG::MVector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MNGNKCEOKIF_NNLJOKFPCLK_OFFSET))(a1, a2, a3);
		}

		static ::RPG::MVector2 EHDFEMMFHDG(::System::Single a1)
		{
			return ((::RPG::MVector2(*)(::System::Single))((::PBYTE)hIl2Cpp + MNGNKCEOKIF_EHDFEMMFHDG_OFFSET))(a1);
		}

		static ::RPG::MVector3 DIHICKOBOLN(::RPG::MVector2 a1)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector2))((::PBYTE)hIl2Cpp + MNGNKCEOKIF_DIHICKOBOLN_OFFSET))(a1);
		}

		static ::RPG::MVector3 GJOGGMBMFNN(::RPG::MVector2 a1)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector2))((::PBYTE)hIl2Cpp + MNGNKCEOKIF_GJOGGMBMFNN_OFFSET))(a1);
		}

		static ::RPG::MVector3 FIBACMKNDGH(::RPG::MVector2 a1)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector2))((::PBYTE)hIl2Cpp + MNGNKCEOKIF_FIBACMKNDGH_OFFSET))(a1);
		}

		static ::System::String* MLDOHFAAFBK(::RPG::MVector2 a1)
		{
			return ((::System::String*(*)(::RPG::MVector2))((::PBYTE)hIl2Cpp + MNGNKCEOKIF_MLDOHFAAFBK_OFFSET))(a1);
		}

	};
