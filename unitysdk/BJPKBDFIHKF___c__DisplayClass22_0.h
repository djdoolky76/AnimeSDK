#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipReturnPackEvent; }
namespace RPG::Client { class GridFightRole; }

#define BJPKBDFIHKF___C__DISPLAYCLASS22_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1A644E10)
#define BJPKBDFIHKF___C__DISPLAYCLASS22_0___ENQUEUEROLETAKEOFF_B__0_OFFSET UNITYSDK_OFFSET(0x1A6452A0)

inline static constexpr unsigned int BJPKBDFIHKF___c__DisplayClass22_0_TypeDefinitionIndex = 66538;

	class BJPKBDFIHKF___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* role; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJPKBDFIHKF___C__DISPLAYCLASS22_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __EnqueueRoleTakeOff_b__0(::RPG::Client::GridFightEquipReturnPackEvent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipReturnPackEvent*))((::PBYTE)hIl2Cpp + BJPKBDFIHKF___C__DISPLAYCLASS22_0___ENQUEUEROLETAKEOFF_B__0_OFFSET))(this, a1);
		}

	};
