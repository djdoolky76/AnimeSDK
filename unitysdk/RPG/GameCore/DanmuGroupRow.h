#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DanmuType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DanmuGroupRow; }

#define RPG_GAMECORE_DANMUGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E805F60)
#define RPG_GAMECORE_DANMUGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E805CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DanmuGroupRow_TypeDefinitionIndex = 15345;

	class DanmuGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* Contents; // 0x10
		::RPG::GameCore::DanmuType Type; // 0x18
		::System::Single FlySpeed; // 0x1C
		::System::Boolean IsLoop; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 ID; // 0x24
		::System::UInt32 RepeatTimesTillEnd; // 0x28
		::System::Single Interval; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DANMUGROUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::DanmuGroupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DanmuGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DANMUGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
