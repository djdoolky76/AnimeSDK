#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PixAirEquipTag.h"
#include "unitysdk/RPG/GameCore/PixAirEventType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"
class BCLKDMAHONE;
class DDCDKHALPDP;
class DOMHKLANPAI;
class HJMFDDMHOJC;
class IOGNBKGNPFD;
class PMGIMPDMIKC;
namespace Entitas { class IEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Text { class StringBuilder; }

#define IIBBDJLIICI_AKKEOJEJAMN_OFFSET UNITYSDK_OFFSET(0x16427150)
#define IIBBDJLIICI_ALINNLKKKFH_OFFSET UNITYSDK_OFFSET(0x16426DF0)
#define IIBBDJLIICI_APIILACMMCJ_OFFSET UNITYSDK_OFFSET(0x16423FD0)
#define IIBBDJLIICI_CHIIIGPALND_OFFSET UNITYSDK_OFFSET(0x16425F30)
#define IIBBDJLIICI_CLKJEHELDCH_OFFSET UNITYSDK_OFFSET(0x16422D20)
#define IIBBDJLIICI_CNILOKHDJNA_OFFSET UNITYSDK_OFFSET(0x16424370)
#define IIBBDJLIICI_DDKKOIMKMEO_OFFSET UNITYSDK_OFFSET(0x16426280)
#define IIBBDJLIICI_DGDJFKDHFON_OFFSET UNITYSDK_OFFSET(0x16428000)
#define IIBBDJLIICI_DJMIGINPCCN_1_OFFSET UNITYSDK_OFFSET(0x16423E80)
#define IIBBDJLIICI_DJMIGINPCCN_OFFSET UNITYSDK_OFFSET(0x16423630)
#define IIBBDJLIICI_DLCOOABGAJL_OFFSET UNITYSDK_OFFSET(0x16425220)
#define IIBBDJLIICI_DOFLCPDAFJE_OFFSET UNITYSDK_OFFSET(0x16424490)
#define IIBBDJLIICI_EBLKBEIPJGK_OFFSET UNITYSDK_OFFSET(0x16426BB0)
#define IIBBDJLIICI_EEBKNHBBMNJ_OFFSET UNITYSDK_OFFSET(0x16426570)
#define IIBBDJLIICI_ELEPDOMDAGA_1_OFFSET UNITYSDK_OFFSET(0x16423050)
#define IIBBDJLIICI_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x16422D80)
#define IIBBDJLIICI_FCDPGMBHJKG_OFFSET UNITYSDK_OFFSET(0x16423D10)
#define IIBBDJLIICI_FIJCAGGLKBI_OFFSET UNITYSDK_OFFSET(0x16423540)
#define IIBBDJLIICI_IHNGAJCPGMA_OFFSET UNITYSDK_OFFSET(0x16428790)
#define IIBBDJLIICI_IKBCPOEDJJJ_OFFSET UNITYSDK_OFFSET(0x16426660)
#define IIBBDJLIICI_IMONOMAKBHM_OFFSET UNITYSDK_OFFSET(0x164285F0)
#define IIBBDJLIICI_KJINNAPBEPM_OFFSET UNITYSDK_OFFSET(0x16423BF0)
#define IIBBDJLIICI_KLFKMACFOFA_OFFSET UNITYSDK_OFFSET(0x16426470)
#define IIBBDJLIICI_KLIHLPJGPMK_OFFSET UNITYSDK_OFFSET(0x16424DB0)
#define IIBBDJLIICI_KLODILAIHLG_OFFSET UNITYSDK_OFFSET(0x16426850)
#define IIBBDJLIICI_KPIGCNFDPIE_OFFSET UNITYSDK_OFFSET(0x16422F20)
#define IIBBDJLIICI_LALDODDPCBG_OFFSET UNITYSDK_OFFSET(0x16428410)
#define IIBBDJLIICI_LFCPLMGGEBH_OFFSET UNITYSDK_OFFSET(0x164230A0)
#define IIBBDJLIICI_MDFMNAHJBIM_OFFSET UNITYSDK_OFFSET(0x16426770)
#define IIBBDJLIICI_NDCOCBDHPBF_OFFSET UNITYSDK_OFFSET(0x164250D0)
#define IIBBDJLIICI_NDLNCJJDCNL_OFFSET UNITYSDK_OFFSET(0x16425E80)
#define IIBBDJLIICI_NFBGNOCPNLA_OFFSET UNITYSDK_OFFSET(0x16428AD0)
#define IIBBDJLIICI_OALFCLCNCBE_OFFSET UNITYSDK_OFFSET(0x16428360)
#define IIBBDJLIICI_OBIIICLMFMJ_OFFSET UNITYSDK_OFFSET(0x16425AB0)
#define IIBBDJLIICI_ODABHGNACKC_OFFSET UNITYSDK_OFFSET(0x16427230)
#define IIBBDJLIICI_OHIJLNNMCDJ_OFFSET UNITYSDK_OFFSET(0x16424110)
#define IIBBDJLIICI_OJBMDIMHHED_OFFSET UNITYSDK_OFFSET(0x16426370)
#define IIBBDJLIICI_ONJIPFKNHDI_OFFSET UNITYSDK_OFFSET(0x16427C00)
#define IIBBDJLIICI_PGEBJKBKDLH_OFFSET UNITYSDK_OFFSET(0x16423160)
#define IIBBDJLIICI_PJAKKPBNCJP_OFFSET UNITYSDK_OFFSET(0x16425740)
#define IIBBDJLIICI_PJLGBODKIFI_OFFSET UNITYSDK_OFFSET(0x16426D10)
#define IIBBDJLIICI_PLDCOBOKHJC_OFFSET UNITYSDK_OFFSET(0x16422CD0)
#define IIBBDJLIICI_PNKAMOJFPNK_OFFSET UNITYSDK_OFFSET(0x16424930)

inline static constexpr unsigned int IIBBDJLIICI_TypeDefinitionIndex = 77284;

