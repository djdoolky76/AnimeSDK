#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Jobs/TransformAccessArray.h"

#define DEBOGDBACGL_DJEDDIDLHNO_OFFSET UNITYSDK_OFFSET(0xE4FF510)

inline static constexpr unsigned int DEBOGDBACGL_TypeDefinitionIndex = 73740;

	class DEBOGDBACGL : public ::System::Object
	{
	public:
		static ::UnityEngine::Jobs::TransformAccessArray DJEDDIDLHNO(::UnityEngine::Jobs::TransformAccessArray a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Jobs::TransformAccessArray(*)(::UnityEngine::Jobs::TransformAccessArray, ::System::Int32))((::PBYTE)hIl2Cpp + DEBOGDBACGL_DJEDDIDLHNO_OFFSET))(a1, a2);
		}

	};
