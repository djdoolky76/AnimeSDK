#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IRI_DecalCustomData_InstanceData.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define IRI_DECALCUSTOMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xB868100)
#define IRI_DECALCUSTOMDATA_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB8680C0)

inline static constexpr unsigned int IRI_DecalCustomData_TypeDefinitionIndex = 48198;

	class IRI_DecalCustomData : public ::UnityEngine::MonoBehaviour
	{
	public:
		::IRI_DecalCustomData_InstanceData CustomData; // 0x18
		// static const ::System::String* AFELNFDOOIB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DECALCUSTOMDATA_CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DECALCUSTOMDATA_ONENABLE_OFFSET))(this);
		}

	};