	class IIBBDJLIICI : public ::System::Object
	{
	public:
		static ::DOMHKLANPAI** StaticGet_MNGBMINGHIB()
		{
			return (::DOMHKLANPAI**)UnitySDK::FromName("", "IIBBDJLIICI")->GetStaticField(0x5EA60);
		}

		// static const ::System::String* OOOJDLMJMOP; // 0x0
		// static const ::System::String* CKDNHMLODLE; // 0x0
		// static const ::System::String* GDANCJLAIJO; // 0x0
		// static const ::System::String* CJLALBIHMFN; // 0x0
		// static const ::System::String* KFJDJPIGKGB; // 0x0
		// static const ::System::String* ILICJFLMNGN; // 0x0
		// static const ::System::String* OIJDGANIGOH; // 0x0
		// static const ::System::String* FGBIGMEILDG; // 0x0
		// static const ::System::String* HECHEMBKNCF; // 0x0
		// static const ::System::String* EKEMJNPJOBH; // 0x0
		// static const ::System::String* HGKLJDGCHGP; // 0x0
		// static const ::System::String* LLCIEMMFPDN; // 0x0
		// static const ::System::String* DCKDCONKOLG; // 0x0
		// static const ::System::String* DIPGNGLLABK; // 0x0
		// static const ::System::Object FGINDCLHEDE; // 0x0
		static ::System::Void PLDCOBOKHJC(::DOMHKLANPAI* a1)
		{
			return ((::System::Void(*)(::DOMHKLANPAI*))((::PBYTE)hIl2Cpp + IIBBDJLIICI_PLDCOBOKHJC_OFFSET))(a1);
		}

		static ::System::Void CLKJEHELDCH(::DOMHKLANPAI* a1)
		{
			return ((::System::Void(*)(::DOMHKLANPAI*))((::PBYTE)hIl2Cpp + IIBBDJLIICI_CLKJEHELDCH_OFFSET))(a1);
		}

