#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Cinemachine { class CinemachineCRPVirtualCamera; }
namespace UnityEngine::Rendering { class CRPVirtualCamera; }

#define MFFGCMFIFNA_EDMAHHFGKMD_CTOR_OFFSET UNITYSDK_OFFSET(0xB8F3360)

	class MFFGCMFIFNA_EDMAHHFGKMD : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::CRPVirtualCamera* NEFNCKGGCEN; // 0x10
		::Cinemachine::CinemachineCRPVirtualCamera* APNIMMDOLMO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFGCMFIFNA_EDMAHHFGKMD_CTOR_OFFSET))(this);
		}

	};
