#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KBKJEDAFBDO;
namespace RPG::Client { class Stage; }

#define KBKJEDAFBDO___C__DISPLAYCLASS34_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBB9B1D0)
#define KBKJEDAFBDO___C__DISPLAYCLASS34_0___ONREGIONRESUMEUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0xBB9C1A0)

inline static constexpr unsigned int KBKJEDAFBDO___c__DisplayClass34_0_TypeDefinitionIndex = 61812;

	class KBKJEDAFBDO___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::RPG::Client::Stage* currentStage; // 0x10
		::KBKJEDAFBDO* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKJEDAFBDO___C__DISPLAYCLASS34_0_CTOR_OFFSET))(this);
		}

		::System::Void __OnRegionResumeUpdate_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKJEDAFBDO___C__DISPLAYCLASS34_0___ONREGIONRESUMEUPDATE_B__0_OFFSET))(this);
		}

	};
