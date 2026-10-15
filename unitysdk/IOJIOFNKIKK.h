#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define IOJIOFNKIKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB8A440)

inline static constexpr unsigned int IOJIOFNKIKK_TypeDefinitionIndex = 43744;

	class IOJIOFNKIKK : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 IJHDBLGLCMN; // 0x10
		::UnityEngine::Vector3 DLKMKNFJLIK; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJIOFNKIKK_CTOR_OFFSET))(this);
		}

	};
