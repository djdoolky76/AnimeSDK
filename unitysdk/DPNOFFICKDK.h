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

#define DPNOFFICKDK_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x181B3980)
#define DPNOFFICKDK_CAIECOBCEBK_OFFSET UNITYSDK_OFFSET(0x181B4200)
#define DPNOFFICKDK_CFKJFAHIJBF_OFFSET UNITYSDK_OFFSET(0x181B4150)
#define DPNOFFICKDK_CNNHGHJHEGG_OFFSET UNITYSDK_OFFSET(0x181B3CF0)
#define DPNOFFICKDK_CTOR_OFFSET UNITYSDK_OFFSET(0x181B3560)
#define DPNOFFICKDK_DFABOAEOGEK_OFFSET UNITYSDK_OFFSET(0x181B37A0)
#define DPNOFFICKDK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x181B3A60)
#define DPNOFFICKDK_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x181B4700)
#define DPNOFFICKDK_GET_ROWCONFIG_OFFSET UNITYSDK_OFFSET(0x181B4720)
#define DPNOFFICKDK_JKKJLNKHJPD_OFFSET UNITYSDK_OFFSET(0x181B3AC0)
#define DPNOFFICKDK_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x181B3CA0)
#define DPNOFFICKDK_KMJOOPCJMPP_OFFSET UNITYSDK_OFFSET(0x181B45D0)
#define DPNOFFICKDK_KONPOBEMNAH_OFFSET UNITYSDK_OFFSET(0x181B4320)
#define DPNOFFICKDK_MAADHCNDNKD_OFFSET UNITYSDK_OFFSET(0x181B40B0)
#define DPNOFFICKDK_MCIEAAFMDDB_OFFSET UNITYSDK_OFFSET(0x181B3640)
#define DPNOFFICKDK_NMIFEJAGNOI_OFFSET UNITYSDK_OFFSET(0x181B4540)
#define DPNOFFICKDK_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x181B44F0)
#define DPNOFFICKDK_PPIANDILJGL_OFFSET UNITYSDK_OFFSET(0x181B3E60)
#define DPNOFFICKDK_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x181B4710)
#define DPNOFFICKDK_SET_ROWCONFIG_OFFSET UNITYSDK_OFFSET(0x181B4730)
#define DPNOFFICKDK__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x181B35A0)

inline static constexpr unsigned int DPNOFFICKDK_TypeDefinitionIndex = 58832;

	class DPNOFFICKDK : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Int32>* CKAJEBHOOJA; // 0x18
		::System::String* _Description_k__BackingField; // 0x20
		::RPG::GameCore::BattleActionEventRow* _RowConfig_k__BackingField; // 0x28
		::RPG::GameCore::GameEntity* IBDCHIILKHM; // 0x30
		::System::Int32 CEIMGGJALKE; // 0x38
		::System::Boolean FGHLHLEPKPF; // 0x3C
		::System::Boolean BBLMMNLCMGM; // 0x3D
		::System::Byte _padding0[0x2];
		::System::Int32 AFGLAPDLALA; // 0x40
		::System::UInt32 NKGKEPMKAHK; // 0x44
		::RPG::GameCore::ActionCountDownPreviewMode AILMFCFEECI; // 0x48
		::System::Int32 EJEDLCHMFJJ; // 0x4C
		::System::Int32 HFCIMAIGPFC; // 0x50
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
