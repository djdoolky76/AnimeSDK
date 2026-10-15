#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LDLCIEJKBNH_ReplayOldestResult.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingEffectRemoveReason.h"
#include "unitysdk/RPG/Client/TriggerEffectParamsRef.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleEffectLifeTimeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class ALMFLCJCHKP;
class FLDCOAJPMEP;
class KHNIAFDBHCD;
class LDLCIEJKBNH_OFMKBFBJDAO;
class OMNJCDDMLHI;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::GameCore { class ChenLingBattleEffectConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define LDLCIEJKBNH_APBDACELPEF_OFFSET UNITYSDK_OFFSET(0xB6328B0)
#define LDLCIEJKBNH_BEIPHHKFHCK_OFFSET UNITYSDK_OFFSET(0xB6356A0)
#define LDLCIEJKBNH_BGEBEKMJIPD_OFFSET UNITYSDK_OFFSET(0xB631F00)
#define LDLCIEJKBNH_CPNEMOBKHEL_OFFSET UNITYSDK_OFFSET(0xB6344E0)
#define LDLCIEJKBNH_CTOR_OFFSET UNITYSDK_OFFSET(0xB6309B0)
#define LDLCIEJKBNH_DPKGMOFJDPG_OFFSET UNITYSDK_OFFSET(0xB6348E0)
#define LDLCIEJKBNH_FNANPPAGLIF_OFFSET UNITYSDK_OFFSET(0xB633FD0)
#define LDLCIEJKBNH_GOPDCOOEBBA_OFFSET UNITYSDK_OFFSET(0xB632490)
#define LDLCIEJKBNH_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB631000)
#define LDLCIEJKBNH_HDBCOLDGNEI_OFFSET UNITYSDK_OFFSET(0xB631D50)
#define LDLCIEJKBNH_INCHKLCPAOD_OFFSET UNITYSDK_OFFSET(0xB630950)
#define LDLCIEJKBNH_JIJNOPCPOEF_OFFSET UNITYSDK_OFFSET(0xB633050)
#define LDLCIEJKBNH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB631EB0)
#define LDLCIEJKBNH_JLIMIJFLOPO_OFFSET UNITYSDK_OFFSET(0xB6335D0)
#define LDLCIEJKBNH_KBMDPKFIHIH_1_OFFSET UNITYSDK_OFFSET(0xB6358B0)
#define LDLCIEJKBNH_KBMDPKFIHIH_OFFSET UNITYSDK_OFFSET(0xB634D40)
#define LDLCIEJKBNH_LGAAPOLJIMK_OFFSET UNITYSDK_OFFSET(0xB630940)
#define LDLCIEJKBNH_LMDNLMIAEAP_OFFSET UNITYSDK_OFFSET(0xB634F30)
#define LDLCIEJKBNH_LPOBAPPMDAM_OFFSET UNITYSDK_OFFSET(0xB633C70)
#define LDLCIEJKBNH_NJMOCEKCJPK_OFFSET UNITYSDK_OFFSET(0xB632140)
#define LDLCIEJKBNH_NMDDHCFBDMN_OFFSET UNITYSDK_OFFSET(0xB634630)
#define LDLCIEJKBNH_OBFHLCLHHFN_OFFSET UNITYSDK_OFFSET(0xB635950)
#define LDLCIEJKBNH_OCJHFIOFDIA_OFFSET UNITYSDK_OFFSET(0xB633320)
#define LDLCIEJKBNH_OHLPNMKCIFI_OFFSET UNITYSDK_OFFSET(0xB634770)
#define LDLCIEJKBNH_OIPCIGEEIHL_OFFSET UNITYSDK_OFFSET(0xB632C60)

inline static constexpr unsigned int LDLCIEJKBNH_TypeDefinitionIndex = 77809;

