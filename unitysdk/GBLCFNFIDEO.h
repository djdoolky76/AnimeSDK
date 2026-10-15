#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/ProjectionPlanes.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/MVector2.h"
class GBLCFNFIDEO_KNANDOFFEJF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define GBLCFNFIDEO_BCGLIELBIAP_OFFSET UNITYSDK_OFFSET(0x1DD2BD30)
#define GBLCFNFIDEO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD2CC50)
#define GBLCFNFIDEO_EHDFEMMFHDG_OFFSET UNITYSDK_OFFSET(0x1DD2C890)
#define GBLCFNFIDEO_FEGJIAPOPDH_OFFSET UNITYSDK_OFFSET(0x1DD2CAF0)
#define GBLCFNFIDEO_FJCOLNKJLBO_OFFSET UNITYSDK_OFFSET(0x1DD2CB10)
#define GBLCFNFIDEO_FNPOEJHLFFO_OFFSET UNITYSDK_OFFSET(0x1DD2C8B0)
#define GBLCFNFIDEO_FOODEFOKEMK_OFFSET UNITYSDK_OFFSET(0x1DD2CB50)
#define GBLCFNFIDEO_GNFHGLJJDBA_OFFSET UNITYSDK_OFFSET(0x1DD2C180)
#define GBLCFNFIDEO_IJANIOLNMHP_OFFSET UNITYSDK_OFFSET(0x1DD2A330)
#define GBLCFNFIDEO_JBCFPAEELBL_OFFSET UNITYSDK_OFFSET(0x1DD2BAF0)
#define GBLCFNFIDEO_JLMALFKEBAO_OFFSET UNITYSDK_OFFSET(0x1DD2CAD0)
#define GBLCFNFIDEO_LGBILFKPJKP_1_OFFSET UNITYSDK_OFFSET(0x1DD2C560)
#define GBLCFNFIDEO_LGBILFKPJKP_2_OFFSET UNITYSDK_OFFSET(0x1DD2C660)
#define GBLCFNFIDEO_LGBILFKPJKP_OFFSET UNITYSDK_OFFSET(0x1DD2C460)
#define GBLCFNFIDEO_LHPPEAKNOIE_OFFSET UNITYSDK_OFFSET(0x1DD2CB00)
#define GBLCFNFIDEO_MLDOHFAAFBK_OFFSET UNITYSDK_OFFSET(0x1DD2CB90)
#define GBLCFNFIDEO_MLKPOHLOJKI_1_OFFSET UNITYSDK_OFFSET(0x1DD2BB60)
#define GBLCFNFIDEO_MLKPOHLOJKI_2_OFFSET UNITYSDK_OFFSET(0x1DD2BB90)
#define GBLCFNFIDEO_MLKPOHLOJKI_OFFSET UNITYSDK_OFFSET(0x1DD2BA40)
#define GBLCFNFIDEO_NBGGOIFJODO_1_OFFSET UNITYSDK_OFFSET(0x1DD2C3C0)
#define GBLCFNFIDEO_NBGGOIFJODO_2_OFFSET UNITYSDK_OFFSET(0x1DD2C410)
#define GBLCFNFIDEO_NBGGOIFJODO_OFFSET UNITYSDK_OFFSET(0x1DD2BA70)
#define GBLCFNFIDEO_NCCFBEHADDE_OFFSET UNITYSDK_OFFSET(0x1DD2C760)
#define GBLCFNFIDEO_NFKJHIFMHCB_OFFSET UNITYSDK_OFFSET(0x1DD2BBC0)
#define GBLCFNFIDEO_NIOFAPHEJCM_OFFSET UNITYSDK_OFFSET(0x1DD2BF40)
#define GBLCFNFIDEO_NNLJOKFPCLK_OFFSET UNITYSDK_OFFSET(0x1DD2C7F0)
#define GBLCFNFIDEO_OIHLLEIHJIC_OFFSET UNITYSDK_OFFSET(0x1DD2BB40)
#define GBLCFNFIDEO_POBHKMHMOGE_OFFSET UNITYSDK_OFFSET(0x1DD2BDE0)
#define GBLCFNFIDEO_POBOLNFJICH_OFFSET UNITYSDK_OFFSET(0x1DD2CA50)

