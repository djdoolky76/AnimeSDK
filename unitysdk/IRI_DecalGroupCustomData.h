#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IRI_BaseBuildingCustomData.h"
#include "unitysdk/UnityEngine/Bounds.h"
namespace System { class String; }

#define IRI_DECALGROUPCUSTOMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x16533840)
#define IRI_DECALGROUPCUSTOMDATA_JFGCOBEMPGB_OFFSET UNITYSDK_OFFSET(0x165337E0)
#define IRI_DECALGROUPCUSTOMDATA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x16533800)
#define IRI_DECALGROUPCUSTOMDATA_PHOLCMFCIBM_OFFSET UNITYSDK_OFFSET(0x16533760)

	class IRI_DecalGroupCustomData : public ::IRI_BaseBuildingCustomData
	{
	public:
		::System::String* Lod0Path; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DECALGROUPCUSTOMDATA_CTOR_OFFSET))(this);
		}

		::System::Single PHOLCMFCIBM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DECALGROUPCUSTOMDATA_PHOLCMFCIBM_OFFSET))(this);
		}

		::UnityEngine::Bounds JFGCOBEMPGB()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DECALGROUPCUSTOMDATA_JFGCOBEMPGB_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DECALGROUPCUSTOMDATA_ONENABLE_OFFSET))(this);
		}

	};
