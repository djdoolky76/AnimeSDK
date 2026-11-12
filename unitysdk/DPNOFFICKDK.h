#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionCountDownPreviewMode.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/BJNFCAGBOJO.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class BattleActionEventRow; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DPNOFFICKDK_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x1344E0C0)
#define DPNOFFICKDK_CAIECOBCEBK_OFFSET UNITYSDK_OFFSET(0x1344E940)
#define DPNOFFICKDK_CFKJFAHIJBF_OFFSET UNITYSDK_OFFSET(0x1344E890)
#define DPNOFFICKDK_CNNHGHJHEGG_OFFSET UNITYSDK_OFFSET(0x1344E430)
#define DPNOFFICKDK_CTOR_OFFSET UNITYSDK_OFFSET(0x1344DCA0)
#define DPNOFFICKDK_DFABOAEOGEK_OFFSET UNITYSDK_OFFSET(0x1344DEE0)
#define DPNOFFICKDK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1344E1A0)
#define DPNOFFICKDK_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1344EE40)
#define DPNOFFICKDK_GET_ROWCONFIG_OFFSET UNITYSDK_OFFSET(0x1344EE60)
#define DPNOFFICKDK_JKKJLNKHJPD_OFFSET UNITYSDK_OFFSET(0x1344E200)
#define DPNOFFICKDK_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1344E3E0)
#define DPNOFFICKDK_KMJOOPCJMPP_OFFSET UNITYSDK_OFFSET(0x1344ED10)
#define DPNOFFICKDK_KONPOBEMNAH_OFFSET UNITYSDK_OFFSET(0x1344EA60)
#define DPNOFFICKDK_MAADHCNDNKD_OFFSET UNITYSDK_OFFSET(0x1344E7F0)
#define DPNOFFICKDK_MCIEAAFMDDB_OFFSET UNITYSDK_OFFSET(0x1344DD80)
#define DPNOFFICKDK_NMIFEJAGNOI_OFFSET UNITYSDK_OFFSET(0x1344EC80)
#define DPNOFFICKDK_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1344EC30)
#define DPNOFFICKDK_PPIANDILJGL_OFFSET UNITYSDK_OFFSET(0x1344E5A0)
#define DPNOFFICKDK_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1344EE50)
#define DPNOFFICKDK_SET_ROWCONFIG_OFFSET UNITYSDK_OFFSET(0x1344EE70)
#define DPNOFFICKDK__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x1344DCE0)

inline static constexpr unsigned int DPNOFFICKDK_TypeDefinitionIndex = 58832;

	class DPNOFFICKDK : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::String* _Description_k__BackingField; // 0x18
		::RPG::GameCore::BattleActionEventRow* _RowConfig_k__BackingField; // 0x20
		::RPG::GameCore::GameEntity* IBDCHIILKHM; // 0x28
		::System::Collections::Generic::HashSet_1<::System::Int32>* CKAJEBHOOJA; // 0x30
		::System::Int32 AFGLAPDLALA; // 0x38
		::System::Int32 CEIMGGJALKE; // 0x3C
		::System::UInt32 NKGKEPMKAHK; // 0x40
		::System::Int32 EJEDLCHMFJJ; // 0x44
		::RPG::GameCore::ActionCountDownPreviewMode AILMFCFEECI; // 0x48
		::System::Int32 HFCIMAIGPFC; // 0x4C
		::System::Boolean FGHLHLEPKPF; // 0x50
		::System::Boolean BBLMMNLCMGM; // 0x51
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNOFFICKDK_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNOFFICKDK__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNOFFICKDK_DISPOSE_OFFSET))(this);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DPNOFFICKDK_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void DFABOAEOGEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNOFFICKDK_DFABOAEOGEK_OFFSET))(this);
		}

		::System::Void JKKJLNKHJPD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNOFFICKDK_JKKJLNKHJPD_OFFSET))(this);
		}

		::System::Void CNNHGHJHEGG(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + DPNOFFICKDK_CNNHGHJHEGG_OFFSET))(this, a1);
		}

		::System::Void MAADHCNDNKD(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + DPNOFFICKDK_MAADHCNDNKD_OFFSET))(this, a1);
		}

		::System::Void CFKJFAHIJBF(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + DPNOFFICKDK_CFKJFAHIJBF_OFFSET))(this, a1);
		}

		::System::Void CAIECOBCEBK(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + DPNOFFICKDK_CAIECOBCEBK_OFFSET))(this, a1);
		}

		::System::Void PPIANDILJGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNOFFICKDK_PPIANDILJGL_OFFSET))(this);
		}

		::System::Void KONPOBEMNAH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DPNOFFICKDK_KONPOBEMNAH_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DPNOFFICKDK_KHGIKBFDLFB_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNOFFICKDK_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void NMIFEJAGNOI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DPNOFFICKDK_NMIFEJAGNOI_OFFSET))(this, a1);
		}

		::System::UInt32 MCIEAAFMDDB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNOFFICKDK_MCIEAAFMDDB_OFFSET))(this);
		}

		::System::Boolean KMJOOPCJMPP(::BJNFCAGBOJO a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::BJNFCAGBOJO, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + DPNOFFICKDK_KMJOOPCJMPP_OFFSET))(this, a1, a2, a3);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNOFFICKDK_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Void set_Description(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DPNOFFICKDK_SET_DESCRIPTION_OFFSET))(this, a1);
		}

		::RPG::GameCore::BattleActionEventRow* get_RowConfig()
		{
			return ((::RPG::GameCore::BattleActionEventRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNOFFICKDK_GET_ROWCONFIG_OFFSET))(this);
		}

		::System::Void set_RowConfig(::RPG::GameCore::BattleActionEventRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleActionEventRow*))((::PBYTE)hIl2Cpp + DPNOFFICKDK_SET_ROWCONFIG_OFFSET))(this, a1);
		}

	};
