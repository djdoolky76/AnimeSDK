#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define NKLCKJGMDHG_DEHNPNEAMBN_CTOR_OFFSET UNITYSDK_OFFSET(0xBC34590)

inline static constexpr unsigned int NKLCKJGMDHG_DEHNPNEAMBN_TypeDefinitionIndex = 71799;

	class NKLCKJGMDHG_DEHNPNEAMBN : public ::System::Object
	{
	public:
		::UnityEngine::Transform* NLBFEAGJNOL; // 0x10
		::UnityEngine::Animator* NJCCNHEIEBP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLCKJGMDHG_DEHNPNEAMBN_CTOR_OFFSET))(this);
		}

	};
