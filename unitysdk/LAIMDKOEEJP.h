#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame { class PlacementConfig; }

#define LAIMDKOEEJP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C90C770)

inline static constexpr unsigned int LAIMDKOEEJP_TypeDefinitionIndex = 42343;

	class LAIMDKOEEJP : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::PlacementConfig* EABKOHGCHFP; // 0x10
		::System::Int32 KOJFHFAKKFO; // 0x18
		::System::Single NJCACLIGLJA; // 0x1C
		::System::Single PLHMCJGHFFB; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAIMDKOEEJP_CTOR_OFFSET))(this);
		}

	};
