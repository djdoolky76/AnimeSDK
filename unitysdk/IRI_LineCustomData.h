#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define IRI_LINECUSTOMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x19316D00)

inline static constexpr unsigned int IRI_LineCustomData_TypeDefinitionIndex = 48207;

	class IRI_LineCustomData : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_LINECUSTOMDATA_CTOR_OFFSET))(this);
		}

	};
