#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IDHAIJDALAH_ValueModifyType.h"
#include "unitysdk/RPG/Client/ParkourGame/EModifyEngineFlags.h"
#include "unitysdk/System/Object.h"

	template <typename T>
	class IDHAIJDALAH_ValueStack_1 : public ::System::Object
	{
	public:
		::IDHAIJDALAH_ValueModifyType ModifyType; // 0x0
		T Value; // 0x0
		::System::Int32 Priority; // 0x0
		::System::Single Duration; // 0x0
		::RPG::Client::ParkourGame::EModifyEngineFlags Flags; // 0x0
	};
