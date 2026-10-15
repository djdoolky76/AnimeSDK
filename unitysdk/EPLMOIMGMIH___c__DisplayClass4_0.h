#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPLMOIMGMIH;
namespace RPG::Client { class PlayGoManager; }

#define EPLMOIMGMIH___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0x155CCF00)
#define EPLMOIMGMIH___C__DISPLAYCLASS4_0__ONPLAYGOFINISH_B__0_OFFSET UNITYSDK_OFFSET(0x155CD050)

inline static constexpr unsigned int EPLMOIMGMIH___c__DisplayClass4_0_TypeDefinitionIndex = 58678;

	class EPLMOIMGMIH___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::Client::PlayGoManager* manager; // 0x10
		::EPLMOIMGMIH* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPLMOIMGMIH___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnPlayGoFinish_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPLMOIMGMIH___C__DISPLAYCLASS4_0__ONPLAYGOFINISH_B__0_OFFSET))(this, a1);
		}

	};
