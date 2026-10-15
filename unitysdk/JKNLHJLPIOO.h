#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class BNBOAMEBAOE;
class GELIALJDFBL;
class JKNLHJLPIOO_DDDFPPAEHJP;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JKNLHJLPIOO_BFGFIDNBNDG_OFFSET UNITYSDK_OFFSET(0xB224620)
#define JKNLHJLPIOO_CCLOABELDPG_OFFSET UNITYSDK_OFFSET(0xB1FEB10)
#define JKNLHJLPIOO_CCTOR_OFFSET UNITYSDK_OFFSET(0xB2269E0)
#define JKNLHJLPIOO_COHEKBEKDBM_OFFSET UNITYSDK_OFFSET(0xB225410)
#define JKNLHJLPIOO_DCADIANHPFD_1_OFFSET UNITYSDK_OFFSET(0xB225970)
#define JKNLHJLPIOO_DCADIANHPFD_OFFSET UNITYSDK_OFFSET(0xB1FEF30)
#define JKNLHJLPIOO_DEAFDHPMONM_OFFSET UNITYSDK_OFFSET(0xB223AF0)
#define JKNLHJLPIOO_DOCMPJHBLFC_OFFSET UNITYSDK_OFFSET(0xB223EA0)
#define JKNLHJLPIOO_ELEPDOMDAGA_1_OFFSET UNITYSDK_OFFSET(0xB2258F0)
#define JKNLHJLPIOO_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xB225460)
#define JKNLHJLPIOO_FANABGMCGMJ_OFFSET UNITYSDK_OFFSET(0xB224790)
#define JKNLHJLPIOO_FCLLGLNIHBK_OFFSET UNITYSDK_OFFSET(0xB226450)
#define JKNLHJLPIOO_IEOEFBAPBPB_OFFSET UNITYSDK_OFFSET(0xB226940)
#define JKNLHJLPIOO_IOGKJMBIKBP_OFFSET UNITYSDK_OFFSET(0xB225A40)
#define JKNLHJLPIOO_IOJMJBCAADB_OFFSET UNITYSDK_OFFSET(0xB1EA7F0)
#define JKNLHJLPIOO_KJCNEJALIJO_OFFSET UNITYSDK_OFFSET(0xB225B30)
#define JKNLHJLPIOO_LFKJJELMNPK_1_OFFSET UNITYSDK_OFFSET(0xB225930)
#define JKNLHJLPIOO_LFKJJELMNPK_OFFSET UNITYSDK_OFFSET(0xB2254B0)
#define JKNLHJLPIOO_LILPJBOBLBP_OFFSET UNITYSDK_OFFSET(0xB225420)
#define JKNLHJLPIOO_LKKJHKDANEE_OFFSET UNITYSDK_OFFSET(0xB2252B0)
#define JKNLHJLPIOO_MHBNBLKADHP_OFFSET UNITYSDK_OFFSET(0xB225500)
#define JKNLHJLPIOO_OECIHKHGCFD_1_OFFSET UNITYSDK_OFFSET(0xB2259D0)
#define JKNLHJLPIOO_OECIHKHGCFD_OFFSET UNITYSDK_OFFSET(0xB225860)
#define JKNLHJLPIOO_PDCDPNCJFLE_OFFSET UNITYSDK_OFFSET(0xB2268C0)

