#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/CustomPropMoveType.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/EntityTag.h"
#include "unitysdk/RPG/GameCore/FiveDimCameraPriority.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class EFHNDMENDHI;
class EFODGECFLLC;
class EHOFEPBAHNK;
class EKJAOIOPBIO;
class GAFMLDLBCEB;
class HDIAALCMDNG;
class HIOEAKHGILF;
class INMMPMDELKE;
class KHPOKIKCOFO;
class NGFHCJIAOLH;
class NNHECPOCLJI;
class OCPOIDCNJDA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GCHHPCDKEKE_AEBBCACMMHL_OFFSET UNITYSDK_OFFSET(0x1CA817F0)
#define GCHHPCDKEKE_BFAFCCEKAJA_OFFSET UNITYSDK_OFFSET(0x1CA82880)
#define GCHHPCDKEKE_BHCHEMGLOFL_OFFSET UNITYSDK_OFFSET(0x1CA81DB0)
#define GCHHPCDKEKE_CADBJPENKLC_OFFSET UNITYSDK_OFFSET(0x1CA80AC0)
#define GCHHPCDKEKE_CEKPKJCCHCD_OFFSET UNITYSDK_OFFSET(0x1CA82670)
#define GCHHPCDKEKE_CFLONPCJACA_OFFSET UNITYSDK_OFFSET(0x1CA81B80)
#define GCHHPCDKEKE_DFLIHCEAGEA_OFFSET UNITYSDK_OFFSET(0x1CA80DD0)
#define GCHHPCDKEKE_EILKNKAMKBB_OFFSET UNITYSDK_OFFSET(0x1CA830A0)
#define GCHHPCDKEKE_EIPACLNOFIG_OFFSET UNITYSDK_OFFSET(0x1CA82E00)
#define GCHHPCDKEKE_EPKKDNPMBLF_OFFSET UNITYSDK_OFFSET(0x1CA80A10)
#define GCHHPCDKEKE_FCKEHPFCIME_OFFSET UNITYSDK_OFFSET(0x1CA81510)
#define GCHHPCDKEKE_FEKFKJGDHHI_OFFSET UNITYSDK_OFFSET(0x1CA81710)
#define GCHHPCDKEKE_FEMEHGOJLCI_1_OFFSET UNITYSDK_OFFSET(0x1CA82BD0)
#define GCHHPCDKEKE_FEMEHGOJLCI_OFFSET UNITYSDK_OFFSET(0x1CA82AF0)
#define GCHHPCDKEKE_FJHJKFHJALA_OFFSET UNITYSDK_OFFSET(0x1CA82720)
#define GCHHPCDKEKE_FPNECNCJEOJ_OFFSET UNITYSDK_OFFSET(0x1CA81910)
#define GCHHPCDKEKE_GJCFIEABCFK_OFFSET UNITYSDK_OFFSET(0x1CA81FE0)
#define GCHHPCDKEKE_GJFIBPGEKHP_OFFSET UNITYSDK_OFFSET(0x1CA82280)
#define GCHHPCDKEKE_GLKJJGBHMMD_OFFSET UNITYSDK_OFFSET(0x1CA82FC0)
#define GCHHPCDKEKE_GMDBOGCBDBH_OFFSET UNITYSDK_OFFSET(0x1CA81070)
#define GCHHPCDKEKE_GOKNBHDEEDF_OFFSET UNITYSDK_OFFSET(0x1CA80CF0)
#define GCHHPCDKEKE_HBACENNPNBI_1_OFFSET UNITYSDK_OFFSET(0x1CA81270)
#define GCHHPCDKEKE_HBACENNPNBI_2_OFFSET UNITYSDK_OFFSET(0x1CA813C0)
#define GCHHPCDKEKE_HBACENNPNBI_OFFSET UNITYSDK_OFFSET(0x1CA81150)
#define GCHHPCDKEKE_HKAGILBJMED_1_OFFSET UNITYSDK_OFFSET(0x1CA82A10)
#define GCHHPCDKEKE_HKAGILBJMED_OFFSET UNITYSDK_OFFSET(0x1CA82960)
#define GCHHPCDKEKE_IEFCJLDJKBC_1_OFFSET UNITYSDK_OFFSET(0x1CA80930)
#define GCHHPCDKEKE_IEFCJLDJKBC_OFFSET UNITYSDK_OFFSET(0x1CA80880)
#define GCHHPCDKEKE_IHHBHDLLMGO_OFFSET UNITYSDK_OFFSET(0x1CA81A30)
#define GCHHPCDKEKE_ILHJDNAMNPG_OFFSET UNITYSDK_OFFSET(0x1CA827D0)
#define GCHHPCDKEKE_IMJAOIJCPDG_OFFSET UNITYSDK_OFFSET(0x1CA80EB0)
#define GCHHPCDKEKE_KBMLNMNFIIM_OFFSET UNITYSDK_OFFSET(0x1CA81660)
#define GCHHPCDKEKE_KIKOCMMFDLC_1_OFFSET UNITYSDK_OFFSET(0x1CA6A1D0)
#define GCHHPCDKEKE_KIKOCMMFDLC_2_OFFSET UNITYSDK_OFFSET(0x1CA6A7F0)
#define GCHHPCDKEKE_KIKOCMMFDLC_3_OFFSET UNITYSDK_OFFSET(0x1CA6B380)
#define GCHHPCDKEKE_KIKOCMMFDLC_4_OFFSET UNITYSDK_OFFSET(0x1CA6B580)
#define GCHHPCDKEKE_KIKOCMMFDLC_5_OFFSET UNITYSDK_OFFSET(0x1CA6BA40)
#define GCHHPCDKEKE_KIKOCMMFDLC_OFFSET UNITYSDK_OFFSET(0x1CA689F0)
#define GCHHPCDKEKE_LBHHMLGCOPN_OFFSET UNITYSDK_OFFSET(0x1CA831C0)
#define GCHHPCDKEKE_LEDJLAPDIOC_OFFSET UNITYSDK_OFFSET(0x1CA82CB0)
#define GCHHPCDKEKE_MCJGKOCNBNC_OFFSET UNITYSDK_OFFSET(0x1CA82520)
#define GCHHPCDKEKE_MLKJLFIDOMI_OFFSET UNITYSDK_OFFSET(0x1CA80C10)
#define GCHHPCDKEKE_NKEIPCAMHGE_OFFSET UNITYSDK_OFFSET(0x1CA81E90)
#define GCHHPCDKEKE_NKJKNJEFJEE_OFFSET UNITYSDK_OFFSET(0x1CA82EE0)
#define GCHHPCDKEKE_NLCECBIOHKM_OFFSET UNITYSDK_OFFSET(0x1CA82130)
#define GCHHPCDKEKE_NOICAGIIMPB_OFFSET UNITYSDK_OFFSET(0x1CA81CD0)
#define GCHHPCDKEKE_OBGINDIKBED_OFFSET UNITYSDK_OFFSET(0x1CA823D0)
#define GCHHPCDKEKE_OODIEBHJDFM_OFFSET UNITYSDK_OFFSET(0x1CA807D0)
#define GCHHPCDKEKE_PCFHGJNMAFP_OFFSET UNITYSDK_OFFSET(0x1CA80F90)

