#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FloatCurve; }
namespace RPG::GameCore { class GameEntity; }

#define FNHGDJOJACD_CLEAR_OFFSET UNITYSDK_OFFSET(0x15870DB0)
#define FNHGDJOJACD_CTOR_OFFSET UNITYSDK_OFFSET(0x15870E00)

inline static constexpr unsigned int FNHGDJOJACD_TypeDefinitionIndex = 56955;

	class FNHGDJOJACD : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* MFIEDDGBIPH; // 0x10
		::RPG::GameCore::FloatCurve* NPMMJCIGLJP; // 0x18
		::System::Single BJOCBPFKJDP; // 0x20
		::System::Single IEHPFADHJFD; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHGDJOJACD_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHGDJOJACD_CLEAR_OFFSET))(this);
		}

	};
