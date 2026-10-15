#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueBuffData; }

#define NLNFLEDEKGM___C__DISPLAYCLASS11_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBC705E0)
#define NLNFLEDEKGM___C__DISPLAYCLASS11_0__GET_B__0_OFFSET UNITYSDK_OFFSET(0xBC70660)

inline static constexpr unsigned int NLNFLEDEKGM___c__DisplayClass11_0_TypeDefinitionIndex = 67191;

	class NLNFLEDEKGM___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::UInt32 buffID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNFLEDEKGM___C__DISPLAYCLASS11_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _Get_b__0(::RPG::Client::RogueBuffData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueBuffData*))((::PBYTE)hIl2Cpp + NLNFLEDEKGM___C__DISPLAYCLASS11_0__GET_B__0_OFFSET))(this, a1);
		}

	};
