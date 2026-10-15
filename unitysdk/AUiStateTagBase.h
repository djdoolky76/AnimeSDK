#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define AUISTATETAGBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x15BC2390)

inline static constexpr unsigned int AUiStateTagBase_TypeDefinitionIndex = 47577;

	class AUiStateTagBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUISTATETAGBASE_CTOR_OFFSET))(this);
		}

	};
