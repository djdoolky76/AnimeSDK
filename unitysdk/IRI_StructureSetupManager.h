#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define IRI_STRUCTURESETUPMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x19316D90)

inline static constexpr unsigned int IRI_StructureSetupManager_TypeDefinitionIndex = 48586;

	class IRI_StructureSetupManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_STRUCTURESETUPMANAGER_CTOR_OFFSET))(this);
		}

	};
