#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define GDCKNLDGDDI_CTOR_OFFSET UNITYSDK_OFFSET(0x168CCD70)

inline static constexpr unsigned int GDCKNLDGDDI_TypeDefinitionIndex = 49767;

	class GDCKNLDGDDI : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDCKNLDGDDI_CTOR_OFFSET))(this);
		}

	};
