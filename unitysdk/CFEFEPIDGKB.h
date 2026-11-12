#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/TeamTowersInputActionType.h"
#include "unitysdk/RPG/GameCore/TeamTowersAIParamType.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HGCDFKINFPA.h"
class CAHLPKGIABH;
class GBJHOMFKNDE;
class HNLKNLJBHDD;
class IOJGBIAJBIC;
class MDHODFHBAAO;
class PLMODIOCPAF;
namespace RPG::GameCore { class TeamTowersAIConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CFEFEPIDGKB_ALHEDHCKHAH_OFFSET UNITYSDK_OFFSET(0x1D74BEA0)
#define CFEFEPIDGKB_AMPFFJEDJGE_OFFSET UNITYSDK_OFFSET(0x1D74C550)
#define CFEFEPIDGKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1D74DD30)
#define CFEFEPIDGKB_DNLENAELMAD_OFFSET UNITYSDK_OFFSET(0x1D74CFC0)
#define CFEFEPIDGKB_GET_NEXTINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1D74DD00)
#define CFEFEPIDGKB_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1D74BAF0)
#define CFEFEPIDGKB_HEHJDNOJCOI_OFFSET UNITYSDK_OFFSET(0x1D74DD20)
#define CFEFEPIDGKB_IHICEEBNKKN_OFFSET UNITYSDK_OFFSET(0x1D74C670)
#define CFEFEPIDGKB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1D74BD00)
#define CFEFEPIDGKB_KGOINJJLHGM_OFFSET UNITYSDK_OFFSET(0x1D74BFE0)
#define CFEFEPIDGKB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1D74B8B0)
#define CFEFEPIDGKB_LNPONNKKNNE_OFFSET UNITYSDK_OFFSET(0x1D74BB40)
#define CFEFEPIDGKB_NIIEJHPNGJA_OFFSET UNITYSDK_OFFSET(0x1D74B9E0)
#define CFEFEPIDGKB_NLKPKABOIPJ_OFFSET UNITYSDK_OFFSET(0x1D74DB90)
#define CFEFEPIDGKB_OBAPBMMEEGC_OFFSET UNITYSDK_OFFSET(0x1D74CAF0)
#define CFEFEPIDGKB_OCJCMJBCHIC_OFFSET UNITYSDK_OFFSET(0x1D74C750)
#define CFEFEPIDGKB_PBDAFAKBCGM_OFFSET UNITYSDK_OFFSET(0x1D74C220)
#define CFEFEPIDGKB_SET_NEXTINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1D74DD10)

inline static constexpr unsigned int CFEFEPIDGKB_TypeDefinitionIndex = 38075;

