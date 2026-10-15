#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ChenLingFesPosition; }

#define DODBAHAPCJA___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0x11FE02C0)
#define DODBAHAPCJA___C__DISPLAYCLASS4_0__ISGRIDBLOCKBYTUTORIAL_B__0_OFFSET UNITYSDK_OFFSET(0x11FE09C0)

	class DODBAHAPCJA___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::ChenLingFesPosition* coord; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DODBAHAPCJA___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsGridBlockByTutorial_b__0(::RPG::GameCore::ChenLingFesPosition* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChenLingFesPosition*))((::PBYTE)hIl2Cpp + DODBAHAPCJA___C__DISPLAYCLASS4_0__ISGRIDBLOCKBYTUTORIAL_B__0_OFFSET))(this, a1);
		}

	};
