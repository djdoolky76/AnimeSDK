#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APKJLMDEMLI;
class ENDEAPMHAOI;
namespace RPG::GameCore { class CakeRaceEventHandler; }

#define ENDEAPMHAOI___C__DISPLAYCLASS20_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5D82D0)
#define ENDEAPMHAOI___C__DISPLAYCLASS20_0___REGISTEREVENTHANDLERS_G__HANDLER_0_OFFSET UNITYSDK_OFFSET(0x1C5D82E0)

inline static constexpr unsigned int ENDEAPMHAOI___c__DisplayClass20_0_TypeDefinitionIndex = 37402;

	class ENDEAPMHAOI___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::CakeRaceEventHandler* eventHandler; // 0x10
		::ENDEAPMHAOI* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDEAPMHAOI___C__DISPLAYCLASS20_0_CTOR_OFFSET))(this);
		}

		::System::Void __RegisterEventHandlers_g__handler_0(::APKJLMDEMLI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APKJLMDEMLI*))((::PBYTE)hIl2Cpp + ENDEAPMHAOI___C__DISPLAYCLASS20_0___REGISTEREVENTHANDLERS_G__HANDLER_0_OFFSET))(this, a1);
		}

	};
