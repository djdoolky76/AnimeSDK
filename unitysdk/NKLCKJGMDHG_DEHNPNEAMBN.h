#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define NKLCKJGMDHG_DEHNPNEAMBN_CTOR_OFFSET UNITYSDK_OFFSET(0x1A7B7860)

inline static constexpr unsigned int NKLCKJGMDHG_DEHNPNEAMBN_TypeDefinitionIndex = 73817;

	class NKLCKJGMDHG_DEHNPNEAMBN : public ::System::Object
	{
	public:
		::UnityEngine::Animator* NJCCNHEIEBP; // 0x10
		::UnityEngine::Transform* NLBFEAGJNOL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLCKJGMDHG_DEHNPNEAMBN_CTOR_OFFSET))(this);
		}

	};
