#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FGKMIBJFLDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1575B740)

inline static constexpr unsigned int FGKMIBJFLDJ_TypeDefinitionIndex = 77949;

	class FGKMIBJFLDJ : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 EDLHLKAFDFA; // 0x10
		::UnityEngine::Vector3 BHFPMGPOOHI; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGKMIBJFLDJ_CTOR_OFFSET))(this);
		}

	};
