#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

#define FGGECDBNPAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA3FE90)

inline static constexpr unsigned int FGGECDBNPAJ_TypeDefinitionIndex = 43305;

	class FGGECDBNPAJ : public ::System::Object
	{
	public:
		::UnityEngine::Vector2Int NIJAOPOGCHL; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGGECDBNPAJ_CTOR_OFFSET))(this);
		}

	};
