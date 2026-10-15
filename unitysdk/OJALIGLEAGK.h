#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define OJALIGLEAGK_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C995140)
#define OJALIGLEAGK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C995190)

inline static constexpr unsigned int OJALIGLEAGK_TypeDefinitionIndex = 43283;

	class OJALIGLEAGK : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 JFAGECNFHJL; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJALIGLEAGK_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJALIGLEAGK_CLEAR_OFFSET))(this);
		}

	};
