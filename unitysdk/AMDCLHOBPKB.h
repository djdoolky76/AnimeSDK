#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::NavMap { class ITrackPointInfo; }

#define AMDCLHOBPKB_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0x1556C200)
#define AMDCLHOBPKB_BPLPBPMEODA_2_OFFSET UNITYSDK_OFFSET(0x1556C280)
#define AMDCLHOBPKB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1556C170)

inline static constexpr unsigned int AMDCLHOBPKB_TypeDefinitionIndex = 74588;

	class AMDCLHOBPKB : public ::System::Object
	{
	public:
		static ::RPG::Client::NavMap::ITrackPointInfo* BPLPBPMEODA(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::NavMap::ITrackPointInfo*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AMDCLHOBPKB_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::NavMap::ITrackPointInfo* BPLPBPMEODA_1(::UnityEngine::Vector3 a1)
		{
			return ((::RPG::Client::NavMap::ITrackPointInfo*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AMDCLHOBPKB_BPLPBPMEODA_1_OFFSET))(a1);
		}

		static ::RPG::Client::NavMap::ITrackPointInfo* BPLPBPMEODA_2(::UnityEngine::Vector3 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::NavMap::ITrackPointInfo*(*)(::UnityEngine::Vector3, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AMDCLHOBPKB_BPLPBPMEODA_2_OFFSET))(a1, a2, a3);
		}

	};
