#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LimaoNewsLevelRow; }

#define RPG_GAMECORE_LIMAONEWSLEVELROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7D12F0)
#define RPG_GAMECORE_LIMAONEWSLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7D0B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LimaoNewsLevelRow_TypeDefinitionIndex = 13951;

	class LimaoNewsLevelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EventFinishConditionIDList; // 0x10
		::RPG::Client::TextID BeforeLevelEvent; // 0x18
		::RPG::Client::TextID AfterLevelEvent; // 0x28
		::System::Boolean IsTriggerEvent; // 0x38
		::System::Byte _padding0[0x3];
		::System::UInt32 Level; // 0x3C
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
