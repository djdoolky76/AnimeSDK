#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define AHFDPMKEGBA_CTOR_OFFSET UNITYSDK_OFFSET(0xEB80480)

inline static constexpr unsigned int AHFDPMKEGBA_TypeDefinitionIndex = 48144;

	class AHFDPMKEGBA : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHFDPMKEGBA_CTOR_OFFSET))(this);
		}

	};
