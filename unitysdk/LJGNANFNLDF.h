#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define LJGNANFNLDF_CLEAR_OFFSET UNITYSDK_OFFSET(0xB718590)
#define LJGNANFNLDF_CTOR_OFFSET UNITYSDK_OFFSET(0xB7185E0)

	class LJGNANFNLDF : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJGNANFNLDF_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJGNANFNLDF_CLEAR_OFFSET))(this);
		}

	};
