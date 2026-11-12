#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

#define HPBACLDPGFP_DLNBNJDJPCP_OFFSET UNITYSDK_OFFSET(0x16D64FC0)

inline static constexpr unsigned int HPBACLDPGFP_TypeDefinitionIndex = 48931;

	class HPBACLDPGFP : public ::System::Object
	{
	public:
		static ::System::Boolean DLNBNJDJPCP(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + HPBACLDPGFP_DLNBNJDJPCP_OFFSET))(a1);
		}

	};