		static ::System::Void ELEPDOMDAGA(::IOGNBKGNPFD* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::IOGNBKGNPFD*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + IIBBDJLIICI_ELEPDOMDAGA_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ELEPDOMDAGA_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + IIBBDJLIICI_ELEPDOMDAGA_1_OFFSET))(a1, a2);
		}

		static ::System::Void LFCPLMGGEBH(::HJMFDDMHOJC* a1, ::HJMFDDMHOJC* a2)
		{
			return ((::System::Void(*)(::HJMFDDMHOJC*, ::HJMFDDMHOJC*))((::PBYTE)hIl2Cpp + IIBBDJLIICI_LFCPLMGGEBH_OFFSET))(a1, a2);
		}

		static ::System::Void FIJCAGGLKBI(::IOGNBKGNPFD* a1, ::BCLKDMAHONE* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::IOGNBKGNPFD*, ::BCLKDMAHONE*, ::System::UInt32))((::PBYTE)hIl2Cpp + IIBBDJLIICI_FIJCAGGLKBI_OFFSET))(a1, a2, a3);
		}

		static ::System::Void KJINNAPBEPM(::IOGNBKGNPFD* a1, ::BCLKDMAHONE* a2, ::System::Int32 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::IOGNBKGNPFD*, ::BCLKDMAHONE*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + IIBBDJLIICI_KJINNAPBEPM_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void APIILACMMCJ(::IOGNBKGNPFD* a1, ::BCLKDMAHONE* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::IOGNBKGNPFD*, ::BCLKDMAHONE*, ::System::Int32))((::PBYTE)hIl2Cpp + IIBBDJLIICI_APIILACMMCJ_OFFSET))(a1, a2, a3);
		}

		static ::System::Void OHIJLNNMCDJ(::BCLKDMAHONE* a1, ::BCLKDMAHONE* a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5)
		{
			return ((::System::Void(*)(::BCLKDMAHONE*, ::BCLKDMAHONE*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + IIBBDJLIICI_OHIJLNNMCDJ_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void CNILOKHDJNA(::BCLKDMAHONE* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::BCLKDMAHONE*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + IIBBDJLIICI_CNILOKHDJNA_OFFSET))(a1, a2);
		}

		static ::System::Void DOFLCPDAFJE(::BCLKDMAHONE* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::System::Int32 a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::BCLKDMAHONE*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + IIBBDJLIICI_DOFLCPDAFJE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void PNKAMOJFPNK(::BCLKDMAHONE* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::BCLKDMAHONE*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::String*))((::PBYTE)hIl2Cpp + IIBBDJLIICI_PNKAMOJFPNK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void KLIHLPJGPMK(::BCLKDMAHONE* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::BCLKDMAHONE* a4)
		{
			return ((::System::Void(*)(::BCLKDMAHONE*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::BCLKDMAHONE*))((::PBYTE)hIl2Cpp + IIBBDJLIICI_KLIHLPJGPMK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void NDCOCBDHPBF(::BCLKDMAHONE* a1, ::BCLKDMAHONE* a2)
		{
			return ((::System::Void(*)(::BCLKDMAHONE*, ::BCLKDMAHONE*))((::PBYTE)hIl2Cpp + IIBBDJLIICI_NDCOCBDHPBF_OFFSET))(a1, a2);
		}

		static ::System::Void DLCOOABGAJL(::IOGNBKGNPFD* a1, ::BCLKDMAHONE* a2, ::BCLKDMAHONE* a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5, ::RPG::GameCore::FixPoint a6, ::RPG::GameCore::FixPoint a7, ::RPG::GameCore::FixPoint a8)
		{
			return ((::System::Void(*)(::IOGNBKGNPFD*, ::BCLKDMAHONE*, ::BCLKDMAHONE*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + IIBBDJLIICI_DLCOOABGAJL_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void PJAKKPBNCJP(::IOGNBKGNPFD* a1, ::BCLKDMAHONE* a2, ::BCLKDMAHONE* a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5, ::RPG::GameCore::FixPoint a6)
		{
			return ((::System::Void(*)(::IOGNBKGNPFD*, ::BCLKDMAHONE*, ::BCLKDMAHONE*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + IIBBDJLIICI_PJAKKPBNCJP_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void OBIIICLMFMJ(::IOGNBKGNPFD* a1, ::BCLKDMAHONE* a2, ::BCLKDMAHONE* a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5, ::RPG::GameCore::FixPoint a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::IOGNBKGNPFD*, ::BCLKDMAHONE*, ::BCLKDMAHONE*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::Boolean))((::PBYTE)hIl2Cpp + IIBBDJLIICI_OBIIICLMFMJ_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void NDLNCJJDCNL(::IOGNBKGNPFD* a1, ::BCLKDMAHONE* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::IOGNBKGNPFD*, ::BCLKDMAHONE*, ::System::String*))((::PBYTE)hIl2Cpp + IIBBDJLIICI_NDLNCJJDCNL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CHIIIGPALND(::IOGNBKGNPFD* a1, ::BCLKDMAHONE* a2, ::BCLKDMAHONE* a3, ::System::String* a4, ::RPG::GameCore::FixPoint a5, ::RPG::GameCore::FixPoint a6)
		{
			return ((::System::Void(*)(::IOGNBKGNPFD*, ::BCLKDMAHONE*, ::BCLKDMAHONE*, ::System::String*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + IIBBDJLIICI_CHIIIGPALND_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void DDKKOIMKMEO(::IOGNBKGNPFD* a1, ::BCLKDMAHONE* a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::IOGNBKGNPFD*, ::BCLKDMAHONE*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + IIBBDJLIICI_DDKKOIMKMEO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void OJBMDIMHHED(::IOGNBKGNPFD* a1, ::BCLKDMAHONE* a2, ::BCLKDMAHONE* a3, ::RPG::GameCore::FixPoint a4)
		{
			return ((::System::Void(*)(::IOGNBKGNPFD*, ::BCLKDMAHONE*, ::BCLKDMAHONE*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + IIBBDJLIICI_OJBMDIMHHED_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void KLFKMACFOFA(::IOGNBKGNPFD* a1, ::BCLKDMAHONE* a2, ::BCLKDMAHONE* a3, ::RPG::GameCore::FixPoint a4)
		{
			return ((::System::Void(*)(::IOGNBKGNPFD*, ::BCLKDMAHONE*, ::BCLKDMAHONE*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + IIBBDJLIICI_KLFKMACFOFA_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void EEBKNHBBMNJ(::IOGNBKGNPFD* a1, ::BCLKDMAHONE* a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::IOGNBKGNPFD*, ::BCLKDMAHONE*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + IIBBDJLIICI_EEBKNHBBMNJ_OFFSET))(a1, a2, a3);
		}

		static ::System::Void IKBCPOEDJJJ(::BCLKDMAHONE* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::BCLKDMAHONE*, ::System::UInt32))((::PBYTE)hIl2Cpp + IIBBDJLIICI_IKBCPOEDJJJ_OFFSET))(a1, a2);
		}

		static ::System::Void MDFMNAHJBIM(::BCLKDMAHONE* a1)
		{
			return ((::System::Void(*)(::BCLKDMAHONE*))((::PBYTE)hIl2Cpp + IIBBDJLIICI_MDFMNAHJBIM_OFFSET))(a1);
		}

		static ::System::Void EBLKBEIPJGK(::BCLKDMAHONE* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::BCLKDMAHONE*, ::System::String*))((::PBYTE)hIl2Cpp + IIBBDJLIICI_EBLKBEIPJGK_OFFSET))(a1, a2);
		}

		static ::System::Void PJLGBODKIFI(::BCLKDMAHONE* a1)
		{
			return ((::System::Void(*)(::BCLKDMAHONE*))((::PBYTE)hIl2Cpp + IIBBDJLIICI_PJLGBODKIFI_OFFSET))(a1);
		}

		static ::System::Void AKKEOJEJAMN(::BCLKDMAHONE* a1)
		{
			return ((::System::Void(*)(::BCLKDMAHONE*))((::PBYTE)hIl2Cpp + IIBBDJLIICI_AKKEOJEJAMN_OFFSET))(a1);
		}

		static ::System::Void ONJIPFKNHDI(::BCLKDMAHONE* a1, ::System::UInt32 a2, ::System::String* a3, ::RPG::GameCore::PixAirEventType a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::BCLKDMAHONE*, ::System::UInt32, ::System::String*, ::RPG::GameCore::PixAirEventType, ::System::String*))((::PBYTE)hIl2Cpp + IIBBDJLIICI_ONJIPFKNHDI_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void DGDJFKDHFON(::BCLKDMAHONE* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::PixAirEventType>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::BCLKDMAHONE*, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::PixAirEventType>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IIBBDJLIICI_DGDJFKDHFON_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void LALDODDPCBG(::BCLKDMAHONE* a1, ::System::Nullable_1<::System::Int32> a2)
		{
			return ((::System::Void(*)(::BCLKDMAHONE*, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + IIBBDJLIICI_LALDODDPCBG_OFFSET))(a1, a2);
		}

		static ::System::String* DJMIGINPCCN(::BCLKDMAHONE* a1)
		{
			return ((::System::String*(*)(::BCLKDMAHONE*))((::PBYTE)hIl2Cpp + IIBBDJLIICI_DJMIGINPCCN_OFFSET))(a1);
		}

		static ::System::String* DJMIGINPCCN_1(::Entitas::IEntity* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::Entitas::IEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + IIBBDJLIICI_DJMIGINPCCN_1_OFFSET))(a1, a2);
		}

		static ::System::Void KPIGCNFDPIE(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + IIBBDJLIICI_KPIGCNFDPIE_OFFSET))(a1, a2);
		}

		static ::DDCDKHALPDP* IMONOMAKBHM()
		{
			return ((::DDCDKHALPDP*(*)())((::PBYTE)hIl2Cpp + IIBBDJLIICI_IMONOMAKBHM_OFFSET))();
		}

		static ::Entitas::IEntity* FCDPGMBHJKG(::IOGNBKGNPFD* a1, ::System::Int32 a2)
		{
			return ((::Entitas::IEntity*(*)(::IOGNBKGNPFD*, ::System::Int32))((::PBYTE)hIl2Cpp + IIBBDJLIICI_FCDPGMBHJKG_OFFSET))(a1, a2);
		}

		static ::System::String* KLODILAIHLG(::BCLKDMAHONE* a1)
		{
			return ((::System::String*(*)(::BCLKDMAHONE*))((::PBYTE)hIl2Cpp + IIBBDJLIICI_KLODILAIHLG_OFFSET))(a1);
		}

		static ::System::String* ALINNLKKKFH(::BCLKDMAHONE* a1)
		{
			return ((::System::String*(*)(::BCLKDMAHONE*))((::PBYTE)hIl2Cpp + IIBBDJLIICI_ALINNLKKKFH_OFFSET))(a1);
		}

		static ::System::String* ODABHGNACKC(::BCLKDMAHONE* a1)
		{
			return ((::System::String*(*)(::BCLKDMAHONE*))((::PBYTE)hIl2Cpp + IIBBDJLIICI_ODABHGNACKC_OFFSET))(a1);
		}

		static ::System::String* PGEBJKBKDLH(::HJMFDDMHOJC* a1, ::HJMFDDMHOJC* a2)
		{
			return ((::System::String*(*)(::HJMFDDMHOJC*, ::HJMFDDMHOJC*))((::PBYTE)hIl2Cpp + IIBBDJLIICI_PGEBJKBKDLH_OFFSET))(a1, a2);
		}

		static ::System::Void IHNGAJCPGMA(::System::Text::StringBuilder* a1, ::Il2CppArray<::PMGIMPDMIKC*>* a2)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::Il2CppArray<::PMGIMPDMIKC*>*))((::PBYTE)hIl2Cpp + IIBBDJLIICI_IHNGAJCPGMA_OFFSET))(a1, a2);
		}

		static ::System::Int64 NFBGNOCPNLA(::HJMFDDMHOJC* a1)
		{
			return ((::System::Int64(*)(::HJMFDDMHOJC*))((::PBYTE)hIl2Cpp + IIBBDJLIICI_NFBGNOCPNLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::PixAirEquipTag>* OALFCLCNCBE(::BCLKDMAHONE* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::PixAirEquipTag>*(*)(::BCLKDMAHONE*))((::PBYTE)hIl2Cpp + IIBBDJLIICI_OALFCLCNCBE_OFFSET))(a1);
		}

	};