	class LDLCIEJKBNH : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* GGLCDLGHDLL; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::String*>, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* AJKKAKMLHND; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::Client::MonoEffect*, ::System::UInt32>* IJEJEGFJACH; // 0x20
		::KHNIAFDBHCD* HMKJADKFFEF; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* GIFBCMHFGFM; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TriggerEffectParamsRef>* NEBGLFDCODO; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::String*>, ::System::Collections::Generic::LinkedList_1<::RPG::Client::MonoEffect*>*>* NKDNNHIPHFF; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::LittleGame::ChenLing::ChenLingEffectRemoveReason>* MOPAAKDPILE; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::LinkedListNode_1<::RPG::Client::MonoEffect*>*>* CGHPJDOGGAG; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::String*>, ::System::Collections::Generic::HashSet_1<::RPG::Client::MonoEffect*>*>* DJKCDMJGLIP; // 0x58
		::OMNJCDDMLHI* FKINCGODJEP; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::ValueTuple_2<::RPG::GameCore::ChenLingBattleEffectConfig*, ::System::Int32>>* AHDCNHCPKAP; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::ValueTuple_2<::System::Int32, ::System::String*>>* JFMJKAGKGPC; // 0x70
		::System::Boolean PPIGLCIEIIM; // 0x78
		::System::Void _ctor(::OMNJCDDMLHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMNJCDDMLHI*))((::PBYTE)hIl2Cpp + LDLCIEJKBNH_CTOR_OFFSET))(this, a1);
		}

		::KHNIAFDBHCD* LGAAPOLJIMK()
		{
			return ((::KHNIAFDBHCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLCIEJKBNH_LGAAPOLJIMK_OFFSET))(this);
		}

		::FLDCOAJPMEP* INCHKLCPAOD(::System::Int32 a1)
		{
			return ((::FLDCOAJPMEP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LDLCIEJKBNH_INCHKLCPAOD_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLCIEJKBNH_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + LDLCIEJKBNH_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::RPG::Client::MonoEffect* BGEBEKMJIPD(::ALMFLCJCHKP* a1, ::RPG::GameCore::ChenLingBattleEffectConfig* a2, ::LDLCIEJKBNH_OFMKBFBJDAO* a3)
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::ALMFLCJCHKP*, ::RPG::GameCore::ChenLingBattleEffectConfig*, ::LDLCIEJKBNH_OFMKBFBJDAO*))((::PBYTE)hIl2Cpp + LDLCIEJKBNH_BGEBEKMJIPD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JIJNOPCPOEF(::ALMFLCJCHKP* a1, ::RPG::GameCore::ChenLingBattleEffectConfig* a2, ::RPG::Client::MonoEffect* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::RPG::GameCore::ChenLingBattleEffectConfig*, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + LDLCIEJKBNH_JIJNOPCPOEF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LPOBAPPMDAM(::ALMFLCJCHKP* a1, ::RPG::GameCore::ChenLingBattleEffectConfig* a2, ::LDLCIEJKBNH_OFMKBFBJDAO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::RPG::GameCore::ChenLingBattleEffectConfig*, ::LDLCIEJKBNH_OFMKBFBJDAO*))((::PBYTE)hIl2Cpp + LDLCIEJKBNH_LPOBAPPMDAM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FNANPPAGLIF(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + LDLCIEJKBNH_FNANPPAGLIF_OFFSET))(this, a1);
		}

		::System::Void HDBCOLDGNEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLCIEJKBNH_HDBCOLDGNEI_OFFSET))(this);
		}

		::UnityEngine::Transform* NJMOCEKCJPK(::ALMFLCJCHKP* a1, ::System::String* a2)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::ALMFLCJCHKP*, ::System::String*))((::PBYTE)hIl2Cpp + LDLCIEJKBNH_NJMOCEKCJPK_OFFSET))(this, a1, a2);
		}

		::System::Void NMDDHCFBDMN(::ALMFLCJCHKP* a1, ::RPG::GameCore::ChenLingBattleEffectLifeTimeType a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::RPG::GameCore::ChenLingBattleEffectLifeTimeType))((::PBYTE)hIl2Cpp + LDLCIEJKBNH_NMDDHCFBDMN_OFFSET))(this, a1, a2);
		}

		::System::Void OHLPNMKCIFI(::ALMFLCJCHKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + LDLCIEJKBNH_OHLPNMKCIFI_OFFSET))(this, a1);
		}

		::System::Void CPNEMOBKHEL(::System::UInt32 a1, ::RPG::Client::LittleGame::ChenLing::ChenLingEffectRemoveReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGame::ChenLing::ChenLingEffectRemoveReason))((::PBYTE)hIl2Cpp + LDLCIEJKBNH_CPNEMOBKHEL_OFFSET))(this, a1, a2);
		}

		::System::Boolean OIPCIGEEIHL(::ALMFLCJCHKP* a1, ::RPG::GameCore::ChenLingBattleEffectConfig* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALMFLCJCHKP*, ::RPG::GameCore::ChenLingBattleEffectConfig*))((::PBYTE)hIl2Cpp + LDLCIEJKBNH_OIPCIGEEIHL_OFFSET))(this, a1, a2);
		}

		::System::Void OCJHFIOFDIA(::ALMFLCJCHKP* a1, ::RPG::GameCore::ChenLingBattleEffectConfig* a2, ::RPG::Client::MonoEffect* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::RPG::GameCore::ChenLingBattleEffectConfig*, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + LDLCIEJKBNH_OCJHFIOFDIA_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::TriggerEffectParamsRef GOPDCOOEBBA(::ALMFLCJCHKP* a1, ::RPG::GameCore::ChenLingBattleEffectConfig* a2, ::LDLCIEJKBNH_OFMKBFBJDAO* a3)
		{
			return ((::RPG::Client::TriggerEffectParamsRef(*)(::PVOID, ::ALMFLCJCHKP*, ::RPG::GameCore::ChenLingBattleEffectConfig*, ::LDLCIEJKBNH_OFMKBFBJDAO*))((::PBYTE)hIl2Cpp + LDLCIEJKBNH_GOPDCOOEBBA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BEIPHHKFHCK(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + LDLCIEJKBNH_BEIPHHKFHCK_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::System::Int32, ::System::String*> KBMDPKFIHIH(::ALMFLCJCHKP* a1, ::RPG::GameCore::ChenLingBattleEffectConfig* a2)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::String*>(*)(::PVOID, ::ALMFLCJCHKP*, ::RPG::GameCore::ChenLingBattleEffectConfig*))((::PBYTE)hIl2Cpp + LDLCIEJKBNH_KBMDPKFIHIH_OFFSET))(this, a1, a2);
		}

		::System::ValueTuple_2<::System::Int32, ::System::String*> KBMDPKFIHIH_1(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::String*>(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + LDLCIEJKBNH_KBMDPKFIHIH_1_OFFSET))(this, a1, a2);
		}

		::LDLCIEJKBNH_ReplayOldestResult APBDACELPEF(::ALMFLCJCHKP* a1, ::RPG::GameCore::ChenLingBattleEffectConfig* a2, ::RPG::Client::TriggerEffectParams* a3, ::RPG::Client::MonoEffect* a4)
		{
			return ((::LDLCIEJKBNH_ReplayOldestResult(*)(::PVOID, ::ALMFLCJCHKP*, ::RPG::GameCore::ChenLingBattleEffectConfig*, ::RPG::Client::TriggerEffectParams*, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + LDLCIEJKBNH_APBDACELPEF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean OBFHLCLHHFN(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + LDLCIEJKBNH_OBFHLCLHHFN_OFFSET))(this, a1);
		}

		::System::Void JLIMIJFLOPO(::ALMFLCJCHKP* a1, ::RPG::GameCore::ChenLingBattleEffectConfig* a2, ::RPG::Client::MonoEffect* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::RPG::GameCore::ChenLingBattleEffectConfig*, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + LDLCIEJKBNH_JLIMIJFLOPO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DPKGMOFJDPG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDLCIEJKBNH_DPKGMOFJDPG_OFFSET))(this, a1);
		}

		::System::Void LMDNLMIAEAP(::System::ValueTuple_2<::System::Int32, ::System::String*> a1, ::System::Collections::Generic::LinkedList_1<::RPG::Client::MonoEffect*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::String*>, ::System::Collections::Generic::LinkedList_1<::RPG::Client::MonoEffect*>*))((::PBYTE)hIl2Cpp + LDLCIEJKBNH_LMDNLMIAEAP_OFFSET))(this, a1, a2);
		}

	};
