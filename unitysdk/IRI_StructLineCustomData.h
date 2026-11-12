#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define IRI_STRUCTLINECUSTOMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xB86C410)

inline static constexpr unsigned int IRI_StructLineCustomData_TypeDefinitionIndex = 48212;

	class IRI_StructLineCustomData : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_STRUCTLINECUSTOMDATA_CTOR_OFFSET))(this);
		}

	};
