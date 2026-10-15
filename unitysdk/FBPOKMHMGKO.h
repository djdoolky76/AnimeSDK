#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntityList; }
namespace System { class String; }

#define FBPOKMHMGKO_CTOR_OFFSET UNITYSDK_OFFSET(0x156A2AE0)

inline static constexpr unsigned int FBPOKMHMGKO_TypeDefinitionIndex = 71487;

	class FBPOKMHMGKO : public ::System::Object
	{
	public:
		::System::String* BDACPPLKLGL; // 0x10
		::RPG::GameCore::GameEntityList* GKHDCODGAMF; // 0x18
		::System::String* PHAJKALJLFP; // 0x20
		::System::Boolean CAGCHKJHMPD; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBPOKMHMGKO_CTOR_OFFSET))(this);
		}

	};
