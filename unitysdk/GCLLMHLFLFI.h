#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define GCLLMHLFLFI_CTOR_OFFSET UNITYSDK_OFFSET(0x19EBDED0)
#define GCLLMHLFLFI_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x19EBDCA0)
#define GCLLMHLFLFI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x19EBDBD0)

inline static constexpr unsigned int GCLLMHLFLFI_TypeDefinitionIndex = 77864;

	class GCLLMHLFLFI : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::UnityEngine::Transform* ANIONDFOGOG; // 0x18
		::RPG::MVector3 JFAGECNFHJL; // 0x20
		::System::Nullable_1<::UnityEngine::Vector3> LKBCLLCFEAL; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCLLMHLFLFI_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::AttachPointMapping* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AttachPointMapping*, ::System::String*))((::PBYTE)hIl2Cpp + GCLLMHLFLFI_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCLLMHLFLFI_JLANKNHFKCN_OFFSET))(this);
		}

	};
