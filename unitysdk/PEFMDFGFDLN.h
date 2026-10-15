#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FloorConnectivityData.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class FloorConnectivityData_EdgeConnectionInfo; }
namespace RPG::Client { class FloorConnectivityData_EdgeInfo; }

#define PEFMDFGFDLN_APDNONIAFME_OFFSET UNITYSDK_OFFSET(0xC03ABE0)
#define PEFMDFGFDLN_CTOR_OFFSET UNITYSDK_OFFSET(0xC03B0A0)
#define PEFMDFGFDLN_NEMOKALPJNG_OFFSET UNITYSDK_OFFSET(0xC03B000)
#define PEFMDFGFDLN_SETUPDATA_OFFSET UNITYSDK_OFFSET(0xC039E90)
#define PEFMDFGFDLN_TRYFINDNEXTPOINT_OFFSET UNITYSDK_OFFSET(0xC03A7B0)

	class PEFMDFGFDLN : public ::RPG::Client::FloorConnectivityData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFMDFGFDLN_CTOR_OFFSET))(this);
		}

		::System::Void SetupData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFMDFGFDLN_SETUPDATA_OFFSET))(this);
		}

		::RPG::Client::FloorConnectivityData_EdgeConnectionInfo* TryFindNextPoint(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::FloorConnectivityData_EdgeConnectionInfo* a3)
		{
			return ((::RPG::Client::FloorConnectivityData_EdgeConnectionInfo*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::FloorConnectivityData_EdgeConnectionInfo*))((::PBYTE)hIl2Cpp + PEFMDFGFDLN_TRYFINDNEXTPOINT_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::FloorConnectivityData_EdgeConnectionInfo* APDNONIAFME(::RPG::Client::FloorConnectivityData_EdgeInfo* a1, ::RPG::Client::FloorConnectivityData_EdgeConnectionInfo* a2)
		{
			return ((::RPG::Client::FloorConnectivityData_EdgeConnectionInfo*(*)(::PVOID, ::RPG::Client::FloorConnectivityData_EdgeInfo*, ::RPG::Client::FloorConnectivityData_EdgeConnectionInfo*))((::PBYTE)hIl2Cpp + PEFMDFGFDLN_APDNONIAFME_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 NEMOKALPJNG(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + PEFMDFGFDLN_NEMOKALPJNG_OFFSET))(this, a1, a2);
		}

	};
