#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MonsterData; }
namespace RPG::GameCore { class MonsterRow; }
namespace RPG::GameCore { class MonsterTemplateRow; }
namespace RPG::GameCore { class StageRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONSTERDATA_CREATEDATALISTFROMEVENTID_OFFSET UNITYSDK_OFFSET(0xE30D930)
#define RPG_CLIENT_MONSTERDATA_CREATEDATALISTFROMIDARRAY_OFFSET UNITYSDK_OFFSET(0xE30EB00)
#define RPG_CLIENT_MONSTERDATA_CREATEDATALISTFROMIDLIST_OFFSET UNITYSDK_OFFSET(0xE30EBB0)
#define RPG_CLIENT_MONSTERDATA_CREATEDATALISTFROMSTAGEID_OFFSET UNITYSDK_OFFSET(0xE30EA60)
#define RPG_CLIENT_MONSTERDATA_CREATEDATALISTFROMSTAGEROW_OFFSET UNITYSDK_OFFSET(0xE30D9F0)
#define RPG_CLIENT_MONSTERDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE30D550)
#define RPG_CLIENT_MONSTERDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0xE30D610)
#define RPG_CLIENT_MONSTERDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE30D5D0)
#define RPG_CLIENT_MONSTERDATA_GETMONSTERWAVESENUMERATOR_OFFSET UNITYSDK_OFFSET(0xE30D8C0)
#define RPG_CLIENT_MONSTERDATA_GETTEMPLATEICONPATH_OFFSET UNITYSDK_OFFSET(0xE30D6A0)
#define RPG_CLIENT_MONSTERDATA_GETTEMPLATEMANIKINCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xE30D850)
#define RPG_CLIENT_MONSTERDATA_GETTEMPLATEMANIKINIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xE30D6F0)
#define RPG_CLIENT_MONSTERDATA_GETTEMPLATEMANIKINPREFABPATH_OFFSET UNITYSDK_OFFSET(0xE30D740)
#define RPG_CLIENT_MONSTERDATA__GETMANIKINTEMPLATEROW_OFFSET UNITYSDK_OFFSET(0xE30D7B0)
#define RPG_CLIENT_MONSTERDATA__GETMONSTERIDENUMERATORBYINFINITEWAVEID_OFFSET UNITYSDK_OFFSET(0xE30F1B0)
#define RPG_CLIENT_MONSTERDATA__ISMONSTERWEAKNESSSAME_OFFSET UNITYSDK_OFFSET(0xE30F030)
#define RPG_CLIENT_MONSTERDATA__ISSUMMONSAME_OFFSET UNITYSDK_OFFSET(0xE30EEB0)
#define RPG_CLIENT_MONSTERDATA__TRYADDMONSTERDATA_OFFSET UNITYSDK_OFFSET(0xE30E4F0)
#define RPG_CLIENT_MONSTERDATA__TRYADDSUMMONMONSTERDATA_OFFSET UNITYSDK_OFFSET(0xE30E6D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonsterData_TypeDefinitionIndex = 64577;

	class MonsterData : public ::System::Object
	{
	public:
		::RPG::GameCore::MonsterRow* Row; // 0x10
		::RPG::GameCore::MonsterTemplateRow* TemplateRow; // 0x18
		::System::UInt32 SummonDepth; // 0x20
		::System::UInt32 WaveIndex; // 0x24
		::System::UInt32 MonsterID; // 0x28
		::System::UInt32 Level; // 0x2C
		// static const ::System::Object _Add_Summon_Depth; // 0x0
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA_EQUALS_OFFSET))(this, a1);
		}

		::System::String* GetTemplateIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA_GETTEMPLATEICONPATH_OFFSET))(this);
		}

		::System::String* GetTemplateManikinImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA_GETTEMPLATEMANIKINIMAGEPATH_OFFSET))(this);
		}

		::System::String* GetTemplateManikinPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA_GETTEMPLATEMANIKINPREFABPATH_OFFSET))(this);
		}

		::System::String* GetTemplateManikinConfigPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA_GETTEMPLATEMANIKINCONFIGPATH_OFFSET))(this);
		}

		static ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::IEnumerator_1<::System::UInt32>*>* GetMonsterWavesEnumerator(::RPG::GameCore::StageRow* a1)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::IEnumerator_1<::System::UInt32>*>*(*)(::RPG::GameCore::StageRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA_GETMONSTERWAVESENUMERATOR_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* CreateDataListFromEventID(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA_CREATEDATALISTFROMEVENTID_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* CreateDataListFromStageRow(::RPG::GameCore::StageRow* a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::RPG::GameCore::StageRow*, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA_CREATEDATALISTFROMSTAGEROW_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* CreateDataListFromStageID(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA_CREATEDATALISTFROMSTAGEID_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* CreateDataListFromIDArray(::Il2CppArray<::System::UInt32>* a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA_CREATEDATALISTFROMIDARRAY_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* CreateDataListFromIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA_CREATEDATALISTFROMIDLIST_OFFSET))(a1, a2, a3, a4, a5);
		}

		::RPG::GameCore::MonsterTemplateRow* _GetManikinTemplateRow()
		{
			return ((::RPG::GameCore::MonsterTemplateRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA__GETMANIKINTEMPLATEROW_OFFSET))(this);
		}

		static ::System::Void _TryAddMonsterData(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* a2, ::System::UInt32 a3, ::System::Boolean a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*, ::System::UInt32, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA__TRYADDMONSTERDATA_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void _TryAddSummonMonsterData(::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* a1, ::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* a2, ::System::UInt32 a3, ::System::Boolean a4, ::System::UInt32 a5, ::System::UInt32 a6)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*, ::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*, ::System::UInt32, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA__TRYADDSUMMONMONSTERDATA_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean _IsSummonSame(::RPG::Client::MonsterData* a1, ::RPG::Client::MonsterData* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::MonsterData*, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA__ISSUMMONSAME_OFFSET))(a1, a2);
		}

		static ::System::Boolean _IsMonsterWeaknessSame(::Il2CppArray<::RPG::GameCore::AttackDamageType>* a1, ::Il2CppArray<::RPG::GameCore::AttackDamageType>* a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::RPG::GameCore::AttackDamageType>*, ::Il2CppArray<::RPG::GameCore::AttackDamageType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA__ISMONSTERWEAKNESSSAME_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::IEnumerator_1<::System::UInt32>* _GetMonsterIDEnumeratorByInfiniteWaveID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA__GETMONSTERIDENUMERATORBYINFINITEWAVEID_OFFSET))(a1);
		}

	};
}