inline static constexpr unsigned int GBLCFNFIDEO_TypeDefinitionIndex = 6263;

	class GBLCFNFIDEO : public ::System::Object
	{
	public:
		static ::RPG::MVector3* StaticGet_NOICBCGAHLK()
		{
			return (::RPG::MVector3*)UnitySDK::FromName("", "GBLCFNFIDEO")->GetStaticField(0x9C50);
		}

		static ::RPG::MVector3* StaticGet_CNKOEOFIKJA()
		{
			return (::RPG::MVector3*)UnitySDK::FromName("", "GBLCFNFIDEO")->GetStaticField(0x9C5C);
		}

		static ::RPG::MVector3* StaticGet_DHJMJPJOOEC()
		{
			return (::RPG::MVector3*)UnitySDK::FromName("", "GBLCFNFIDEO")->GetStaticField(0x9C68);
		}

		static ::RPG::MVector3* StaticGet_KCMMGGJKOFD()
		{
			return (::RPG::MVector3*)UnitySDK::FromName("", "GBLCFNFIDEO")->GetStaticField(0x9C74);
		}

		static ::RPG::MVector3* StaticGet_OLDGDAGGMGA()
		{
			return (::RPG::MVector3*)UnitySDK::FromName("", "GBLCFNFIDEO")->GetStaticField(0x9C80);
		}

		static ::RPG::MVector3* StaticGet_DNKALADDBKN()
		{
			return (::RPG::MVector3*)UnitySDK::FromName("", "GBLCFNFIDEO")->GetStaticField(0x9C8C);
		}

		static ::RPG::MVector3* StaticGet_NKHLMJGGKEM()
		{
			return (::RPG::MVector3*)UnitySDK::FromName("", "GBLCFNFIDEO")->GetStaticField(0x9C98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBLCFNFIDEO_CCTOR_OFFSET))();
		}

		static ::GBLCFNFIDEO_KNANDOFFEJF* IJANIOLNMHP(::System::Collections::Generic::IList_1<::RPG::MVector3>* a1, ::System::Single a2)
		{
			return ((::GBLCFNFIDEO_KNANDOFFEJF*(*)(::System::Collections::Generic::IList_1<::RPG::MVector3>*, ::System::Single))((::PBYTE)hIl2Cpp + GBLCFNFIDEO_IJANIOLNMHP_OFFSET))(a1, a2);
		}

		static ::System::Single JBCFPAEELBL(::RPG::MVector3 a1)
		{
			return ((::System::Single(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + GBLCFNFIDEO_JBCFPAEELBL_OFFSET))(a1);
		}

		static ::System::Single OIHLLEIHJIC(::RPG::MVector3 a1)
		{
			return ((::System::Single(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + GBLCFNFIDEO_OIHLLEIHJIC_OFFSET))(a1);
		}

		static ::System::Single MLKPOHLOJKI(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::System::Single(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + GBLCFNFIDEO_MLKPOHLOJKI_OFFSET))(a1, a2);
		}

		static ::System::Single MLKPOHLOJKI_1(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::System::Single(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + GBLCFNFIDEO_MLKPOHLOJKI_1_OFFSET))(a1, a2);
		}

		static ::System::Single MLKPOHLOJKI_2(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::System::Single(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + GBLCFNFIDEO_MLKPOHLOJKI_2_OFFSET))(a1, a2);
		}

		static ::System::Single NFKJHIFMHCB(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::System::Single(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + GBLCFNFIDEO_NFKJHIFMHCB_OFFSET))(a1, a2);
		}

		static ::System::Single POBHKMHMOGE(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::System::Single(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + GBLCFNFIDEO_POBHKMHMOGE_OFFSET))(a1, a2);
		}

		static ::System::Single NIOFAPHEJCM(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3)
		{
			return ((::System::Single(*)(::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + GBLCFNFIDEO_NIOFAPHEJCM_OFFSET))(a1, a2, a3);
		}

		static ::System::Single GNFHGLJJDBA(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3)
		{
			return ((::System::Single(*)(::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + GBLCFNFIDEO_GNFHGLJJDBA_OFFSET))(a1, a2, a3);
		}

		static ::RPG::MVector3 NBGGOIFJODO(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + GBLCFNFIDEO_NBGGOIFJODO_OFFSET))(a1, a2);
		}

		static ::RPG::MVector3 NBGGOIFJODO_1(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + GBLCFNFIDEO_NBGGOIFJODO_1_OFFSET))(a1, a2);
		}

		static ::RPG::MVector3 NBGGOIFJODO_2(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + GBLCFNFIDEO_NBGGOIFJODO_2_OFFSET))(a1, a2);
		}

		static ::RPG::MVector3 LGBILFKPJKP(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + GBLCFNFIDEO_LGBILFKPJKP_OFFSET))(a1, a2);
		}

		static ::RPG::MVector3 LGBILFKPJKP_1(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + GBLCFNFIDEO_LGBILFKPJKP_1_OFFSET))(a1, a2);
		}

		static ::RPG::MVector3 LGBILFKPJKP_2(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + GBLCFNFIDEO_LGBILFKPJKP_2_OFFSET))(a1, a2);
		}

		static ::System::Single BCGLIELBIAP(::RPG::MVector3 a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + GBLCFNFIDEO_BCGLIELBIAP_OFFSET))(a1, a2);
		}

		static ::System::Single NCCFBEHADDE(::RPG::MVector3 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::RPG::MVector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GBLCFNFIDEO_NCCFBEHADDE_OFFSET))(a1, a2, a3);
		}

		static ::System::Single NNLJOKFPCLK(::RPG::MVector3 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::RPG::MVector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GBLCFNFIDEO_NNLJOKFPCLK_OFFSET))(a1, a2, a3);
		}

		static ::RPG::MVector3 EHDFEMMFHDG(::System::Single a1)
		{
			return ((::RPG::MVector3(*)(::System::Single))((::PBYTE)hIl2Cpp + GBLCFNFIDEO_EHDFEMMFHDG_OFFSET))(a1);
		}

		static ::System::Void FNPOEJHLFFO(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3)
		{
			return ((::System::Void(*)(::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + GBLCFNFIDEO_FNPOEJHLFFO_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean POBOLNFJICH(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::System::Boolean(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + GBLCFNFIDEO_POBOLNFJICH_OFFSET))(a1, a2);
		}

		static ::RPG::MVector2 JLMALFKEBAO(::RPG::MVector3 a1)
		{
			return ((::RPG::MVector2(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + GBLCFNFIDEO_JLMALFKEBAO_OFFSET))(a1);
		}

		static ::RPG::MVector2 FEGJIAPOPDH(::RPG::MVector3 a1)
		{
			return ((::RPG::MVector2(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + GBLCFNFIDEO_FEGJIAPOPDH_OFFSET))(a1);
		}

		static ::RPG::MVector2 LHPPEAKNOIE(::RPG::MVector3 a1)
		{
			return ((::RPG::MVector2(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + GBLCFNFIDEO_LHPPEAKNOIE_OFFSET))(a1);
		}

		static ::RPG::MVector2 FJCOLNKJLBO(::RPG::MVector3 a1, ::Dest::Math::ProjectionPlanes a2)
		{
			return ((::RPG::MVector2(*)(::RPG::MVector3, ::Dest::Math::ProjectionPlanes))((::PBYTE)hIl2Cpp + GBLCFNFIDEO_FJCOLNKJLBO_OFFSET))(a1, a2);
		}

		static ::Dest::Math::ProjectionPlanes FOODEFOKEMK(::RPG::MVector3 a1)
		{
			return ((::Dest::Math::ProjectionPlanes(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + GBLCFNFIDEO_FOODEFOKEMK_OFFSET))(a1);
		}

		static ::System::String* MLDOHFAAFBK(::RPG::MVector3 a1)
		{
			return ((::System::String*(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + GBLCFNFIDEO_MLDOHFAAFBK_OFFSET))(a1);
		}

	};
