#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingMagicRow; }

#define RPG_GAMECORE_CHENLINGMAGICROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D565710)
#define RPG_GAMECORE_CHENLINGMAGICROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5654E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingMagicRow_TypeDefinitionIndex = 11069;

	class ChenLingMagicRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Name; // 0x10
		::System::UInt32 EffectID; // 0x20
		::System::UInt32 ID; // 0x24
		::RPG::Client::TextID Desc; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGMAGICROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingMagicRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingMagicRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGMAGICROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
