#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/SceneManagement/LoadSceneParameters.h"

namespace System { class String; }
namespace UnityEngine { class F9B785E1140FD828; }

#define E2968107E0B54049_EF7A306276E8F96D_OFFSET UNITYSDK_OFFSET(0x4156D40)
#define E2968107E0B54049_F08C6AF0B9760A71_OFFSET UNITYSDK_OFFSET(0x4156DB0)

inline static constexpr unsigned int E2968107E0B54049_TypeDefinitionIndex = 17390;

class E2968107E0B54049 : public ::System::Object
{
public:
	static ::UnityEngine::F9B785E1140FD828* EF7A306276E8F96D(::System::String* E81CCEAAA21C8887, ::System::Int32 B1B1B51386CCE7A4, ::UnityEngine::SceneManagement::LoadSceneParameters& B652C74F012A9C5B, ::System::Boolean FF39DCC22D8404FB)
	{
		return ((::UnityEngine::F9B785E1140FD828*(*)(::System::String*, ::System::Int32, ::UnityEngine::SceneManagement::LoadSceneParameters&, ::System::Boolean))((::PBYTE)hIl2Cpp + E2968107E0B54049_EF7A306276E8F96D_OFFSET))(E81CCEAAA21C8887, B1B1B51386CCE7A4, B652C74F012A9C5B, FF39DCC22D8404FB);
	}

	static ::UnityEngine::F9B785E1140FD828* F08C6AF0B9760A71(::System::String* E81CCEAAA21C8887, ::System::Int32 B1B1B51386CCE7A4, ::UnityEngine::SceneManagement::LoadSceneParameters B652C74F012A9C5B, ::System::Boolean FF39DCC22D8404FB)
	{
		return ((::UnityEngine::F9B785E1140FD828*(*)(::System::String*, ::System::Int32, ::UnityEngine::SceneManagement::LoadSceneParameters, ::System::Boolean))((::PBYTE)hIl2Cpp + E2968107E0B54049_F08C6AF0B9760A71_OFFSET))(E81CCEAAA21C8887, B1B1B51386CCE7A4, B652C74F012A9C5B, FF39DCC22D8404FB);
	}
};
