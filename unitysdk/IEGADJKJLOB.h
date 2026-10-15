#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFEKBNIIBEL.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimGravityWalkBoardConfig; }

#define IEGADJKJLOB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CADA2A0)

inline static constexpr unsigned int IEGADJKJLOB_TypeDefinitionIndex = 43483;

	class IEGADJKJLOB : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimGravityWalkBoardConfig* EABKOHGCHFP; // 0x10
		::IFEKBNIIBEL BPAPBAFOMCH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEGADJKJLOB_CTOR_OFFSET))(this);
		}

	};
