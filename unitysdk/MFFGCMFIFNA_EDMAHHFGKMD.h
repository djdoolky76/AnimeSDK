#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Cinemachine { class CinemachineCRPVirtualCamera; }
namespace UnityEngine::Rendering { class CRPVirtualCamera; }

#define MFFGCMFIFNA_EDMAHHFGKMD_CTOR_OFFSET UNITYSDK_OFFSET(0x17C7D4E0)

inline static constexpr unsigned int MFFGCMFIFNA_EDMAHHFGKMD_TypeDefinitionIndex = 62045;

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
