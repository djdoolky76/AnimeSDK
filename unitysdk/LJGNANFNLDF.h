#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define LJGNANFNLDF_CLEAR_OFFSET UNITYSDK_OFFSET(0x1732FDF0)
#define LJGNANFNLDF_CTOR_OFFSET UNITYSDK_OFFSET(0x1732FE40)

inline static constexpr unsigned int LJGNANFNLDF_TypeDefinitionIndex = 56027;

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
