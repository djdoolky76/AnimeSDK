#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define KHLIGEOGGCP_CTOR_OFFSET UNITYSDK_OFFSET(0xB405390)

inline static constexpr unsigned int KHLIGEOGGCP_TypeDefinitionIndex = 47936;

	class KHLIGEOGGCP : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLIGEOGGCP_CTOR_OFFSET))(this);
		}

	};
