#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define LHLMDDBGFCA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8E0A50)

inline static constexpr unsigned int LHLMDDBGFCA_TypeDefinitionIndex = 42989;

	class LHLMDDBGFCA : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 AIBGEDIGEOO; // 0x10
		::UnityEngine::Quaternion LOLLEGPLMOO; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLMDDBGFCA_CTOR_OFFSET))(this);
		}

	};
