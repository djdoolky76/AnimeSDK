#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHHJPHAOIPM;
namespace RPG::Client { class PartialFlipDeviceComponent; }
namespace RPG::GameCore { class GameEntity; }

#define GHHJPHAOIPM___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15A217E0)
#define GHHJPHAOIPM___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0x15A21A90)

inline static constexpr unsigned int GHHJPHAOIPM___c__DisplayClass1_0_TypeDefinitionIndex = 52773;

	class GHHJPHAOIPM___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::RPG::Client::PartialFlipDeviceComponent* deviceComponent; // 0x10
		::GHHJPHAOIPM* __4__this; // 0x18
		::RPG::GameCore::GameEntity* pPointTarget; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHJPHAOIPM___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHJPHAOIPM___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__0_OFFSET))(this);
		}

	};
