#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

#define LPOEOHMEJAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8F49A0)

inline static constexpr unsigned int LPOEOHMEJAG_TypeDefinitionIndex = 42947;

	class LPOEOHMEJAG : public ::System::Object
	{
	public:
		::System::Int32 ONOGIODHCEC; // 0x10
		::UnityEngine::Bounds PDDIKBAMKBG; // 0x14
		::System::Int32 JCJGJBLENCP; // 0x2C
		::UnityEngine::Bounds CJCLPNEMFFA; // 0x30
		::System::Int32 PKEDMACGIPA; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPOEOHMEJAG_CTOR_OFFSET))(this);
		}

	};
