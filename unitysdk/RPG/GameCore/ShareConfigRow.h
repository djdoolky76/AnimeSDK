#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShareConfigRow; }

#define RPG_GAMECORE_SHARECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD0160)
#define RPG_GAMECORE_SHARECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DACFFC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShareConfigRow_TypeDefinitionIndex = 14491;

	class ShareConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ShareChannelList; // 0x10
		::System::Boolean IsOverSea; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 PlatformType; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHARECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShareConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShareConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHARECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
