#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLCPJJMHAGO;
namespace RPG::Client { class RogueAeonData; }

#define RPG_CLIENT_ROGUEAEONDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xDEE3660)
#define RPG_CLIENT_ROGUEAEONDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDEE3730)
#define RPG_CLIENT_ROGUEAEONDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0xDEE3740)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueAeonData_TypeDefinitionIndex = 67466;

	class RogueAeonData : public ::System::Object
	{
	public:
		::System::UInt32 MaxLevel; // 0x10
		::System::UInt32 AeonID; // 0x14
		::System::UInt32 Level; // 0x18
		::System::UInt32 Exp; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAEONDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueAeonData* Create(::FLCPJJMHAGO* a1)
		{
			return ((::RPG::Client::RogueAeonData*(*)(::FLCPJJMHAGO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAEONDATA_CREATE_OFFSET))(a1);
		}

		::System::Void Refresh(::FLCPJJMHAGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FLCPJJMHAGO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAEONDATA_REFRESH_OFFSET))(this, a1);
		}

	};
}
