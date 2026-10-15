#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JCGMEMPGFNL_DBNEGGIJKBF.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class DEEJKBIMHAA;
class GIALNIAHMKA;
namespace RPG::GameCore { class StageBattleEventConfig; }
namespace RPG::GameCore { class StageBattleEventRow; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JCGMEMPGFNL_AFAHCJFIPED_OFFSET UNITYSDK_OFFSET(0x1657C390)
#define JCGMEMPGFNL_AIMDOIAAFHI_OFFSET UNITYSDK_OFFSET(0x1657B880)
#define JCGMEMPGFNL_BJAJCOBHDCI_OFFSET UNITYSDK_OFFSET(0x1657CC90)
#define JCGMEMPGFNL_CDFFPDALIAG_OFFSET UNITYSDK_OFFSET(0x1657BFE0)
#define JCGMEMPGFNL_CTOR_OFFSET UNITYSDK_OFFSET(0x1657B480)
#define JCGMEMPGFNL_FMMAEGOMBGE_OFFSET UNITYSDK_OFFSET(0x1657B610)
#define JCGMEMPGFNL_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1657B4E0)
#define JCGMEMPGFNL_HBFNEJGGIDM_OFFSET UNITYSDK_OFFSET(0x1657C940)
#define JCGMEMPGFNL_JLBEBOCIKIK_OFFSET UNITYSDK_OFFSET(0x1657C610)
#define JCGMEMPGFNL_JNBLJNFHKHA_OFFSET UNITYSDK_OFFSET(0x1657B530)
#define JCGMEMPGFNL_LICKCDCJOBJ_OFFSET UNITYSDK_OFFSET(0x1657BDA0)
#define JCGMEMPGFNL_MEEKOKHBGKJ_OFFSET UNITYSDK_OFFSET(0x1657C160)
#define JCGMEMPGFNL_NNLOKGOGIEL_OFFSET UNITYSDK_OFFSET(0x1657B930)
#define JCGMEMPGFNL_PDFEBDHBEBL_OFFSET UNITYSDK_OFFSET(0x1657CC80)

inline static constexpr unsigned int JCGMEMPGFNL_TypeDefinitionIndex = 56201;

	class JCGMEMPGFNL : public ::System::Object
	{
	public:
		::RPG::GameCore::TurnBasedGameMode* JADHLODNADK; // 0x10
		::GIALNIAHMKA* IIBGMIBHKIL; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* JBMELFANIHE; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* JPGFNNHMNFL; // 0x28
		::System::Int32 NFLBACCMILF; // 0x30
		// static const ::System::Object DDENOMCPHNC; // 0x0
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + JCGMEMPGFNL_CTOR_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCGMEMPGFNL_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void FMMAEGOMBGE(::Il2CppArray<::RPG::GameCore::StageBattleEventConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::StageBattleEventConfig*>*))((::PBYTE)hIl2Cpp + JCGMEMPGFNL_FMMAEGOMBGE_OFFSET))(this, a1);
		}

		::System::Void NNLOKGOGIEL(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JCGMEMPGFNL_NNLOKGOGIEL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CDFFPDALIAG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JCGMEMPGFNL_CDFFPDALIAG_OFFSET))(this, a1);
		}

		::System::Void MEEKOKHBGKJ(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + JCGMEMPGFNL_MEEKOKHBGKJ_OFFSET))(this, a1, a2);
		}

		::System::Void JNBLJNFHKHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCGMEMPGFNL_JNBLJNFHKHA_OFFSET))(this);
		}

		::System::Void AIMDOIAAFHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCGMEMPGFNL_AIMDOIAAFHI_OFFSET))(this);
		}

		::System::Void LICKCDCJOBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCGMEMPGFNL_LICKCDCJOBJ_OFFSET))(this);
		}

		::System::Void AFAHCJFIPED(::RPG::GameCore::StageBattleEventRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageBattleEventRow*))((::PBYTE)hIl2Cpp + JCGMEMPGFNL_AFAHCJFIPED_OFFSET))(this, a1);
		}

		::System::Void JLBEBOCIKIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCGMEMPGFNL_JLBEBOCIKIK_OFFSET))(this);
		}

		::System::Void HBFNEJGGIDM(::JCGMEMPGFNL_DBNEGGIJKBF a1, ::DEEJKBIMHAA* a2, ::System::Int32 a3, ::System::Int32 a4, ::RPG::GameCore::FixPoint a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::JCGMEMPGFNL_DBNEGGIJKBF, ::DEEJKBIMHAA*, ::System::Int32, ::System::Int32, ::RPG::GameCore::FixPoint, ::System::Int32))((::PBYTE)hIl2Cpp + JCGMEMPGFNL_HBFNEJGGIDM_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Collections::Generic::List_1<::System::Object*>* PDFEBDHBEBL()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCGMEMPGFNL_PDFEBDHBEBL_OFFSET))(this);
		}

		::GIALNIAHMKA* BJAJCOBHDCI()
		{
			return ((::GIALNIAHMKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCGMEMPGFNL_BJAJCOBHDCI_OFFSET))(this);
		}

	};
