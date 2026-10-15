#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFEEHFMJOKD;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PBLNMBHCNLJ_BHAGJFENANJ_OFFSET UNITYSDK_OFFSET(0xBFF37E0)
#define PBLNMBHCNLJ_CDACFPAGJHD_OFFSET UNITYSDK_OFFSET(0xBFF3530)
#define PBLNMBHCNLJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBFF2AC0)
#define PBLNMBHCNLJ_DLCBMKDODJN_OFFSET UNITYSDK_OFFSET(0xBFF3240)
#define PBLNMBHCNLJ_EHHOGHNHPAP_OFFSET UNITYSDK_OFFSET(0xBFF2D70)
#define PBLNMBHCNLJ_GBEOGGFIBKF_OFFSET UNITYSDK_OFFSET(0xBFF3FC0)
#define PBLNMBHCNLJ_GICAPMJNKGL_OFFSET UNITYSDK_OFFSET(0xBFF2C90)
#define PBLNMBHCNLJ_GPFBCFBMEMO_OFFSET UNITYSDK_OFFSET(0xBFF3D40)
#define PBLNMBHCNLJ_HDADHIOIIIK_OFFSET UNITYSDK_OFFSET(0xBFF48C0)
#define PBLNMBHCNLJ_JHOAPOONELO_OFFSET UNITYSDK_OFFSET(0xBFF4980)
#define PBLNMBHCNLJ_KJHGNODFKFI_OFFSET UNITYSDK_OFFSET(0xBFF49D0)
#define PBLNMBHCNLJ_NLOBHMDMEJK_OFFSET UNITYSDK_OFFSET(0xBFF32D0)

inline static constexpr unsigned int PBLNMBHCNLJ_TypeDefinitionIndex = 56035;

	class PBLNMBHCNLJ : public ::System::Object
	{
	public:
		::RPG::GameCore::TurnBasedGameMode* JADHLODNADK; // 0x10
		::RPG::GameCore::GameEntity* MLBFDIILODJ; // 0x18
		::KFEEHFMJOKD* GIJDAPAPDHF; // 0x20
		::System::Collections::Generic::List_1<::KFEEHFMJOKD*>* FFALOJLNCHJ; // 0x28
		::System::Int32 MLNJJDKMEMF; // 0x30
		::System::Int32 PFGEKJCDKNL; // 0x34
		// static const ::System::String* CPKLGNCAMHN; // 0x0
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + PBLNMBHCNLJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void GICAPMJNKGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBLNMBHCNLJ_GICAPMJNKGL_OFFSET))(this);
		}

		::KFEEHFMJOKD* DLCBMKDODJN(::System::Int32 a1)
		{
			return ((::KFEEHFMJOKD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PBLNMBHCNLJ_DLCBMKDODJN_OFFSET))(this, a1);
		}

		::System::Void NLOBHMDMEJK(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + PBLNMBHCNLJ_NLOBHMDMEJK_OFFSET))(this, a1, a2);
		}

		::System::Void BHAGJFENANJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBLNMBHCNLJ_BHAGJFENANJ_OFFSET))(this);
		}

		::System::Void GPFBCFBMEMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBLNMBHCNLJ_GPFBCFBMEMO_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GBEOGGFIBKF()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBLNMBHCNLJ_GBEOGGFIBKF_OFFSET))(this);
		}

		::System::Void HDADHIOIIIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBLNMBHCNLJ_HDADHIOIIIK_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* EHHOGHNHPAP(::KFEEHFMJOKD* a1, ::System::Boolean a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::KFEEHFMJOKD*, ::System::Boolean))((::PBYTE)hIl2Cpp + PBLNMBHCNLJ_EHHOGHNHPAP_OFFSET))(this, a1, a2);
		}

		::KFEEHFMJOKD* CDACFPAGJHD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::KFEEHFMJOKD*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PBLNMBHCNLJ_CDACFPAGJHD_OFFSET))(this, a1);
		}

		::System::Int32 JHOAPOONELO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBLNMBHCNLJ_JHOAPOONELO_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* KJHGNODFKFI()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBLNMBHCNLJ_KJHGNODFKFI_OFFSET))(this);
		}

	};