	class CFEFEPIDGKB : public ::System::Object
	{
	public:
		::HNLKNLJBHDD* FPKJBBGNPBB; // 0x10
		::CAHLPKGIABH* MANEKNPNILP; // 0x18
		::System::Collections::Generic::List_1<::CAHLPKGIABH*>* ALCCLOKILPL; // 0x20
		::MDHODFHBAAO* JEOADHBDKMO; // 0x28
		::System::Collections::Generic::List_1<::IOJGBIAJBIC*>* JEMGLDDOPFM; // 0x30
		::PLMODIOCPAF* PDENFEFCAGN; // 0x38
		::System::Single MFNEBFBIAMK; // 0x40
		::System::Boolean DLNNFPKMHLO; // 0x44
		::System::Boolean NHHALCBIMOF; // 0x45
		::System::Byte _padding0[0x2];
		::System::Int32 EACDGPCDMFI; // 0x48
		::System::Int32 JOOMGLOODGI; // 0x4C
		::System::Single BOINDOAKOAK; // 0x50
		::System::Int32 EOKGNNINCNM; // 0x54
		::System::Int32 KGPAGGHKPLP; // 0x58
		::System::Single PGKAFGGPHMH; // 0x5C
		::RPG::MVector2 CLODCALCCFF; // 0x60
		::System::Int32 HEEIDDLIOMP; // 0x68
		::System::Single MBPEINKNHAF; // 0x6C
		::System::Int32 FDKGLFOFAJM; // 0x70
		::System::Single FPCJAMDMONB; // 0x74
		::System::Int32 DHMPFJDBPDF; // 0x78
		::System::Single BKKIFNGBDAM; // 0x7C
		::System::Int32 MBKGOFAHEME; // 0x80
		::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersInputActionType _NextInputAction_k__BackingField; // 0x84
		::RPG::MVector2 HCMBEICKNCI; // 0x88
		::System::Single DGONAMEFLAI; // 0x90
		::System::Single KCHICCLINJN; // 0x94
		::System::Int32 KNLIPEKMICF; // 0x98
		::System::Int32 BNKBEOHFPLM; // 0x9C
		::RPG::MVector2 AILIKDEBMOO; // 0xA0
		::System::Single EDENKCJENDB; // 0xA8
		::System::Single FIFMOFDCOKC; // 0xAC
		// static const ::System::Object OAHNMNMGHBH; // 0x0
		// static const ::System::Object JOFEFPACONH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFEPIDGKB_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::PLMODIOCPAF* a1, ::MDHODFHBAAO* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::RPG::GameCore::TeamTowersAIConfig* a6)
		{
			return ((::System::Void(*)(::PVOID, ::PLMODIOCPAF*, ::MDHODFHBAAO*, ::System::Single, ::System::Single, ::System::Single, ::RPG::GameCore::TeamTowersAIConfig*))((::PBYTE)hIl2Cpp + CFEFEPIDGKB_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFEPIDGKB_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void LNPONNKKNNE(::HNLKNLJBHDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNLKNLJBHDD*))((::PBYTE)hIl2Cpp + CFEFEPIDGKB_LNPONNKKNNE_OFFSET))(this, a1);
		}

		::System::Void NIIEJHPNGJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFEPIDGKB_NIIEJHPNGJA_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CFEFEPIDGKB_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void ALHEDHCKHAH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CFEFEPIDGKB_ALHEDHCKHAH_OFFSET))(this, a1);
		}

		::System::Void KGOINJJLHGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFEPIDGKB_KGOINJJLHGM_OFFSET))(this);
		}

		::System::Void PBDAFAKBCGM(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CFEFEPIDGKB_PBDAFAKBCGM_OFFSET))(this, a1, a2);
		}

		static ::HNLKNLJBHDD* OBAPBMMEEGC(::CAHLPKGIABH* a1)
		{
			return ((::HNLKNLJBHDD*(*)(::CAHLPKGIABH*))((::PBYTE)hIl2Cpp + CFEFEPIDGKB_OBAPBMMEEGC_OFFSET))(a1);
		}

		::System::Void OCJCMJBCHIC(::System::Single a1, ::GBJHOMFKNDE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::GBJHOMFKNDE*))((::PBYTE)hIl2Cpp + CFEFEPIDGKB_OCJCMJBCHIC_OFFSET))(this, a1, a2);
		}

		::System::Single DNLENAELMAD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFEPIDGKB_DNLENAELMAD_OFFSET))(this);
		}

		::System::Boolean AMPFFJEDJGE(::HGCDFKINFPA a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGCDFKINFPA))((::PBYTE)hIl2Cpp + CFEFEPIDGKB_AMPFFJEDJGE_OFFSET))(this, a1);
		}

		::System::Boolean IHICEEBNKKN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFEPIDGKB_IHICEEBNKKN_OFFSET))(this);
		}

		::System::Void NLKPKABOIPJ(::RPG::GameCore::TeamTowersAIParamType a1, ::Il2CppArray<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamTowersAIParamType, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CFEFEPIDGKB_NLKPKABOIPJ_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersInputActionType get_NextInputAction()
		{
			return ((::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersInputActionType(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFEPIDGKB_GET_NEXTINPUTACTION_OFFSET))(this);
		}

		::System::Void set_NextInputAction(::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersInputActionType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersInputActionType))((::PBYTE)hIl2Cpp + CFEFEPIDGKB_SET_NEXTINPUTACTION_OFFSET))(this, a1);
		}

		::HNLKNLJBHDD* HEHJDNOJCOI()
		{
			return ((::HNLKNLJBHDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFEPIDGKB_HEHJDNOJCOI_OFFSET))(this);
		}

	};
