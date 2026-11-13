#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_BASECHIMERAVIEWPROXY_CTOR_OFFSET UNITYSDK_OFFSET(0x1AFF1370)
#define RPG_CLIENT_BASECHIMERAVIEWPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AFF1230)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseChimeraViewProxy_TypeDefinitionIndex = 70601;

	class BaseChimeraViewProxy : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* GameObject; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* EffectUniqueIDs; // 0x18
		::System::UInt32 ID; // 0x20
		::System::Int32 Atk; // 0x24
		::System::Int32 HP; // 0x28
		::System::Boolean IsChimera; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECHIMERAVIEWPROXY_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECHIMERAVIEWPROXY_DISPOSE_OFFSET))(this);
		}

	};
}
