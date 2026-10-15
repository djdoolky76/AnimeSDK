#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LEILONLGEGA_KOMDKENHMPE;
namespace RPG::GameCore { class BattlePerformCaptureActor; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LEILONLGEGA_ADBDMDJKLND_OFFSET UNITYSDK_OFFSET(0xB64F220)
#define LEILONLGEGA_CLEAR_OFFSET UNITYSDK_OFFSET(0xB650070)
#define LEILONLGEGA_CTOR_OFFSET UNITYSDK_OFFSET(0xB6503B0)
#define LEILONLGEGA_DEMIKBNMHJG_OFFSET UNITYSDK_OFFSET(0xB64FDF0)
#define LEILONLGEGA_EBJPFAKICOF_OFFSET UNITYSDK_OFFSET(0xB64F170)
#define LEILONLGEGA_ECEBJNPGCNN_OFFSET UNITYSDK_OFFSET(0xB64F540)
#define LEILONLGEGA_FFAOFNAEINL_OFFSET UNITYSDK_OFFSET(0xB64FA20)
#define LEILONLGEGA_FMHOFHNDOBN_OFFSET UNITYSDK_OFFSET(0xB64F6F0)
#define LEILONLGEGA_GOCIKOKJLGM_OFFSET UNITYSDK_OFFSET(0xB64ED50)
#define LEILONLGEGA_HDIFOIOHCLK_OFFSET UNITYSDK_OFFSET(0xB64FEB0)
#define LEILONLGEGA_IHDKIJKMKMN_OFFSET UNITYSDK_OFFSET(0xB6501D0)
#define LEILONLGEGA_KEBDKGNMBDL_OFFSET UNITYSDK_OFFSET(0xB64FAC0)
#define LEILONLGEGA_LEODENEDNIE_OFFSET UNITYSDK_OFFSET(0xB6502F0)
#define LEILONLGEGA_PABAGIKEDFI_OFFSET UNITYSDK_OFFSET(0xB64EDB0)

inline static constexpr unsigned int LEILONLGEGA_TypeDefinitionIndex = 57351;

	class LEILONLGEGA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* GDGDFMKAKIK; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* BAFHGOPEJNE; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* FMIHBOFPJOC; // 0x20
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* IJBJLOKNAOJ; // 0x28
		::System::Collections::Generic::List_1<::System::Object*>* NCCCMKEBMLC; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEILONLGEGA_CTOR_OFFSET))(this);
		}

		::System::Boolean GOCIKOKJLGM(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LEILONLGEGA_GOCIKOKJLGM_OFFSET))(this, a1);
		}

		::System::Void PABAGIKEDFI(::RPG::GameCore::GameEntityList* a1, ::RPG::GameCore::GameEntityList* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + LEILONLGEGA_PABAGIKEDFI_OFFSET))(this, a1, a2);
		}

		::System::Void EBJPFAKICOF(::RPG::GameCore::GameEntityList* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::RPG::GameCore::GameEntityList* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::GameEntityList*, ::System::Boolean))((::PBYTE)hIl2Cpp + LEILONLGEGA_EBJPFAKICOF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ADBDMDJKLND(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Object* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + LEILONLGEGA_ADBDMDJKLND_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ECEBJNPGCNN(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Object*))((::PBYTE)hIl2Cpp + LEILONLGEGA_ECEBJNPGCNN_OFFSET))(this, a1, a2);
		}

		::System::Void FMHOFHNDOBN(::RPG::GameCore::BattlePerformCaptureActor* a1, ::LEILONLGEGA_KOMDKENHMPE* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*, ::LEILONLGEGA_KOMDKENHMPE*, ::System::Boolean))((::PBYTE)hIl2Cpp + LEILONLGEGA_FMHOFHNDOBN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KEBDKGNMBDL(::RPG::GameCore::BattlePerformCaptureActor* a1, ::System::Action_2<::RPG::GameCore::BattlePerformCaptureActor*, ::RPG::GameCore::GameEntity*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*, ::System::Action_2<::RPG::GameCore::BattlePerformCaptureActor*, ::RPG::GameCore::GameEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LEILONLGEGA_KEBDKGNMBDL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DEMIKBNMHJG(::System::Action_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + LEILONLGEGA_DEMIKBNMHJG_OFFSET))(this, a1);
		}

		::System::Void HDIFOIOHCLK(::System::Action_2<::RPG::GameCore::BattlePerformCaptureActor*, ::RPG::GameCore::GameEntity*>* a1, ::System::Action_1<::RPG::GameCore::GameEntity*>* a2, ::System::Action_1<::RPG::GameCore::GameEntity*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::RPG::GameCore::BattlePerformCaptureActor*, ::RPG::GameCore::GameEntity*>*, ::System::Action_1<::RPG::GameCore::GameEntity*>*, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + LEILONLGEGA_HDIFOIOHCLK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEILONLGEGA_CLEAR_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* FFAOFNAEINL(::RPG::GameCore::BattlePerformCaptureActor* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::BattlePerformCaptureActor*))((::PBYTE)hIl2Cpp + LEILONLGEGA_FFAOFNAEINL_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* IHDKIJKMKMN(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LEILONLGEGA_IHDKIJKMKMN_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* LEODENEDNIE()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEILONLGEGA_LEODENEDNIE_OFFSET))(this);
		}

	};
