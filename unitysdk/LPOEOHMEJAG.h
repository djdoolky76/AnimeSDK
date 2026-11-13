#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

#define LPOEOHMEJAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C259A80)

inline static constexpr unsigned int LPOEOHMEJAG_TypeDefinitionIndex = 43928;

	class LPOEOHMEJAG : public ::System::Object
	{
	public:
		::UnityEngine::Bounds CJCLPNEMFFA; // 0x10
		::System::Int32 PKEDMACGIPA; // 0x28
		::System::Int32 JCJGJBLENCP; // 0x2C
		::System::Int32 ONOGIODHCEC; // 0x30
		::UnityEngine::Bounds PDDIKBAMKBG; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPOEOHMEJAG_CTOR_OFFSET))(this);
		}

	};