inline static constexpr unsigned int JKNLHJLPIOO_TypeDefinitionIndex = 55817;

	class JKNLHJLPIOO : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::LinkedList_1<::System::Object*>** StaticGet_EBIIADAIEEM()
		{
			return (::System::Collections::Generic::LinkedList_1<::System::Object*>**)UnitySDK::FromName("", "JKNLHJLPIOO")->GetStaticField(0x1A6E0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PredicateConfig*, ::System::Collections::Generic::LinkedListNode_1<::System::Object*>*>** StaticGet_HJJLJGIDDJH()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PredicateConfig*, ::System::Collections::Generic::LinkedListNode_1<::System::Object*>*>**)UnitySDK::FromName("", "JKNLHJLPIOO")->GetStaticField(0x1A6E8);
		}

		static ::System::Collections::Generic::LinkedList_1<::System::Object*>** StaticGet_MJCDOEENHAJ()
		{
			return (::System::Collections::Generic::LinkedList_1<::System::Object*>**)UnitySDK::FromName("", "JKNLHJLPIOO")->GetStaticField(0x1A6F0);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_NJNPEJAFOBB()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "JKNLHJLPIOO")->GetStaticField(0x1A6F8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TaskConfig*, ::System::Collections::Generic::LinkedListNode_1<::System::Object*>*>** StaticGet_PGGCIAIBDBJ()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TaskConfig*, ::System::Collections::Generic::LinkedListNode_1<::System::Object*>*>**)UnitySDK::FromName("", "JKNLHJLPIOO")->GetStaticField(0x1A700);
		}

		static ::System::Int32* StaticGet_PKFFGMDENKG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JKNLHJLPIOO")->GetStaticField(0x5C20);
		}

		static ::System::Int32* StaticGet_JOONLNACOFL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JKNLHJLPIOO")->GetStaticField(0x5C24);
		}

		static ::System::Boolean* StaticGet_IDNMMODPELO()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JKNLHJLPIOO")->GetStaticField(0x5C28);
		}

		static ::System::Int32* StaticGet_JOLAAHKOMNC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JKNLHJLPIOO")->GetStaticField(0x5C2C);
		}

		// static const ::System::Object DPEJNAPCAHN; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKNLHJLPIOO_CCTOR_OFFSET))();
		}

		static ::RPG::GameCore::FixPoint DEAFDHPMONM(::RPG::GameCore::TaskConfig* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::StringHash a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::TaskConfig*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + JKNLHJLPIOO_DEAFDHPMONM_OFFSET))(a1, a2, a3);
		}

		static ::JKNLHJLPIOO_DDDFPPAEHJP* DOCMPJHBLFC(::RPG::GameCore::TaskConfig* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::StringHash a3)
		{
			return ((::JKNLHJLPIOO_DDDFPPAEHJP*(*)(::RPG::GameCore::TaskConfig*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + JKNLHJLPIOO_DOCMPJHBLFC_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BFGFIDNBNDG()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKNLHJLPIOO_BFGFIDNBNDG_OFFSET))();
		}

		static ::System::Boolean FANABGMCGMJ(::RPG::GameCore::PredicateConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::PredicateConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + JKNLHJLPIOO_FANABGMCGMJ_OFFSET))(a1, a2);
		}

		static ::System::Void LKKJHKDANEE()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKNLHJLPIOO_LKKJHKDANEE_OFFSET))();
		}

		static ::System::Boolean COHEKBEKDBM()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JKNLHJLPIOO_COHEKBEKDBM_OFFSET))();
		}

		static ::System::Void LILPJBOBLBP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + JKNLHJLPIOO_LILPJBOBLBP_OFFSET))(a1);
		}

		static ::System::Void ELEPDOMDAGA(::RPG::GameCore::TaskContext* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + JKNLHJLPIOO_ELEPDOMDAGA_OFFSET))(a1, a2, a3);
		}

		static ::System::Void LFKJJELMNPK(::RPG::GameCore::TaskContext* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + JKNLHJLPIOO_LFKJJELMNPK_OFFSET))(a1, a2, a3);
		}

		static ::System::Void DCADIANHPFD(::RPG::GameCore::TaskContext* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + JKNLHJLPIOO_DCADIANHPFD_OFFSET))(a1, a2, a3);
		}

		static ::System::Void OECIHKHGCFD(::RPG::GameCore::TaskContext* a1, ::System::Boolean a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + JKNLHJLPIOO_OECIHKHGCFD_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ELEPDOMDAGA_1(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JKNLHJLPIOO_ELEPDOMDAGA_1_OFFSET))(a1);
		}

		static ::System::Void LFKJJELMNPK_1(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JKNLHJLPIOO_LFKJJELMNPK_1_OFFSET))(a1);
		}

		static ::System::Void DCADIANHPFD_1(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JKNLHJLPIOO_DCADIANHPFD_1_OFFSET))(a1);
		}

		static ::System::Void OECIHKHGCFD_1(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + JKNLHJLPIOO_OECIHKHGCFD_1_OFFSET))(a1, a2);
		}

		static ::GELIALJDFBL* CCLOABELDPG(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TaskConfig* a2)
		{
			return ((::GELIALJDFBL*(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + JKNLHJLPIOO_CCLOABELDPG_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::GELIALJDFBL*>* IOGKJMBIKBP(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>* a2, ::BNBOAMEBAOE* a3)
		{
			return ((::System::Collections::Generic::List_1<::GELIALJDFBL*>*(*)(::RPG::GameCore::TaskContext*, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>*, ::BNBOAMEBAOE*))((::PBYTE)hIl2Cpp + JKNLHJLPIOO_IOGKJMBIKBP_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::GELIALJDFBL*>* KJCNEJALIJO(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>* a2, ::BNBOAMEBAOE* a3)
		{
			return ((::Il2CppArray<::GELIALJDFBL*>*(*)(::RPG::GameCore::TaskContext*, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>*, ::BNBOAMEBAOE*))((::PBYTE)hIl2Cpp + JKNLHJLPIOO_KJCNEJALIJO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void FCLLGLNIHBK(::System::Collections::Generic::List_1<::GELIALJDFBL*>* a1, ::GELIALJDFBL* a2, ::BNBOAMEBAOE* a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::GELIALJDFBL*>*, ::GELIALJDFBL*, ::BNBOAMEBAOE*))((::PBYTE)hIl2Cpp + JKNLHJLPIOO_FCLLGLNIHBK_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::TaskState IOJMJBCAADB(::GELIALJDFBL* a1)
		{
			return ((::RPG::GameCore::TaskState(*)(::GELIALJDFBL*))((::PBYTE)hIl2Cpp + JKNLHJLPIOO_IOJMJBCAADB_OFFSET))(a1);
		}

		static ::RPG::GameCore::GameEntity* PDCDPNCJFLE(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + JKNLHJLPIOO_PDCDPNCJFLE_OFFSET))(a1, a2);
		}

		static ::System::Single IEOEFBAPBPB(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DynamicFloat* a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::DynamicFloat*, ::System::Single))((::PBYTE)hIl2Cpp + JKNLHJLPIOO_IEOEFBAPBPB_OFFSET))(a1, a2, a3);
		}

		static ::System::String* MHBNBLKADHP(::RPG::GameCore::TaskContext* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::String*(*)(::RPG::GameCore::TaskContext*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + JKNLHJLPIOO_MHBNBLKADHP_OFFSET))(a1, a2, a3);
		}

	};
