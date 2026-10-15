#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueBuffData; }

#define NLNFLEDEKGM___C__DISPLAYCLASS9_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBC77020)
#define NLNFLEDEKGM___C__DISPLAYCLASS9_0__REMOVE_B__0_OFFSET UNITYSDK_OFFSET(0xBC77140)

	class NLNFLEDEKGM___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::UInt32 buffID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNFLEDEKGM___C__DISPLAYCLASS9_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _Remove_b__0(::RPG::Client::RogueBuffData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueBuffData*))((::PBYTE)hIl2Cpp + NLNFLEDEKGM___C__DISPLAYCLASS9_0__REMOVE_B__0_OFFSET))(this, a1);
		}

	};
