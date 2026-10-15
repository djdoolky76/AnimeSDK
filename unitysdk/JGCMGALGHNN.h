#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

#define JGCMGALGHNN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB94700)

	class JGCMGALGHNN : public ::System::Object
	{
	public:
		::UnityEngine::Vector3Int KNBNJFOJLPI; // 0x10
		::UnityEngine::Vector3Int JGJEDBGDACC; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGCMGALGHNN_CTOR_OFFSET))(this);
		}

	};
