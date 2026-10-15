#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LDLCIEJKBNH_ReplayOldestResult.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingEffectRemoveReason.h"
#include "unitysdk/RPG/Client/TriggerEffectParamsRef.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleEffectLifeTimeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
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

#define LDLCIEJKBNH_APBDACELPEF_OFFSET UNITYSDK_OFFSET(0xB6393D0)
#define LDLCIEJKBNH_BEIPHHKFHCK_OFFSET UNITYSDK_OFFSET(0xB63C1C0)
#define LDLCIEJKBNH_BGEBEKMJIPD_OFFSET UNITYSDK_OFFSET(0xB638A20)
#define LDLCIEJKBNH_CPNEMOBKHEL_OFFSET UNITYSDK_OFFSET(0xB63B000)
#define LDLCIEJKBNH_CTOR_OFFSET UNITYSDK_OFFSET(0xB6374D0)
#define LDLCIEJKBNH_DPKGMOFJDPG_OFFSET UNITYSDK_OFFSET(0xB63B400)
#define LDLCIEJKBNH_FNANPPAGLIF_OFFSET UNITYSDK_OFFSET(0xB63AAF0)
#define LDLCIEJKBNH_GOPDCOOEBBA_OFFSET UNITYSDK_OFFSET(0xB638FB0)
#define LDLCIEJKBNH_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB637B20)
#define LDLCIEJKBNH_HDBCOLDGNEI_OFFSET UNITYSDK_OFFSET(0xB638870)
#define LDLCIEJKBNH_INCHKLCPAOD_OFFSET UNITYSDK_OFFSET(0xB637470)
#define LDLCIEJKBNH_JIJNOPCPOEF_OFFSET UNITYSDK_OFFSET(0xB639B70)
#define LDLCIEJKBNH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB6389D0)
#define LDLCIEJKBNH_JLIMIJFLOPO_OFFSET UNITYSDK_OFFSET(0xB63A0F0)
#define LDLCIEJKBNH_KBMDPKFIHIH_1_OFFSET UNITYSDK_OFFSET(0xB63C3D0)
#define LDLCIEJKBNH_KBMDPKFIHIH_OFFSET UNITYSDK_OFFSET(0xB63B860)
#define LDLCIEJKBNH_LGAAPOLJIMK_OFFSET UNITYSDK_OFFSET(0xB637460)
#define LDLCIEJKBNH_LMDNLMIAEAP_OFFSET UNITYSDK_OFFSET(0xB63BA50)
#define LDLCIEJKBNH_LPOBAPPMDAM_OFFSET UNITYSDK_OFFSET(0xB63A790)
#define LDLCIEJKBNH_NJMOCEKCJPK_OFFSET UNITYSDK_OFFSET(0xB638C60)
#define LDLCIEJKBNH_NMDDHCFBDMN_OFFSET UNITYSDK_OFFSET(0xB63B150)
#define LDLCIEJKBNH_OBFHLCLHHFN_OFFSET UNITYSDK_OFFSET(0xB63C470)
#define LDLCIEJKBNH_OCJHFIOFDIA_OFFSET UNITYSDK_OFFSET(0xB639E40)
#define LDLCIEJKBNH_OHLPNMKCIFI_OFFSET UNITYSDK_OFFSET(0xB63B290)
#define LDLCIEJKBNH_OIPCIGEEIHL_OFFSET UNITYSDK_OFFSET(0xB639780)

inline static constexpr unsigned int LDLCIEJKBNH_TypeDefinitionIndex = 77810;

	class LDLCIEJKBNH : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* GGLCDLGHDLL; // 0x10
		::KHNIAFDBHCD* HMKJADKFFEF; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::LinkedListNode_1<::RPG::Client::MonoEffect*>*>* CGHPJDOGGAG; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::System::Collections::Generic::LinkedList_1<::RPG::Client::MonoEffect*>*>* NKDNNHIPHFF; // 0x28
		::OMNJCDDMLHI* FKINCGODJEP; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* AJKKAKMLHND; // 0x38
		::System::Collections::Generic::Dictionary_2<::RPG::Client::MonoEffect*, ::System::UInt32>* IJEJEGFJACH; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::ValueTuple>* AHDCNHCPKAP; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* GIFBCMHFGFM; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::System::Collections::Generic::HashSet_1<::RPG::Client::MonoEffect*>*>* DJKCDMJGLIP; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::LittleGame::ChenLing::ChenLingEffectRemoveReason>* MOPAAKDPILE; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::ValueTuple>* JFMJKAGKGPC; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TriggerEffectParamsRef>* NEBGLFDCODO; // 0x70
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

		::System::ValueTuple KBMDPKFIHIH(::ALMFLCJCHKP* a1, ::RPG::GameCore::ChenLingBattleEffectConfig* a2)
		{
			return ((::System::ValueTuple(*)(::PVOID, ::ALMFLCJCHKP*, ::RPG::GameCore::ChenLingBattleEffectConfig*))((::PBYTE)hIl2Cpp + LDLCIEJKBNH_KBMDPKFIHIH_OFFSET))(this, a1, a2);
		}

		::System::ValueTuple KBMDPKFIHIH_1(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::ValueTuple(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + LDLCIEJKBNH_KBMDPKFIHIH_1_OFFSET))(this, a1, a2);
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

		::System::Void LMDNLMIAEAP(::System::ValueTuple a1, ::System::Collections::Generic::LinkedList_1<::RPG::Client::MonoEffect*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple, ::System::Collections::Generic::LinkedList_1<::RPG::Client::MonoEffect*>*))((::PBYTE)hIl2Cpp + LDLCIEJKBNH_LMDNLMIAEAP_OFFSET))(this, a1, a2);
		}

	};
