#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MaterialBlockEffectPropertyType.h"
#include "unitysdk/RPG/Client/PolymerEffectControllBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"
class KLEFGGIHGMI;
namespace RPG::Client { class CommonEffectMaterialBlockOne; }
namespace RPG::Client { class MaterialBlockEffectBase_PGBJOBLLAOP; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_ADDONEMATERIALBLOCK_OFFSET UNITYSDK_OFFSET(0xD5CAC90)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0xD5CB0C0)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_CCTOR_OFFSET UNITYSDK_OFFSET(0xD5CC430)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_CTOR_OFFSET UNITYSDK_OFFSET(0xD5CC420)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xD5CAC50)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_EJEAEDNILND_OFFSET UNITYSDK_OFFSET(0xD5CC2A0)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_ENDLODTRANSITION_OFFSET UNITYSDK_OFFSET(0xD5CA640)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_FBKONIEPKOO_OFFSET UNITYSDK_OFFSET(0xD5CA7E0)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xD5CB870)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_HFCJJIFMCMB_OFFSET UNITYSDK_OFFSET(0xD5CB9F0)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_LLCMLEBPKCB_OFFSET UNITYSDK_OFFSET(0xD5CAF30)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD5CB170)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_ONPOLYMERREBUILDAFTERFADING_OFFSET UNITYSDK_OFFSET(0xD5CA5D0)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_ONPOLYMERREBUILDBEFOREFADING_OFFSET UNITYSDK_OFFSET(0xD5CA190)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_RESET_OFFSET UNITYSDK_OFFSET(0xD5CB320)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_SETMATERIALBLOCKEFFECTACTIVE_OFFSET UNITYSDK_OFFSET(0xD5CB220)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_SPAWNED_OFFSET UNITYSDK_OFFSET(0xD5CA790)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_STARTLODTRANSITION_OFFSET UNITYSDK_OFFSET(0xD5CA2A0)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_TICK_OFFSET UNITYSDK_OFFSET(0xD5CB480)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_UPDATEKEYWORDDATA_OFFSET UNITYSDK_OFFSET(0xD5CC070)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_UPDATEPROPERTYDATA_1_OFFSET UNITYSDK_OFFSET(0xD5CBD60)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_UPDATEPROPERTYDATA_2_OFFSET UNITYSDK_OFFSET(0xD5CBED0)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE_UPDATEPROPERTYDATA_OFFSET UNITYSDK_OFFSET(0xD5CBBE0)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialBlockEffectBase_TypeDefinitionIndex = 70648;

	class MaterialBlockEffectBase : public ::RPG::Client::PolymerEffectControllBase
	{
	public:
		::Il2CppArray<::System::Object*>* PropTargets; // 0x30
		::System::Boolean IsDebugMode; // 0x38
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::Client::CommonEffectMaterialBlockOne*>* IJENHDPDCFI; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::CommonEffectMaterialBlockOne*>* KNBONFMHEON; // 0x48
		::System::Collections::Generic::List_1<::System::Object*>* KACJANEJBGP; // 0x50
		::System::Collections::Generic::List_1<::System::Object*>* ONDPCJAPJFG; // 0x58
		static ::Il2CppArray<::System::Int32>** StaticGet_EffectPropertyIDs()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("RPG.Client", "MaterialBlockEffectBase")->GetStaticField(0x18020);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_EffectPropertyNames()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.Client", "MaterialBlockEffectBase")->GetStaticField(0x18028);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_CGCHEOALOEI()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "MaterialBlockEffectBase")->GetStaticField(0x18030);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_CCTOR_OFFSET))();
		}

		::System::Void OnPolymerRebuildBeforeFading(::KLEFGGIHGMI* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::UnityEngine::GameObject* a3, ::UnityEngine::GameObject* a4)
		{
			return ((::System::Void(*)(::PVOID, ::KLEFGGIHGMI*, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_ONPOLYMERREBUILDBEFOREFADING_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnPolymerRebuildAfterFading(::KLEFGGIHGMI* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::PVOID, ::KLEFGGIHGMI*, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_ONPOLYMERREBUILDAFTERFADING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_DESPAWNED_OFFSET))(this);
		}

		::System::Void AddOneMaterialBlock(::RPG::Client::CommonEffectMaterialBlockOne* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CommonEffectMaterialBlockOne*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_ADDONEMATERIALBLOCK_OFFSET))(this, a1);
		}

		::System::Void StartLODTransition(::Il2CppArray<::UnityEngine::Renderer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_STARTLODTRANSITION_OFFSET))(this, a1);
		}

		::System::Void EndLODTransition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_ENDLODTRANSITION_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetMaterialBlockEffectActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_SETMATERIALBLOCKEFFECTACTIVE_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_RESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_TICK_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void HFCJJIFMCMB(::RPG::Client::MaterialBlockEffectBase_PGBJOBLLAOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MaterialBlockEffectBase_PGBJOBLLAOP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_HFCJJIFMCMB_OFFSET))(this, a1);
		}

		::System::Void UpdatePropertyData(::RPG::Client::MaterialBlockEffectPropertyType a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MaterialBlockEffectPropertyType, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_UPDATEPROPERTYDATA_OFFSET))(this, a1, a2);
		}

		::System::Void UpdatePropertyData_1(::RPG::Client::MaterialBlockEffectPropertyType a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MaterialBlockEffectPropertyType, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_UPDATEPROPERTYDATA_1_OFFSET))(this, a1, a2);
		}

		::System::Void UpdatePropertyData_2(::RPG::Client::MaterialBlockEffectPropertyType a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MaterialBlockEffectPropertyType, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_UPDATEPROPERTYDATA_2_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateKeywordData(::RPG::Client::MaterialBlockEffectPropertyType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MaterialBlockEffectPropertyType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_UPDATEKEYWORDDATA_OFFSET))(this, a1, a2);
		}

		::System::Void FBKONIEPKOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_FBKONIEPKOO_OFFSET))(this);
		}

		::System::Void LLCMLEBPKCB(::System::Collections::Generic::List_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_LLCMLEBPKCB_OFFSET))(this, a1);
		}

		::System::Void EJEAEDNILND(::RPG::Client::CommonEffectMaterialBlockOne* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CommonEffectMaterialBlockOne*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE_EJEAEDNILND_OFFSET))(this, a1);
		}

	};
}
