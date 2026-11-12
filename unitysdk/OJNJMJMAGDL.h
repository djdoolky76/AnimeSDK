#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define OJNJMJMAGDL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB570E0)

inline static constexpr unsigned int OJNJMJMAGDL_TypeDefinitionIndex = 44725;

	class OJNJMJMAGDL : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 FKKMPFBKGNN; // 0x10
		::System::Int32 JFLMDBHNLOK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJNJMJMAGDL_CTOR_OFFSET))(this);
		}

	};
