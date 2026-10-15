#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class TSCRendererMaterialRefData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MeshRenderer; }

#define RPG_CLIENT_TSCMATERIALREFERENCECACHE_ABEEPLFANAF_OFFSET UNITYSDK_OFFSET(0xE18C790)
#define RPG_CLIENT_TSCMATERIALREFERENCECACHE_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xE18CA70)
#define RPG_CLIENT_TSCMATERIALREFERENCECACHE_CTOR_OFFSET UNITYSDK_OFFSET(0xE18C5C0)

namespace RPG::Client
{
	inline static constexpr unsigned int TSCMaterialReferenceCache_TypeDefinitionIndex = 70209;

	class TSCMaterialReferenceCache : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TSCRendererMaterialRefData*>* Datas; // 0x10
		::System::Void _ctor(::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TSCMATERIALREFERENCECACHE_CTOR_OFFSET))(this, a1);
		}

		::System::Void ABEEPLFANAF(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TSCMATERIALREFERENCECACHE_ABEEPLFANAF_OFFSET))(this, a1, a2);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TSCMATERIALREFERENCECACHE_ABKBOGIGAEH_OFFSET))(this);
		}

	};
}
