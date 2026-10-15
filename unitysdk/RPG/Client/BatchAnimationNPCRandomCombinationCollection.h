#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATCHANIMATIONNPCRANDOMCOMBINATIONCOLLECTION_CTOR_OFFSET UNITYSDK_OFFSET(0xC7F5C60)

namespace RPG::Client
{
	class BatchAnimationNPCRandomCombinationCollection : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* List; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONNPCRANDOMCOMBINATIONCOLLECTION_CTOR_OFFSET))(this);
		}

	};
}
