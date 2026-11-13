#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class FarmGuide; }

#define CIAMLFMPHOM___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0x16E335D0)
#define CIAMLFMPHOM___C__DISPLAYCLASS1_0___CREATEGUIDE_B__0_OFFSET UNITYSDK_OFFSET(0x16E33AB0)

inline static constexpr unsigned int CIAMLFMPHOM___c__DisplayClass1_0_TypeDefinitionIndex = 67525;

	class CIAMLFMPHOM___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::UInt32 farmID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIAMLFMPHOM___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __CreateGuide_b__0(::RPG::Client::FarmGuide* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FarmGuide*))((::PBYTE)hIl2Cpp + CIAMLFMPHOM___C__DISPLAYCLASS1_0___CREATEGUIDE_B__0_OFFSET))(this, a1);
		}

	};
