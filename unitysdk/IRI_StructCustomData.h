#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define IRI_STRUCTCUSTOMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xB86C400)

inline static constexpr unsigned int IRI_StructCustomData_TypeDefinitionIndex = 48211;

	class IRI_StructCustomData : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_STRUCTCUSTOMDATA_CTOR_OFFSET))(this);
		}

	};
