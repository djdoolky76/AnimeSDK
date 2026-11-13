#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GDIFFKOHFDE_RF_PlayerInfoComponent.h"
#include "unitysdk/NOJGCGEFOAN.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/ChangeSource.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/PlayerState.h"
#include "unitysdk/RPG/Client/LittleGameShare/ReplicationFlag.h"
#include "unitysdk/RPG/GameCore/TeamTowersPlayerModifierType.h"
#include "unitysdk/System/Object.h"
class AEDGBKOJEFD;
class LNHACPACCKH;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GDIFFKOHFDE_AAGJBCEEHAL_OFFSET UNITYSDK_OFFSET(0x1AA43040)
#define GDIFFKOHFDE_ADEBDICJHHB_OFFSET UNITYSDK_OFFSET(0x1AA42EA0)
#define GDIFFKOHFDE_AHACLKEKLJD_OFFSET UNITYSDK_OFFSET(0x1AA42300)
#define GDIFFKOHFDE_BEOIPMPMBOF_OFFSET UNITYSDK_OFFSET(0x1AA428C0)
#define GDIFFKOHFDE_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0x1AA42D70)
#define GDIFFKOHFDE_CBOFFPEFEPP_OFFSET UNITYSDK_OFFSET(0x1AA42DD0)
#define GDIFFKOHFDE_CILBOIMIDJP_OFFSET UNITYSDK_OFFSET(0x1AA430F0)
#define GDIFFKOHFDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1AA43F90)
#define GDIFFKOHFDE_DLBMEBEGNGL_OFFSET UNITYSDK_OFFSET(0x1AA42DE0)
#define GDIFFKOHFDE_FAJCFOIPJCG_OFFSET UNITYSDK_OFFSET(0x1AA42760)
#define GDIFFKOHFDE_FCHMADJPDOM_OFFSET UNITYSDK_OFFSET(0x1AA43EF0)
#define GDIFFKOHFDE_FCJCAIDAKOH_OFFSET UNITYSDK_OFFSET(0x1AA42870)
#define GDIFFKOHFDE_FIGCOAHBJFJ_OFFSET UNITYSDK_OFFSET(0x1AA42C80)
#define GDIFFKOHFDE_GNBIPGJGOAJ_OFFSET UNITYSDK_OFFSET(0x1AA42FB0)
#define GDIFFKOHFDE_HBOMBMMNIAE_OFFSET UNITYSDK_OFFSET(0x1AA42AA0)
#define GDIFFKOHFDE_HEHJAJFJJMP_OFFSET UNITYSDK_OFFSET(0x1AA42D80)
#define GDIFFKOHFDE_HHHGNIBIILD_OFFSET UNITYSDK_OFFSET(0x1AA425B0)
#define GDIFFKOHFDE_HOGPJLFNLIC_OFFSET UNITYSDK_OFFSET(0x1AA42600)
#define GDIFFKOHFDE_IEOMHACOPND_OFFSET UNITYSDK_OFFSET(0x1AA42A90)
#define GDIFFKOHFDE_IKFAGCBFPJJ_OFFSET UNITYSDK_OFFSET(0x1AA421F0)
#define GDIFFKOHFDE_JGMCMBAGKLG_OFFSET UNITYSDK_OFFSET(0x1AA42B50)
#define GDIFFKOHFDE_JIBKCFEHOLD_OFFSET UNITYSDK_OFFSET(0x1AA42BE0)
#define GDIFFKOHFDE_JOMAJAOLMMH_OFFSET UNITYSDK_OFFSET(0x1AA42CE0)
#define GDIFFKOHFDE_KAKICHLIJNJ_OFFSET UNITYSDK_OFFSET(0x1AA42D60)
#define GDIFFKOHFDE_KGNFMKMBMIG_OFFSET UNITYSDK_OFFSET(0x1AA42F40)
#define GDIFFKOHFDE_KOPHIMBLMNK_OFFSET UNITYSDK_OFFSET(0x1AA42AF0)
#define GDIFFKOHFDE_LBIHOLKGMIB_OFFSET UNITYSDK_OFFSET(0x1AA43100)
#define GDIFFKOHFDE_LCKMGEBOBOK_OFFSET UNITYSDK_OFFSET(0x1AA42E40)
#define GDIFFKOHFDE_LFEIBCHMIOG_OFFSET UNITYSDK_OFFSET(0x1AA43000)
#define GDIFFKOHFDE_LFFOMLOABMM_OFFSET UNITYSDK_OFFSET(0x1AA429E0)
#define GDIFFKOHFDE_LGDPCNDFPNB_OFFSET UNITYSDK_OFFSET(0x1AA43090)
#define GDIFFKOHFDE_LICHCKJJJJH_OFFSET UNITYSDK_OFFSET(0x1AA42B60)
#define GDIFFKOHFDE_MAHNPPNOIIG_OFFSET UNITYSDK_OFFSET(0x1AA42EE0)
#define GDIFFKOHFDE_MDHKOEGCODK_OFFSET UNITYSDK_OFFSET(0x1AA42990)
#define GDIFFKOHFDE_MFDMIPEEGHG_OFFSET UNITYSDK_OFFSET(0x1AA42B00)
#define GDIFFKOHFDE_MGFKLOABKBF_OFFSET UNITYSDK_OFFSET(0x1AA42F50)
#define GDIFFKOHFDE_MNCGEPMKICK_OFFSET UNITYSDK_OFFSET(0x1AA42C70)
#define GDIFFKOHFDE_NALIIADEEMO_OFFSET UNITYSDK_OFFSET(0x1AA43E90)
#define GDIFFKOHFDE_NBLPPFGNHHO_OFFSET UNITYSDK_OFFSET(0x1AA43F40)
#define GDIFFKOHFDE_NFMJPICEDBA_OFFSET UNITYSDK_OFFSET(0x1AA42E30)
#define GDIFFKOHFDE_NJKHGPCDAMI_OFFSET UNITYSDK_OFFSET(0x1AA43810)
#define GDIFFKOHFDE_NOJIPMKAGON_OFFSET UNITYSDK_OFFSET(0x1AA42A40)
#define GDIFFKOHFDE_PDDNGIIBEIE_OFFSET UNITYSDK_OFFSET(0x1AA42BF0)
#define GDIFFKOHFDE_PFJJEIOPPBD_OFFSET UNITYSDK_OFFSET(0x1AA42CD0)
#define GDIFFKOHFDE_PJLEOJKPGAJ_OFFSET UNITYSDK_OFFSET(0x1AA42FA0)
#define GDIFFKOHFDE_PNJODACLLPH_OFFSET UNITYSDK_OFFSET(0x1AA42A30)

