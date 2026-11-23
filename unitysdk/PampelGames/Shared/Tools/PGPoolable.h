#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }

#define PAMPELGAMES_SHARED_TOOLS_PGPOOLABLE_A49558956275A234_OFFSET UNITYSDK_OFFSET(0x16BD3B0)
#define PAMPELGAMES_SHARED_TOOLS_PGPOOLABLE_BBC2ACF9EA1F6D42_OFFSET UNITYSDK_OFFSET(0x3DBD300)
#define PAMPELGAMES_SHARED_TOOLS_PGPOOLABLE_E789C521C51F1F26_OFFSET UNITYSDK_OFFSET(0x16BD320)
#define PAMPELGAMES_SHARED_TOOLS_PGPOOLABLE_FA1014923F72317A_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define PAMPELGAMES_SHARED_TOOLS_PGPOOLABLE_FE52FEA9F1F7DB26_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define PAMPELGAMES_SHARED_TOOLS_PGPOOLABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x3DBD360)

namespace PampelGames::Shared::Tools
{
	inline static constexpr unsigned int PGPoolable_TypeDefinitionIndex = 21171;

	class PGPoolable : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* B3DEA68D12343DA5; // 0x20
		::System::Boolean F90A52573245D711; // 0x28

		::System::Void FE52FEA9F1F7DB26()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_TOOLS_PGPOOLABLE_FE52FEA9F1F7DB26_OFFSET))(this);
		}

		::System::Void BBC2ACF9EA1F6D42()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_TOOLS_PGPOOLABLE_BBC2ACF9EA1F6D42_OFFSET))(this);
		}

		::UnityEngine::GameObject* E789C521C51F1F26()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_TOOLS_PGPOOLABLE_E789C521C51F1F26_OFFSET))(this);
		}

		::System::Void FA1014923F72317A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_TOOLS_PGPOOLABLE_FA1014923F72317A_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_TOOLS_PGPOOLABLE__CTOR_OFFSET))(this);
		}

		::System::Void A49558956275A234(::UnityEngine::GameObject* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_TOOLS_PGPOOLABLE_A49558956275A234_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
