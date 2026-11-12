#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LimaoNewsLevelRow; }

#define RPG_GAMECORE_LIMAONEWSLEVELROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA12CB0)
#define RPG_GAMECORE_LIMAONEWSLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA12520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LimaoNewsLevelRow_TypeDefinitionIndex = 14108;

	class LimaoNewsLevelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EventFinishConditionIDList; // 0x10
		::System::UInt32 Level; // 0x18
		::System::Boolean IsTriggerEvent; // 0x1C
		::System::Byte _padding0[0x3];
		::RPG::Client::TextID BeforeLevelEvent; // 0x20
		::RPG::Client::TextID AfterLevelEvent; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMAONEWSLEVELROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LimaoNewsLevelRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LimaoNewsLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMAONEWSLEVELROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
