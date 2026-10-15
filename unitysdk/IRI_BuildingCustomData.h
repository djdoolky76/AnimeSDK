#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IRI_BaseBuildingCustomData.h"
#include "unitysdk/UnityEngine/Bounds.h"
namespace System { class String; }

#define IRI_BUILDINGCUSTOMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x16533460)
#define IRI_BUILDINGCUSTOMDATA_JFGCOBEMPGB_OFFSET UNITYSDK_OFFSET(0x16533440)
#define IRI_BUILDINGCUSTOMDATA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x16533380)
#define IRI_BUILDINGCUSTOMDATA_PHOLCMFCIBM_OFFSET UNITYSDK_OFFSET(0x165333C0)

inline static constexpr unsigned int IRI_BuildingCustomData_TypeDefinitionIndex = 47165;

	class IRI_BuildingCustomData : public ::IRI_BaseBuildingCustomData
	{
	public:
		::System::String* Lod0Path; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_BUILDINGCUSTOMDATA_CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_BUILDINGCUSTOMDATA_ONENABLE_OFFSET))(this);
		}

		::System::Single PHOLCMFCIBM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_BUILDINGCUSTOMDATA_PHOLCMFCIBM_OFFSET))(this);
		}

		::UnityEngine::Bounds JFGCOBEMPGB()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_BUILDINGCUSTOMDATA_JFGCOBEMPGB_OFFSET))(this);
		}

	};
