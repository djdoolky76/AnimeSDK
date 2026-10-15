#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/VCameraState.h"
#include "unitysdk/System/Object.h"

#define MGIJBEAPGFA_CTOR_OFFSET UNITYSDK_OFFSET(0xB91A8C0)

inline static constexpr unsigned int MGIJBEAPGFA_TypeDefinitionIndex = 69621;

	class MGIJBEAPGFA : public ::System::Object
	{
	public:
		::RPG::GameCore::VCameraState NGDOLOLEAPI; // 0x10
		::RPG::GameCore::VCameraState JBCFGGDEKMH; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGIJBEAPGFA_CTOR_OFFSET))(this);
		}

	};
