#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/Prop/DronesPuzzleAreaConfig.h"
class OCAMFPAJPDH;

#define OGEFODDPPOF_CTOR_OFFSET UNITYSDK_OFFSET(0xBE57080)

inline static constexpr unsigned int OGEFODDPPOF_TypeDefinitionIndex = 78572;

	class OGEFODDPPOF : public ::System::Object
	{
	public:
		::OCAMFPAJPDH* COANEIDOBOG; // 0x10
		::System::Void _ctor(::RPG::Client::Prop::DronesPuzzleAreaConfig a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::DronesPuzzleAreaConfig))((::PBYTE)hIl2Cpp + OGEFODDPPOF_CTOR_OFFSET))(this, a1);
		}

	};
