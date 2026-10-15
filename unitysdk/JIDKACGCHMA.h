#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define JIDKACGCHMA_CTOR_OFFSET UNITYSDK_OFFSET(0xB1E8710)

inline static constexpr unsigned int JIDKACGCHMA_TypeDefinitionIndex = 69676;

	class JIDKACGCHMA : public ::System::Object
	{
	public:
		::System::Single DAGEGMPKBEN; // 0x10
		::System::Single ALHOPGNKGNH; // 0x14
		::UnityEngine::Vector2 GAADIENJMGE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIDKACGCHMA_CTOR_OFFSET))(this);
		}

	};
