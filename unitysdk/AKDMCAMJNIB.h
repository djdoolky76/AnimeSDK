#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvPlayerCancelRide; }
namespace RPG::GameCore { class TaskContext; }

#define AKDMCAMJNIB_CTOR_OFFSET UNITYSDK_OFFSET(0x12CCCBA0)
#define AKDMCAMJNIB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CCCBD0)

	class AKDMCAMJNIB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvPlayerCancelRide* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvPlayerCancelRide*))((::PBYTE)hIl2Cpp + AKDMCAMJNIB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDMCAMJNIB_ONTASKBEGIN_OFFSET))(this);
		}

	};
