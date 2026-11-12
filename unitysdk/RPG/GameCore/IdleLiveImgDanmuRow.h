#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveImgDanmuRow; }
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEIMGDANMUROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E990330)
#define RPG_GAMECORE_IDLELIVEIMGDANMUROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E990020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveImgDanmuRow_TypeDefinitionIndex = 11843;

	class IdleLiveImgDanmuRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::System::Boolean IsExclusive; // 0x18
		::System::Byte _padding0[0x1];
		::System::UInt16 SizeType; // 0x1A
		::System::UInt32 ID; // 0x1C
		::System::Single Interval; // 0x20
		::System::UInt32 RepeatCount; // 0x24
		::System::UInt32 UnlockID; // 0x28
		::System::Single FlySpeed; // 0x2C
		::System::UInt32 TriggerID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEIMGDANMUROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveImgDanmuRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveImgDanmuRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEIMGDANMUROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
