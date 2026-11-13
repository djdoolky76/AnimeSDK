#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJKHPOHKIIF.h"
#include "unitysdk/RPG/GameCore/PreloadGroupType.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/ValueTuple_3.h"
class DEKDEPEBHNC;
class ENGBNDIPDJL;
class PFACHJFCILN;
namespace RPG::Client { class BattleAssetPreload_AssetPreloadGroup; }
namespace RPG::Client { class BattleAssetPreload_CharacterPreloadGroupBase; }
namespace RPG::Client { class BattleGamePhase; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JPKGFBOPBML_ADGNPBBKEGL_OFFSET UNITYSDK_OFFSET(0x1B5032D0)
#define JPKGFBOPBML_AJLCJJOOOOE_OFFSET UNITYSDK_OFFSET(0x1B5021F0)
#define JPKGFBOPBML_CTOR_OFFSET UNITYSDK_OFFSET(0x1B504430)
#define JPKGFBOPBML_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x1B5021A0)
#define JPKGFBOPBML_DGCJJEDNJKP_1_OFFSET UNITYSDK_OFFSET(0x1B502E20)
#define JPKGFBOPBML_DGCJJEDNJKP_OFFSET UNITYSDK_OFFSET(0x1B502C60)
#define JPKGFBOPBML_DGOJLNIMBAJ_OFFSET UNITYSDK_OFFSET(0x1B504070)
#define JPKGFBOPBML_DMOEHAABPID_OFFSET UNITYSDK_OFFSET(0x1B504130)
#define JPKGFBOPBML_EGJKOEJKBLC_OFFSET UNITYSDK_OFFSET(0x1B503E40)
#define JPKGFBOPBML_FCLHLPLMNGI_OFFSET UNITYSDK_OFFSET(0x1B503C90)
#define JPKGFBOPBML_GAFKECIDLJG_OFFSET UNITYSDK_OFFSET(0x1B502730)
#define JPKGFBOPBML_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0x1B502430)
#define JPKGFBOPBML_GNLKPJHAKHM_OFFSET UNITYSDK_OFFSET(0x1B502C10)
#define JPKGFBOPBML_IGKNNHFAHEC_OFFSET UNITYSDK_OFFSET(0x1B503A50)
#define JPKGFBOPBML_JDLOFFAPPEI_OFFSET UNITYSDK_OFFSET(0x1B5040D0)
#define JPKGFBOPBML_KFNLCCFOLNC_OFFSET UNITYSDK_OFFSET(0x1B503440)
#define JPKGFBOPBML_KGAMJCNJJAL_OFFSET UNITYSDK_OFFSET(0x1B5029E0)
#define JPKGFBOPBML_LCBHFNPDBAA_OFFSET UNITYSDK_OFFSET(0x1B502F30)
#define JPKGFBOPBML_LELDBHIBBKH_OFFSET UNITYSDK_OFFSET(0x1B504380)
#define JPKGFBOPBML_MAADHCNDNKD_OFFSET UNITYSDK_OFFSET(0x1B503E90)
#define JPKGFBOPBML_MFHAPPMMEIF_OFFSET UNITYSDK_OFFSET(0x1B5035B0)
#define JPKGFBOPBML_NAJLDANBFPK_OFFSET UNITYSDK_OFFSET(0x1B503190)
#define JPKGFBOPBML_NLIFDKMPCPP_OFFSET UNITYSDK_OFFSET(0x1B503DB0)
#define JPKGFBOPBML_NONMPLMPIIP_OFFSET UNITYSDK_OFFSET(0x1B503F80)

inline static constexpr unsigned int JPKGFBOPBML_TypeDefinitionIndex = 61000;

	class JPKGFBOPBML : public ::LJKHPOHKIIF
	{
	public:
		::RPG::GameCore::GameEntity* MBPLOAHFLOG; // 0x20
		::System::Collections::Generic::HashSet_1<::System::String*>* NAFCENIBCHP; // 0x28
		::ENGBNDIPDJL* MHAADMAIOIA; // 0x30
		::RPG::Client::BattleGamePhase* NOHNKAIALPJ; // 0x38
		::System::Collections::Generic::HashSet_1<::System::ValueTuple_3<::RPG::GameCore::PreloadGroupType, ::System::UInt32, ::System::String*>>* EGLJECAOAEM; // 0x40
		::System::Collections::Generic::HashSet_1<::System::String*>* IOOFNIFKFCF; // 0x48
		::System::Collections::Generic::List_1<::PFACHJFCILN*>* OCBMNPENLOO; // 0x50
		::RPG::GameCore::TurnState ADIMPCKDCNH; // 0x58
		::System::Boolean BFJAPBAAGFI; // 0x5C
		::System::Byte _padding0[0x3];
		::System::UInt32 HIEPMCKEJBE; // 0x60
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

		::System::Void DGCJJEDNJKP(::RPG::Client::BattleAssetPreload_AssetPreloadGroup* a1, ::Il2CppArray<::System::String*>* a2, ::Il2CppArray<::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_AssetPreloadGroup*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + JPKGFBOPBML_DGCJJEDNJKP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DGCJJEDNJKP_1(::RPG::Client::BattleAssetPreload_AssetPreloadGroup* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_AssetPreloadGroup*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + JPKGFBOPBML_DGCJJEDNJKP_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AJLCJJOOOOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKGFBOPBML_AJLCJJOOOOE_OFFSET))(this);
		}

		::System::Void KGAMJCNJJAL(::System::Boolean a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JPKGFBOPBML_KGAMJCNJJAL_OFFSET))(this, a1, a2);
		}

		::System::Void LCBHFNPDBAA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JPKGFBOPBML_LCBHFNPDBAA_OFFSET))(this, a1);
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

		::System::Void IGKNNHFAHEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKGFBOPBML_IGKNNHFAHEC_OFFSET))(this);
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
