#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BOOKCONTENTCOMPONENT_CTOR_OFFSET UNITYSDK_OFFSET(0xC8A7590)

namespace RPG::Client
{
	inline static constexpr unsigned int BookContentComponent_TypeDefinitionIndex = 72508;

	class BookContentComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* BookContentPrefabList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKCONTENTCOMPONENT_CTOR_OFFSET))(this);
		}

	};
}
