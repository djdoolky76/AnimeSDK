#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshRenderer; }

#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_EGBPIIIMGFJ_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x1B40AB90)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_EGBPIIIMGFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1B413340)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_EGBPIIIMGFJ_EABHINGMBDH_OFFSET UNITYSDK_OFFSET(0x1B4104A0)

namespace RPG::Client
{
	inline static constexpr unsigned int SimpleTextManagerMono_EGBPIIIMGFJ_TypeDefinitionIndex = 74725;

	class SimpleTextManagerMono_EGBPIIIMGFJ : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* IOHOMAPFIGH; // 0x10
		::UnityEngine::Mesh* HKHIMGIMIFI; // 0x18
		::UnityEngine::MeshRenderer* EMHJGPKACPK; // 0x20
		::System::Void _ctor(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_EGBPIIIMGFJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void EABHINGMBDH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_EGBPIIIMGFJ_EABHINGMBDH_OFFSET))(this, a1);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_EGBPIIIMGFJ_ABKBOGIGAEH_OFFSET))(this);
		}

	};
}
