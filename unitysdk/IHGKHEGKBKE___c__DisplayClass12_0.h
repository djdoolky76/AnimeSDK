#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IHGKHEGKBKE;
namespace RPG::Client { class UIController; }

#define IHGKHEGKBKE___C__DISPLAYCLASS12_0_CTOR_OFFSET UNITYSDK_OFFSET(0x19F72E80)
#define IHGKHEGKBKE___C__DISPLAYCLASS12_0__TRYAUTOSHOW_B__0_OFFSET UNITYSDK_OFFSET(0x19F738F0)

inline static constexpr unsigned int IHGKHEGKBKE___c__DisplayClass12_0_TypeDefinitionIndex = 84881;

	class IHGKHEGKBKE___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::IHGKHEGKBKE* __4__this; // 0x10
		::System::UInt32 challengeID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGKHEGKBKE___C__DISPLAYCLASS12_0_CTOR_OFFSET))(this);
		}

		::System::Void _TryAutoShow_b__0(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + IHGKHEGKBKE___C__DISPLAYCLASS12_0__TRYAUTOSHOW_B__0_OFFSET))(this, a1);
		}

	};
