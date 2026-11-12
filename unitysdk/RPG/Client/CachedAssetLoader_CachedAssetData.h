#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class CachedAssetLoader_AssetObjectNode; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define RPG_CLIENT_CACHEDASSETLOADER_CACHEDASSETDATA_ADDASSETOBJECT_OFFSET UNITYSDK_OFFSET(0xD237AB0)
#define RPG_CLIENT_CACHEDASSETLOADER_CACHEDASSETDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xD23AF50)
#define RPG_CLIENT_CACHEDASSETLOADER_CACHEDASSETDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD23B1C0)
#define RPG_CLIENT_CACHEDASSETLOADER_CACHEDASSETDATA_DECREF_OFFSET UNITYSDK_OFFSET(0xD2389A0)
#define RPG_CLIENT_CACHEDASSETLOADER_CACHEDASSETDATA_GETASSETOBJECTS_OFFSET UNITYSDK_OFFSET(0xD23A440)
#define RPG_CLIENT_CACHEDASSETLOADER_CACHEDASSETDATA_GETASSETOBJECT_OFFSET UNITYSDK_OFFSET(0xD237150)
#define RPG_CLIENT_CACHEDASSETLOADER_CACHEDASSETDATA_GET_LOGICTYPE_OFFSET UNITYSDK_OFFSET(0xD23AF30)
#define RPG_CLIENT_CACHEDASSETLOADER_CACHEDASSETDATA_GET_REFCOUNT_OFFSET UNITYSDK_OFFSET(0xD23AF40)
#define RPG_CLIENT_CACHEDASSETLOADER_CACHEDASSETDATA_INCREF_OFFSET UNITYSDK_OFFSET(0xD237330)
#define RPG_CLIENT_CACHEDASSETLOADER_CACHEDASSETDATA_INITASSETDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0xD237F00)

namespace RPG::Client
{
	inline static constexpr unsigned int CachedAssetLoader_CachedAssetData_TypeDefinitionIndex = 60711;

	class CachedAssetLoader_CachedAssetData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* _AssetDependencies; // 0x10
		::RPG::Client::CachedAssetLoader_AssetObjectNode* _AssetObjectNode; // 0x18
		::RPG::Client::CachedAssetLogicType _LogicType; // 0x20
		::System::Int32 _RefCount; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CACHEDASSETDATA_CTOR_OFFSET))(this);
		}

		::RPG::Client::CachedAssetLogicType get_LogicType()
		{
			return ((::RPG::Client::CachedAssetLogicType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CACHEDASSETDATA_GET_LOGICTYPE_OFFSET))(this);
		}

		::System::Int32 get_RefCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CACHEDASSETDATA_GET_REFCOUNT_OFFSET))(this);
		}

		::System::Void InitAssetDependencies(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CACHEDASSETDATA_INITASSETDEPENDENCIES_OFFSET))(this, a1);
		}

		::System::Void IncRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CACHEDASSETDATA_INCREF_OFFSET))(this);
		}

		::System::Void DecRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CACHEDASSETDATA_DECREF_OFFSET))(this);
		}

		::System::Void GetAssetObjects(::System::Collections::Generic::List_1<::UnityEngine::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CACHEDASSETDATA_GETASSETOBJECTS_OFFSET))(this, a1);
		}

		::UnityEngine::Object* GetAssetObject(::System::Type* a1)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CACHEDASSETDATA_GETASSETOBJECT_OFFSET))(this, a1);
		}

		::System::Boolean AddAssetObject(::UnityEngine::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CACHEDASSETDATA_ADDASSETOBJECT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_CACHEDASSETDATA_CLEAR_OFFSET))(this);
		}

	};
}
