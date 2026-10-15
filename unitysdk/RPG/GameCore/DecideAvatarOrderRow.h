#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DecideAvatarOrderRow; }

#define RPG_GAMECORE_DECIDEAVATARORDERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CC990)
#define RPG_GAMECORE_DECIDEAVATARORDERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5CC380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DecideAvatarOrderRow_TypeDefinitionIndex = 13363;

	class DecideAvatarOrderRow : public ::System::Object
	{
	public:
		::System::Int32 Order; // 0x10
		::System::UInt32 ItemID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECIDEAVATARORDERROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::DecideAvatarOrderRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DecideAvatarOrderRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECIDEAVATARORDERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
