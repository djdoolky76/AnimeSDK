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

#define DPNOFFICKDK_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x12659780)
#define DPNOFFICKDK_CAIECOBCEBK_OFFSET UNITYSDK_OFFSET(0x1265A000)
#define DPNOFFICKDK_CFKJFAHIJBF_OFFSET UNITYSDK_OFFSET(0x12659F50)
#define DPNOFFICKDK_CNNHGHJHEGG_OFFSET UNITYSDK_OFFSET(0x12659AF0)
#define DPNOFFICKDK_CTOR_OFFSET UNITYSDK_OFFSET(0x12659360)
#define DPNOFFICKDK_DFABOAEOGEK_OFFSET UNITYSDK_OFFSET(0x126595A0)
#define DPNOFFICKDK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12659860)
#define DPNOFFICKDK_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1265A500)
#define DPNOFFICKDK_GET_ROWCONFIG_OFFSET UNITYSDK_OFFSET(0x1265A520)
#define DPNOFFICKDK_JKKJLNKHJPD_OFFSET UNITYSDK_OFFSET(0x126598C0)
#define DPNOFFICKDK_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x12659AA0)
#define DPNOFFICKDK_KMJOOPCJMPP_OFFSET UNITYSDK_OFFSET(0x1265A3D0)
#define DPNOFFICKDK_KONPOBEMNAH_OFFSET UNITYSDK_OFFSET(0x1265A120)
#define DPNOFFICKDK_MAADHCNDNKD_OFFSET UNITYSDK_OFFSET(0x12659EB0)
#define DPNOFFICKDK_MCIEAAFMDDB_OFFSET UNITYSDK_OFFSET(0x12659440)
#define DPNOFFICKDK_NMIFEJAGNOI_OFFSET UNITYSDK_OFFSET(0x1265A340)
#define DPNOFFICKDK_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1265A2F0)
#define DPNOFFICKDK_PPIANDILJGL_OFFSET UNITYSDK_OFFSET(0x12659C60)
#define DPNOFFICKDK_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1265A510)
#define DPNOFFICKDK_SET_ROWCONFIG_OFFSET UNITYSDK_OFFSET(0x1265A530)
#define DPNOFFICKDK__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x126593A0)

inline static constexpr unsigned int DPNOFFICKDK_TypeDefinitionIndex = 57604;

	class DPNOFFICKDK : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::String* _Description_k__BackingField; // 0x18
		::RPG::GameCore::BattleActionEventRow* _RowConfig_k__BackingField; // 0x20
		::System::Collections::Generic::HashSet_1<::System::Int32>* CKAJEBHOOJA; // 0x28
		::RPG::GameCore::GameEntity* IBDCHIILKHM; // 0x30
		::System::UInt32 NKGKEPMKAHK; // 0x38
		::RPG::GameCore::ActionCountDownPreviewMode AILMFCFEECI; // 0x3C
		::System::Int32 AFGLAPDLALA; // 0x40
		::System::Int32 HFCIMAIGPFC; // 0x44
		::System::Int32 EJEDLCHMFJJ; // 0x48
		::System::Int32 CEIMGGJALKE; // 0x4C
		::System::Boolean BBLMMNLCMGM; // 0x50
		::System::Boolean FGHLHLEPKPF; // 0x51
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
