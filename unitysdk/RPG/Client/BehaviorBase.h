#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class MonoBehaviour; }

#define RPG_CLIENT_BEHAVIORBASE_CTOR_OFFSET UNITYSDK_OFFSET(0xD1D52C0)
#define RPG_CLIENT_BEHAVIORBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD1D5190)
#define RPG_CLIENT_BEHAVIORBASE_KJMDJMBNCPE_OFFSET UNITYSDK_OFFSET(0xD1D51E0)
#define RPG_CLIENT_BEHAVIORBASE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xD1D5140)

namespace RPG::Client
{
	inline static constexpr unsigned int BehaviorBase_TypeDefinitionIndex = 72325;

	class BehaviorBase : public ::System::Object
	{
	public:
		::UnityEngine::MonoBehaviour* _OwnerMonoBehavior; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEHAVIORBASE_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEHAVIORBASE_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEHAVIORBASE_DISPOSE_OFFSET))(this);
		}

		::System::Void KJMDJMBNCPE(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEHAVIORBASE_KJMDJMBNCPE_OFFSET))(this, a1, a2);
		}

	};
}
