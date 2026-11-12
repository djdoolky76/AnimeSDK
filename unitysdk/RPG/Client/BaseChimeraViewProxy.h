#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_BASECHIMERAVIEWPROXY_CTOR_OFFSET UNITYSDK_OFFSET(0xD144C00)
#define RPG_CLIENT_BASECHIMERAVIEWPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD144AC0)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseChimeraViewProxy_TypeDefinitionIndex = 70601;

	class BaseChimeraViewProxy : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* GameObject; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* EffectUniqueIDs; // 0x18
		::System::Boolean IsChimera; // 0x20
		::System::Byte _padding0[0x3];
		::System::Int32 Atk; // 0x24
		::System::UInt32 ID; // 0x28
		::System::Int32 HP; // 0x2C
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
