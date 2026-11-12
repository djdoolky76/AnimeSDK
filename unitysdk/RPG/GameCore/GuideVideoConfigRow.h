#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GuideVideoSizeType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GuideVideoConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GUIDEVIDEOCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9650C0)
#define RPG_GAMECORE_GUIDEVIDEOCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E964EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GuideVideoConfigRow_TypeDefinitionIndex = 15572;

	class GuideVideoConfigRow : public ::System::Object
	{
	public:
		::System::String* VideoPath; // 0x10
		::RPG::GameCore::GuideVideoSizeType SizeType; // 0x18
		::System::UInt32 VideoID; // 0x1C
		::System::Boolean IsPlayerInvolved; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEVIDEOCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GuideVideoConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GuideVideoConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEVIDEOCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