inline static constexpr unsigned int GDIFFKOHFDE_TypeDefinitionIndex = 38015;

	class GDIFFKOHFDE : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::NOJGCGEFOAN>* MGDABECECEO; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* EDAILOOHNPP; // 0x18
		::System::String* AOIDAPMAGKJ; // 0x20
		::System::String* ADAIJJBCIBG; // 0x28
		::System::String* LIGLIPFKGJK; // 0x30
		::System::UInt64 KFGFADMGOJA; // 0x38
		::System::UInt32 BOONIHLBFNM; // 0x40
		::RPG::Client::LittleGameShare::TeamTowersCore::ChangeSource CALDKIFINNK; // 0x44
		::System::UInt32 PGJCILFEGBG; // 0x48
		::System::UInt32 ONMBGICDMFM; // 0x4C
		::GDIFFKOHFDE_RF_PlayerInfoComponent HFKLFHBEDEM; // 0x50
		::System::Boolean NGDCPOGLJHH; // 0x52
		::System::Byte _padding0[0x1];
		::RPG::Client::LittleGameShare::TeamTowersCore::PlayerState NNKMIKNIELL; // 0x54
		::System::UInt32 HPAJFCIJNAH; // 0x58
		::System::UInt32 LBNAJJGFODN; // 0x5C
		::System::Int32 GOOICECELEN; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_CTOR_OFFSET))(this);
		}

		::System::Boolean IKFAGCBFPJJ(::RPG::GameCore::TeamTowersPlayerModifierType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TeamTowersPlayerModifierType))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_IKFAGCBFPJJ_OFFSET))(this, a1);
		}

		::System::Void AHACLKEKLJD(::RPG::GameCore::TeamTowersPlayerModifierType a1, ::System::UInt64 a2, ::System::UInt64 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamTowersPlayerModifierType, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_AHACLKEKLJD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HOGPJLFNLIC(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_HOGPJLFNLIC_OFFSET))(this, a1);
		}

		::System::Void FAJCFOIPJCG(::RPG::GameCore::TeamTowersPlayerModifierType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamTowersPlayerModifierType))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_FAJCFOIPJCG_OFFSET))(this, a1);
		}

		::System::Boolean FCJCAIDAKOH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_FCJCAIDAKOH_OFFSET))(this);
		}

		::System::Void BEOIPMPMBOF(::System::UInt32 a1, ::RPG::Client::LittleGameShare::TeamTowersCore::ChangeSource a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGameShare::TeamTowersCore::ChangeSource))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_BEOIPMPMBOF_OFFSET))(this, a1, a2);
		}

		::System::Boolean PNJODACLLPH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_PNJODACLLPH_OFFSET))(this);
		}

		::System::Void NOJIPMKAGON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_NOJIPMKAGON_OFFSET))(this);
		}

		::System::UInt32 IEOMHACOPND()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_IEOMHACOPND_OFFSET))(this);
		}

		::System::Void HBOMBMMNIAE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_HBOMBMMNIAE_OFFSET))(this, a1);
		}

		::System::Boolean KOPHIMBLMNK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_KOPHIMBLMNK_OFFSET))(this);
		}

		::System::Void MFDMIPEEGHG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_MFDMIPEEGHG_OFFSET))(this, a1);
		}

		::System::String* JGMCMBAGKLG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_JGMCMBAGKLG_OFFSET))(this);
		}

		::System::Void LICHCKJJJJH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_LICHCKJJJJH_OFFSET))(this, a1);
		}

		::System::String* JIBKCFEHOLD()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_JIBKCFEHOLD_OFFSET))(this);
		}

		::System::Void PDDNGIIBEIE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_PDDNGIIBEIE_OFFSET))(this, a1);
		}

		::System::Int32 MNCGEPMKICK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_MNCGEPMKICK_OFFSET))(this);
		}

		::System::Void FIGCOAHBJFJ(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_FIGCOAHBJFJ_OFFSET))(this, a1);
		}

		::System::String* PFJJEIOPPBD()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_PFJJEIOPPBD_OFFSET))(this);
		}

		::System::Void JOMAJAOLMMH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_JOMAJAOLMMH_OFFSET))(this, a1);
		}

		::System::UInt32 KAKICHLIJNJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_KAKICHLIJNJ_OFFSET))(this);
		}

		::System::Void LFFOMLOABMM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_LFFOMLOABMM_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGameShare::TeamTowersCore::PlayerState BGDKFHEBDFJ()
		{
			return ((::RPG::Client::LittleGameShare::TeamTowersCore::PlayerState(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_BGDKFHEBDFJ_OFFSET))(this);
		}

		::System::Void HEHJAJFJJMP(::RPG::Client::LittleGameShare::TeamTowersCore::PlayerState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::TeamTowersCore::PlayerState))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_HEHJAJFJJMP_OFFSET))(this, a1);
		}

		::System::UInt32 CBOFFPEFEPP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_CBOFFPEFEPP_OFFSET))(this);
		}

		::System::Void DLBMEBEGNGL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_DLBMEBEGNGL_OFFSET))(this, a1);
		}

		::System::UInt64 NFMJPICEDBA()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_NFMJPICEDBA_OFFSET))(this);
		}

		::System::Void LCKMGEBOBOK(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_LCKMGEBOBOK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::NOJGCGEFOAN>* ADEBDICJHHB()
		{
			return ((::System::Collections::Generic::List_1<::NOJGCGEFOAN>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_ADEBDICJHHB_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::NOJGCGEFOAN>* HHHGNIBIILD()
		{
			return ((::System::Collections::Generic::List_1<::NOJGCGEFOAN>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_HHHGNIBIILD_OFFSET))(this);
		}

		::System::Void MAHNPPNOIIG(::System::Collections::Generic::List_1<::NOJGCGEFOAN>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NOJGCGEFOAN>*))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_MAHNPPNOIIG_OFFSET))(this, a1);
		}

		::System::UInt32 KGNFMKMBMIG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_KGNFMKMBMIG_OFFSET))(this);
		}

		::System::Void MGFKLOABKBF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_MGFKLOABKBF_OFFSET))(this, a1);
		}

		::System::UInt32 PJLEOJKPGAJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_PJLEOJKPGAJ_OFFSET))(this);
		}

		::System::Void GNBIPGJGOAJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_GNBIPGJGOAJ_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* LFEIBCHMIOG()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_LFEIBCHMIOG_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* AAGJBCEEHAL()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_AAGJBCEEHAL_OFFSET))(this);
		}

		::System::Void LGDPCNDFPNB(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_LGDPCNDFPNB_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGameShare::TeamTowersCore::ChangeSource CILBOIMIDJP()
		{
			return ((::RPG::Client::LittleGameShare::TeamTowersCore::ChangeSource(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_CILBOIMIDJP_OFFSET))(this);
		}

		::System::Void MDHKOEGCODK(::RPG::Client::LittleGameShare::TeamTowersCore::ChangeSource a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::TeamTowersCore::ChangeSource))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_MDHKOEGCODK_OFFSET))(this, a1);
		}

		::System::Void LBIHOLKGMIB(::AEDGBKOJEFD* a1, ::RPG::Client::LittleGameShare::ReplicationFlag a2)
		{
			return ((::System::Void(*)(::PVOID, ::AEDGBKOJEFD*, ::RPG::Client::LittleGameShare::ReplicationFlag))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_LBIHOLKGMIB_OFFSET))(this, a1, a2);
		}

		::System::Void NJKHGPCDAMI(::LNHACPACCKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNHACPACCKH*))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_NJKHGPCDAMI_OFFSET))(this, a1);
		}

		::System::Void NALIIADEEMO(::LNHACPACCKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNHACPACCKH*))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_NALIIADEEMO_OFFSET))(this, a1);
		}

		::System::Boolean FCHMADJPDOM(::GDIFFKOHFDE_RF_PlayerInfoComponent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GDIFFKOHFDE_RF_PlayerInfoComponent))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_FCHMADJPDOM_OFFSET))(this, a1);
		}

		::System::Boolean NBLPPFGNHHO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIFFKOHFDE_NBLPPFGNHHO_OFFSET))(this);
		}

	};