inline static constexpr unsigned int GCHHPCDKEKE_TypeDefinitionIndex = 42830;

	class GCHHPCDKEKE : public ::System::Object
	{
	public:
		static ::System::Void KIKOCMMFDLC(::EFODGECFLLC* a1)
		{
			return ((::System::Void(*)(::EFODGECFLLC*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_KIKOCMMFDLC_OFFSET))(a1);
		}

		static ::System::Void KIKOCMMFDLC_1(::GAFMLDLBCEB* a1)
		{
			return ((::System::Void(*)(::GAFMLDLBCEB*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_KIKOCMMFDLC_1_OFFSET))(a1);
		}

		static ::System::Void KIKOCMMFDLC_2(::EHOFEPBAHNK* a1)
		{
			return ((::System::Void(*)(::EHOFEPBAHNK*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_KIKOCMMFDLC_2_OFFSET))(a1);
		}

		static ::System::Void KIKOCMMFDLC_3(::HDIAALCMDNG* a1)
		{
			return ((::System::Void(*)(::HDIAALCMDNG*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_KIKOCMMFDLC_3_OFFSET))(a1);
		}

		static ::System::Void KIKOCMMFDLC_4(::NNHECPOCLJI* a1)
		{
			return ((::System::Void(*)(::NNHECPOCLJI*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_KIKOCMMFDLC_4_OFFSET))(a1);
		}

		static ::System::Void KIKOCMMFDLC_5(::EKJAOIOPBIO* a1)
		{
			return ((::System::Void(*)(::EKJAOIOPBIO*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_KIKOCMMFDLC_5_OFFSET))(a1);
		}

		static ::System::Collections::Generic::HashSet_1<::HIOEAKHGILF*>* OODIEBHJDFM(::EFODGECFLLC* a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::HIOEAKHGILF*>*(*)(::EFODGECFLLC*, ::System::Int32))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_OODIEBHJDFM_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::HashSet_1<::HIOEAKHGILF*>* IEFCJLDJKBC(::EFODGECFLLC* a1, ::RPG::GameCore::FiveDimCameraPriority a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::HIOEAKHGILF*>*(*)(::EFODGECFLLC*, ::RPG::GameCore::FiveDimCameraPriority))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_IEFCJLDJKBC_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::HashSet_1<::INMMPMDELKE*>* IEFCJLDJKBC_1(::GAFMLDLBCEB* a1, ::RPG::GameCore::FiveDimCameraPriority a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::INMMPMDELKE*>*(*)(::GAFMLDLBCEB*, ::RPG::GameCore::FiveDimCameraPriority))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_IEFCJLDJKBC_1_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::HashSet_1<::HIOEAKHGILF*>* EPKKDNPMBLF(::EFODGECFLLC* a1, ::RPG::Client::LittleGame::FiveDim::CustomPropMoveType a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::HIOEAKHGILF*>*(*)(::EFODGECFLLC*, ::RPG::Client::LittleGame::FiveDim::CustomPropMoveType))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_EPKKDNPMBLF_OFFSET))(a1, a2);
		}

		static ::OCPOIDCNJDA* CADBJPENKLC(::EHOFEPBAHNK* a1, ::System::UInt32 a2)
		{
			return ((::OCPOIDCNJDA*(*)(::EHOFEPBAHNK*, ::System::UInt32))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_CADBJPENKLC_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::HashSet_1<::OCPOIDCNJDA*>* MLKJLFIDOMI(::EHOFEPBAHNK* a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::OCPOIDCNJDA*>*(*)(::EHOFEPBAHNK*, ::System::UInt32))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_MLKJLFIDOMI_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::HashSet_1<::OCPOIDCNJDA*>* GOKNBHDEEDF(::EHOFEPBAHNK* a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::OCPOIDCNJDA*>*(*)(::EHOFEPBAHNK*, ::System::UInt32))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_GOKNBHDEEDF_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::HashSet_1<::OCPOIDCNJDA*>* DFLIHCEAGEA(::EHOFEPBAHNK* a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::OCPOIDCNJDA*>*(*)(::EHOFEPBAHNK*, ::System::UInt32))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_DFLIHCEAGEA_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::HashSet_1<::OCPOIDCNJDA*>* IMJAOIJCPDG(::EHOFEPBAHNK* a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::OCPOIDCNJDA*>*(*)(::EHOFEPBAHNK*, ::System::UInt32))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_IMJAOIJCPDG_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::HashSet_1<::OCPOIDCNJDA*>* PCFHGJNMAFP(::EHOFEPBAHNK* a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::OCPOIDCNJDA*>*(*)(::EHOFEPBAHNK*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_PCFHGJNMAFP_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::HashSet_1<::OCPOIDCNJDA*>* GMDBOGCBDBH(::EHOFEPBAHNK* a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::OCPOIDCNJDA*>*(*)(::EHOFEPBAHNK*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_GMDBOGCBDBH_OFFSET))(a1, a2);
		}

		static ::HIOEAKHGILF* HBACENNPNBI(::EFODGECFLLC* a1, ::System::UInt32 a2)
		{
			return ((::HIOEAKHGILF*(*)(::EFODGECFLLC*, ::System::UInt32))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_HBACENNPNBI_OFFSET))(a1, a2);
		}

		static ::INMMPMDELKE* HBACENNPNBI_1(::GAFMLDLBCEB* a1, ::System::UInt32 a2)
		{
			return ((::INMMPMDELKE*(*)(::GAFMLDLBCEB*, ::System::UInt32))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_HBACENNPNBI_1_OFFSET))(a1, a2);
		}

		static ::NGFHCJIAOLH* HBACENNPNBI_2(::HDIAALCMDNG* a1, ::System::UInt32 a2)
		{
			return ((::NGFHCJIAOLH*(*)(::HDIAALCMDNG*, ::System::UInt32))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_HBACENNPNBI_2_OFFSET))(a1, a2);
		}

		static ::KHPOKIKCOFO* FCKEHPFCIME(::NNHECPOCLJI* a1, ::System::UInt32 a2)
		{
			return ((::KHPOKIKCOFO*(*)(::NNHECPOCLJI*, ::System::UInt32))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_FCKEHPFCIME_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::HashSet_1<::HIOEAKHGILF*>* KBMLNMNFIIM(::EFODGECFLLC* a1, ::RPG::Client::LittleGame::FiveDim::EntityTag a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::HIOEAKHGILF*>*(*)(::EFODGECFLLC*, ::RPG::Client::LittleGame::FiveDim::EntityTag))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_KBMLNMNFIIM_OFFSET))(a1, a2);
		}

		static ::HIOEAKHGILF* FEKFKJGDHHI(::EFODGECFLLC* a1, ::System::String* a2)
		{
			return ((::HIOEAKHGILF*(*)(::EFODGECFLLC*, ::System::String*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_FEKFKJGDHHI_OFFSET))(a1, a2);
		}

		static ::HIOEAKHGILF* AEBBCACMMHL(::EFODGECFLLC* a1, ::System::UInt32 a2)
		{
			return ((::HIOEAKHGILF*(*)(::EFODGECFLLC*, ::System::UInt32))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_AEBBCACMMHL_OFFSET))(a1, a2);
		}

		static ::HIOEAKHGILF* FPNECNCJEOJ(::EFODGECFLLC* a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2)
		{
			return ((::HIOEAKHGILF*(*)(::EFODGECFLLC*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_FPNECNCJEOJ_OFFSET))(a1, a2);
		}

		static ::EFHNDMENDHI* IHHBHDLLMGO(::EKJAOIOPBIO* a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2)
		{
			return ((::EFHNDMENDHI*(*)(::EKJAOIOPBIO*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_IHHBHDLLMGO_OFFSET))(a1, a2);
		}

		static ::EFHNDMENDHI* CFLONPCJACA(::EKJAOIOPBIO* a1, ::System::UInt32 a2)
		{
			return ((::EFHNDMENDHI*(*)(::EKJAOIOPBIO*, ::System::UInt32))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_CFLONPCJACA_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::HashSet_1<::EFHNDMENDHI*>* NOICAGIIMPB(::EKJAOIOPBIO* a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::EFHNDMENDHI*>*(*)(::EKJAOIOPBIO*, ::System::UInt32))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_NOICAGIIMPB_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::HashSet_1<::EFHNDMENDHI*>* BHCHEMGLOFL(::EKJAOIOPBIO* a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::EFHNDMENDHI*>*(*)(::EKJAOIOPBIO*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_BHCHEMGLOFL_OFFSET))(a1, a2);
		}

		static ::EFHNDMENDHI* NKEIPCAMHGE(::EKJAOIOPBIO* a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2)
		{
			return ((::EFHNDMENDHI*(*)(::EKJAOIOPBIO*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_NKEIPCAMHGE_OFFSET))(a1, a2);
		}

		static ::EFHNDMENDHI* GJCFIEABCFK(::EKJAOIOPBIO* a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2)
		{
			return ((::EFHNDMENDHI*(*)(::EKJAOIOPBIO*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_GJCFIEABCFK_OFFSET))(a1, a2);
		}

		static ::EFHNDMENDHI* NLCECBIOHKM(::EKJAOIOPBIO* a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2)
		{
			return ((::EFHNDMENDHI*(*)(::EKJAOIOPBIO*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_NLCECBIOHKM_OFFSET))(a1, a2);
		}

		static ::EFHNDMENDHI* GJFIBPGEKHP(::EKJAOIOPBIO* a1, ::System::UInt32 a2)
		{
			return ((::EFHNDMENDHI*(*)(::EKJAOIOPBIO*, ::System::UInt32))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_GJFIBPGEKHP_OFFSET))(a1, a2);
		}

		static ::EFHNDMENDHI* OBGINDIKBED(::EKJAOIOPBIO* a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2)
		{
			return ((::EFHNDMENDHI*(*)(::EKJAOIOPBIO*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_OBGINDIKBED_OFFSET))(a1, a2);
		}

		static ::EFHNDMENDHI* MCJGKOCNBNC(::EKJAOIOPBIO* a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2)
		{
			return ((::EFHNDMENDHI*(*)(::EKJAOIOPBIO*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_MCJGKOCNBNC_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::HashSet_1<::HIOEAKHGILF*>* CEKPKJCCHCD(::EFODGECFLLC* a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::HIOEAKHGILF*>*(*)(::EFODGECFLLC*, ::System::Int32))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_CEKPKJCCHCD_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::HashSet_1<::HIOEAKHGILF*>* FJHJKFHJALA(::EFODGECFLLC* a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::HIOEAKHGILF*>*(*)(::EFODGECFLLC*, ::System::Int32))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_FJHJKFHJALA_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::HashSet_1<::HIOEAKHGILF*>* ILHJDNAMNPG(::EFODGECFLLC* a1, ::System::String* a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::HIOEAKHGILF*>*(*)(::EFODGECFLLC*, ::System::String*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_ILHJDNAMNPG_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::HashSet_1<::KHPOKIKCOFO*>* BFAFCCEKAJA(::NNHECPOCLJI* a1, ::System::UInt16 a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::KHPOKIKCOFO*>*(*)(::NNHECPOCLJI*, ::System::UInt16))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_BFAFCCEKAJA_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::HashSet_1<::HIOEAKHGILF*>* HKAGILBJMED(::EFODGECFLLC* a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::HIOEAKHGILF*>*(*)(::EFODGECFLLC*, ::System::Int32))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_HKAGILBJMED_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::HashSet_1<::INMMPMDELKE*>* HKAGILBJMED_1(::GAFMLDLBCEB* a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::INMMPMDELKE*>*(*)(::GAFMLDLBCEB*, ::System::Int32))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_HKAGILBJMED_1_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::HashSet_1<::HIOEAKHGILF*>* FEMEHGOJLCI(::EFODGECFLLC* a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::HIOEAKHGILF*>*(*)(::EFODGECFLLC*, ::System::UInt32))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_FEMEHGOJLCI_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::HashSet_1<::INMMPMDELKE*>* FEMEHGOJLCI_1(::GAFMLDLBCEB* a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::INMMPMDELKE*>*(*)(::GAFMLDLBCEB*, ::System::UInt32))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_FEMEHGOJLCI_1_OFFSET))(a1, a2);
		}

		static ::OCPOIDCNJDA* LEDJLAPDIOC(::EHOFEPBAHNK* a1, ::System::UInt32 a2)
		{
			return ((::OCPOIDCNJDA*(*)(::EHOFEPBAHNK*, ::System::UInt32))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_LEDJLAPDIOC_OFFSET))(a1, a2);
		}

		static ::KHPOKIKCOFO* EIPACLNOFIG(::NNHECPOCLJI* a1, ::System::String* a2)
		{
			return ((::KHPOKIKCOFO*(*)(::NNHECPOCLJI*, ::System::String*))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_EIPACLNOFIG_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::HashSet_1<::HIOEAKHGILF*>* NKJKNJEFJEE(::EFODGECFLLC* a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::HIOEAKHGILF*>*(*)(::EFODGECFLLC*, ::System::UInt32))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_NKJKNJEFJEE_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::HashSet_1<::HIOEAKHGILF*>* GLKJJGBHMMD(::EFODGECFLLC* a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::HIOEAKHGILF*>*(*)(::EFODGECFLLC*, ::System::UInt32))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_GLKJJGBHMMD_OFFSET))(a1, a2);
		}

		static ::HIOEAKHGILF* EILKNKAMKBB(::EFODGECFLLC* a1, ::System::UInt32 a2)
		{
			return ((::HIOEAKHGILF*(*)(::EFODGECFLLC*, ::System::UInt32))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_EILKNKAMKBB_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::HashSet_1<::HIOEAKHGILF*>* LBHHMLGCOPN(::EFODGECFLLC* a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::HIOEAKHGILF*>*(*)(::EFODGECFLLC*, ::System::Boolean))((::PBYTE)hIl2Cpp + GCHHPCDKEKE_LBHHMLGCOPN_OFFSET))(a1, a2);
		}

	};
