#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"
class FBNCBOFLKOG;
namespace RPG::Client { class MonsterResistData; }
namespace RPG::GameCore { class ElementResistanceConfig; }
namespace RPG::GameCore { class MonsterResistEntry; }
namespace RPG::GameCore { class MonsterRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONSTERRESISTDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xD8B4D70)
#define RPG_CLIENT_MONSTERRESISTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xD8B4D10)
#define RPG_CLIENT_MONSTERRESISTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD8B56C0)
#define RPG_CLIENT_MONSTERRESISTDATA_GET_RESISTLIST_OFFSET UNITYSDK_OFFSET(0xD8B5AE0)
#define RPG_CLIENT_MONSTERRESISTDATA_SET_RESISTLIST_OFFSET UNITYSDK_OFFSET(0xD8B5AF0)
#define RPG_CLIENT_MONSTERRESISTDATA__CREATEDAMAGETYPERESISTDICT_OFFSET UNITYSDK_OFFSET(0xD8B5700)
#define RPG_CLIENT_MONSTERRESISTDATA__CREATERESISTLIST_OFFSET UNITYSDK_OFFSET(0xD8B4E60)
#define RPG_CLIENT_MONSTERRESISTDATA__CREATESTATUSRESISTLIST_OFFSET UNITYSDK_OFFSET(0xD8B5520)

namespace RPG::Client
{
	inline static constexpr unsigned int MonsterResistData_TypeDefinitionIndex = 71774;

	class MonsterResistData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::FBNCBOFLKOG*>* _ResistList_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERRESISTDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MonsterResistData* Create(::RPG::GameCore::MonsterRow* a1)
		{
			return ((::RPG::Client::MonsterResistData*(*)(::RPG::GameCore::MonsterRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERRESISTDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::MonsterResistData* Create_1(::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* a1, ::Il2CppArray<::RPG::GameCore::MonsterResistEntry*>* a2, ::Il2CppArray<::System::String*>* a3)
		{
			return ((::RPG::Client::MonsterResistData*(*)(::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>*, ::Il2CppArray<::RPG::GameCore::MonsterResistEntry*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERRESISTDATA_CREATE_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::List_1<::FBNCBOFLKOG*>* _CreateResistList(::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::Collections::Generic::List_1<::FBNCBOFLKOG*>*(*)(::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERRESISTDATA__CREATERESISTLIST_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::FBNCBOFLKOG*>* _CreateDamageTypeResistDict(::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::FBNCBOFLKOG*>*(*)(::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERRESISTDATA__CREATEDAMAGETYPERESISTDICT_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::FBNCBOFLKOG*>* _CreateStatusResistList(::Il2CppArray<::RPG::GameCore::MonsterResistEntry*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::FBNCBOFLKOG*>*(*)(::Il2CppArray<::RPG::GameCore::MonsterResistEntry*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERRESISTDATA__CREATESTATUSRESISTLIST_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::FBNCBOFLKOG*>* get_ResistList()
		{
			return ((::System::Collections::Generic::List_1<::FBNCBOFLKOG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERRESISTDATA_GET_RESISTLIST_OFFSET))(this);
		}

		::System::Void set_ResistList(::System::Collections::Generic::List_1<::FBNCBOFLKOG*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FBNCBOFLKOG*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERRESISTDATA_SET_RESISTLIST_OFFSET))(this, a1);
		}

	};
}
