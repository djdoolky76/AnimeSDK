#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine::EventSystems { class PointerEventData; }

#define HAEBPNAFKDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x17DD3D90)

inline static constexpr unsigned int HAEBPNAFKDJ_TypeDefinitionIndex = 75353;

	class HAEBPNAFKDJ : public ::System::Object
	{
	public:
		::UnityEngine::EventSystems::PointerEventData* EKJKJDIFBOC; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAEBPNAFKDJ_CTOR_OFFSET))(this);
		}

	};
