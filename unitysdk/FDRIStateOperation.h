#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FDRIStateMaskEnum.h"
#include "unitysdk/System/Object.h"

#define FDRISTATEOPERATION_CTOR_OFFSET UNITYSDK_OFFSET(0x156E44E0)

	class FDRIStateOperation : public ::System::Object
	{
	public:
		::RPG::GameCore::FDRIStateMaskEnum stateCode; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDRISTATEOPERATION_CTOR_OFFSET))(this);
		}

	};
