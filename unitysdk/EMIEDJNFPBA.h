#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class HoyoTagContainer; }

#define EMIEDJNFPBA_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA61540)
#define EMIEDJNFPBA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA61590)

	class EMIEDJNFPBA : public ::System::Object
	{
	public:
		::RPG::GameCore::HoyoTagContainer* DCLGGMAEMAO; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMIEDJNFPBA_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMIEDJNFPBA_CLEAR_OFFSET))(this);
		}

	};
