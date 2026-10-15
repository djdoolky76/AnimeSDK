#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GMAccountRelicConfigRow; }

#define RPG_GAMECORE_GMACCOUNTRELICCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F9850)
#define RPG_GAMECORE_GMACCOUNTRELICCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6F9660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GMAccountRelicConfigRow_TypeDefinitionIndex = 13342;

	class GMAccountRelicConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::UInt32 ItemRelicNum; // 0x14
		::System::UInt32 ItemRelicLevel; // 0x18
		::System::UInt32 GroupID; // 0x1C
		::System::UInt32 ItemRelicID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GMACCOUNTRELICCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GMAccountRelicConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GMAccountRelicConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GMACCOUNTRELICCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
