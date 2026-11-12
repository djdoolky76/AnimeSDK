#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AttachPointMapping; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MNIKPLOHPDK_CTOR_OFFSET UNITYSDK_OFFSET(0xC2CA260)
#define MNIKPLOHPDK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC2CA2C0)
#define MNIKPLOHPDK_LHOFDLKIFBF_OFFSET UNITYSDK_OFFSET(0xC2CA310)

inline static constexpr unsigned int MNIKPLOHPDK_TypeDefinitionIndex = 78241;

	class MNIKPLOHPDK : public ::System::Object
	{
	public:
		::RPG::Client::AttachPointMapping* MDOMBPFNPGB; // 0x10
		::System::Void _ctor(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MNIKPLOHPDK_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIKPLOHPDK_DISPOSE_OFFSET))(this);
		}

		::UnityEngine::Transform* LHOFDLKIFBF(::System::String* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MNIKPLOHPDK_LHOFDLKIFBF_OFFSET))(this, a1);
		}

	};
