#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJKHPOHKIIF.h"
class DEKDEPEBHNC;
namespace RPG::Client { class BattleAssetPreload_CharacterPreloadGroupBase; }
namespace RPG::Client { class BattleGamePhase; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JPKGFBOPBML_ADGNPBBKEGL_OFFSET UNITYSDK_OFFSET(0xB2C0FC0)
#define JPKGFBOPBML_AJLCJJOOOOE_OFFSET UNITYSDK_OFFSET(0xB2C0280)
#define JPKGFBOPBML_CTOR_OFFSET UNITYSDK_OFFSET(0xB2C1AC0)
#define JPKGFBOPBML_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xB2C0230)
#define JPKGFBOPBML_DGOJLNIMBAJ_OFFSET UNITYSDK_OFFSET(0xB2C18B0)
#define JPKGFBOPBML_DMOEHAABPID_OFFSET UNITYSDK_OFFSET(0xB2C1950)
#define JPKGFBOPBML_EGJKOEJKBLC_OFFSET UNITYSDK_OFFSET(0xB2C16A0)
#define JPKGFBOPBML_FCLHLPLMNGI_OFFSET UNITYSDK_OFFSET(0xB2C1560)
#define JPKGFBOPBML_GAFKECIDLJG_OFFSET UNITYSDK_OFFSET(0xB2C07C0)
#define JPKGFBOPBML_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0xB2C04C0)
#define JPKGFBOPBML_GNLKPJHAKHM_OFFSET UNITYSDK_OFFSET(0xB2C0C70)
#define JPKGFBOPBML_JDLOFFAPPEI_OFFSET UNITYSDK_OFFSET(0xB2C1900)
#define JPKGFBOPBML_KFNLCCFOLNC_OFFSET UNITYSDK_OFFSET(0xB2C1130)
#define JPKGFBOPBML_KGAMJCNJJAL_OFFSET UNITYSDK_OFFSET(0xB2C0A30)
#define JPKGFBOPBML_LCBHFNPDBAA_OFFSET UNITYSDK_OFFSET(0xB2C0CC0)
#define JPKGFBOPBML_LELDBHIBBKH_OFFSET UNITYSDK_OFFSET(0xB2C1A10)
#define JPKGFBOPBML_MAADHCNDNKD_OFFSET UNITYSDK_OFFSET(0xB2C16F0)
#define JPKGFBOPBML_MFHAPPMMEIF_OFFSET UNITYSDK_OFFSET(0xB2C12A0)
#define JPKGFBOPBML_NAJLDANBFPK_OFFSET UNITYSDK_OFFSET(0xB2C0E80)
#define JPKGFBOPBML_NLIFDKMPCPP_OFFSET UNITYSDK_OFFSET(0xB2C1650)
#define JPKGFBOPBML_NONMPLMPIIP_OFFSET UNITYSDK_OFFSET(0xB2C17D0)

inline static constexpr unsigned int JPKGFBOPBML_TypeDefinitionIndex = 59721;

	class JPKGFBOPBML : public ::LJKHPOHKIIF
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::String*>* NAFCENIBCHP; // 0x20
		::System::Collections::Generic::HashSet_1<::System::String*>* IOOFNIFKFCF; // 0x28
		::RPG::Client::BattleGamePhase* NOHNKAIALPJ; // 0x30
		::System::Boolean BFJAPBAAGFI; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKGFBOPBML_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKGFBOPBML_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void GGNBOEIMEPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKGFBOPBML_GGNBOEIMEPM_OFFSET))(this);
		}

		::System::Void GAFKECIDLJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKGFBOPBML_GAFKECIDLJG_OFFSET))(this);
		}

		::System::Void GNLKPJHAKHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKGFBOPBML_GNLKPJHAKHM_OFFSET))(this);
		}

		::System::Void AJLCJJOOOOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKGFBOPBML_AJLCJJOOOOE_OFFSET))(this);
		}

		::System::Void KGAMJCNJJAL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JPKGFBOPBML_KGAMJCNJJAL_OFFSET))(this, a1);
		}

		::System::Void LCBHFNPDBAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKGFBOPBML_LCBHFNPDBAA_OFFSET))(this);
		}

		::System::Void NAJLDANBFPK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JPKGFBOPBML_NAJLDANBFPK_OFFSET))(this, a1);
		}

		::System::Void ADGNPBBKEGL(::DEKDEPEBHNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEKDEPEBHNC*))((::PBYTE)hIl2Cpp + JPKGFBOPBML_ADGNPBBKEGL_OFFSET))(this, a1);
		}

		::System::Void KFNLCCFOLNC(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + JPKGFBOPBML_KFNLCCFOLNC_OFFSET))(this, a1, a2);
		}

		::System::Void MFHAPPMMEIF(::RPG::Client::BattleAssetPreload_CharacterPreloadGroupBase* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_CharacterPreloadGroupBase*, ::System::String*))((::PBYTE)hIl2Cpp + JPKGFBOPBML_MFHAPPMMEIF_OFFSET))(this, a1, a2);
		}

		::System::Boolean FCLHLPLMNGI(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JPKGFBOPBML_FCLHLPLMNGI_OFFSET))(this, a1);
		}

		::System::Void NLIFDKMPCPP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JPKGFBOPBML_NLIFDKMPCPP_OFFSET))(this, a1);
		}

		::System::Void EGJKOEJKBLC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JPKGFBOPBML_EGJKOEJKBLC_OFFSET))(this, a1);
		}

		::System::Void MAADHCNDNKD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JPKGFBOPBML_MAADHCNDNKD_OFFSET))(this, a1);
		}

		::System::Void NONMPLMPIIP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JPKGFBOPBML_NONMPLMPIIP_OFFSET))(this, a1);
		}

		::System::Void DGOJLNIMBAJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JPKGFBOPBML_DGOJLNIMBAJ_OFFSET))(this, a1);
		}

		::System::Void JDLOFFAPPEI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JPKGFBOPBML_JDLOFFAPPEI_OFFSET))(this, a1);
		}

		::System::Void DMOEHAABPID(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JPKGFBOPBML_DMOEHAABPID_OFFSET))(this, a1);
		}

		::System::Void LELDBHIBBKH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JPKGFBOPBML_LELDBHIBBKH_OFFSET))(this, a1);
		}

	};
