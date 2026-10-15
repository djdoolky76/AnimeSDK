#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"
namespace RPGTools::Timeline { class CharacterBodyControlData; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define BJIFEEEDFAO_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xB7A1050)
#define BJIFEEEDFAO_CTOR_OFFSET UNITYSDK_OFFSET(0xB7A1480)
#define BJIFEEEDFAO_OBCKIOEGOGL_OFFSET UNITYSDK_OFFSET(0xB7A12D0)

inline static constexpr unsigned int BJIFEEEDFAO_TypeDefinitionIndex = 47937;

	class BJIFEEEDFAO : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::RPGTools::Timeline::CharacterBodyControlData* EABKOHGCHFP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIFEEEDFAO_CTOR_OFFSET))(this);
		}

		::System::Void CLJEBKODGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIFEEEDFAO_CLJEBKODGHK_OFFSET))(this);
		}

		::UnityEngine::Transform* OBCKIOEGOGL(::UnityEngine::GameObject* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + BJIFEEEDFAO_OBCKIOEGOGL_OFFSET))(this, a1);
		}

	};
