#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Object; }

#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_BOEADECBLPO_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0xE0D4A70)

namespace RPG::Client
{
	inline static constexpr unsigned int SimpleTextManagerMono_BOEADECBLPO_TypeDefinitionIndex = 72649;

	class SimpleTextManagerMono_BOEADECBLPO : public ::System::Object
	{
	public:
		static ::System::Void BJMNKLGEMPM(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_BOEADECBLPO_BJMNKLGEMPM_OFFSET))(a1);
		}

	};
}
