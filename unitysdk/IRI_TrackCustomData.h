#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IRI_BaseBuildingCustomData.h"
#include "unitysdk/UnityEngine/Bounds.h"
namespace System { class String; }

#define IRI_TRACKCUSTOMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x16537AC0)
#define IRI_TRACKCUSTOMDATA_JFGCOBEMPGB_OFFSET UNITYSDK_OFFSET(0x16537AA0)
#define IRI_TRACKCUSTOMDATA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x165379E0)
#define IRI_TRACKCUSTOMDATA_PHOLCMFCIBM_OFFSET UNITYSDK_OFFSET(0x16537A20)

	class IRI_TrackCustomData : public ::IRI_BaseBuildingCustomData
	{
	public:
		::System::String* Lod0Path; // 0x40
		::System::String* GeneratorPath; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_TRACKCUSTOMDATA_CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_TRACKCUSTOMDATA_ONENABLE_OFFSET))(this);
		}

		::System::Single PHOLCMFCIBM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_TRACKCUSTOMDATA_PHOLCMFCIBM_OFFSET))(this);
		}

		::UnityEngine::Bounds JFGCOBEMPGB()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_TRACKCUSTOMDATA_JFGCOBEMPGB_OFFSET))(this);
		}

	};
