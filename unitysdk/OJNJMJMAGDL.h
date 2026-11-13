#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define OJNJMJMAGDL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E075800)

inline static constexpr unsigned int OJNJMJMAGDL_TypeDefinitionIndex = 44725;

	class OJNJMJMAGDL : public ::System::Object
	{
	public:
		::System::Int32 JFLMDBHNLOK; // 0x10
		::UnityEngine::Vector2 FKKMPFBKGNN; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJNJMJMAGDL_CTOR_OFFSET))(this);
		}

	};
