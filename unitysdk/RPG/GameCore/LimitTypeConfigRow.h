#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimitType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LimitTypeConfigRow; }

#define RPG_GAMECORE_LIMITTYPECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F253BA0)
#define RPG_GAMECORE_LIMITTYPECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F2531A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LimitTypeConfigRow_TypeDefinitionIndex = 15255;

	class LimitTypeConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID LimitTypeDesc; // 0x10
		::RPG::Client::TextID LimitTypeDetailDesc; // 0x20
		::RPG::GameCore::LimitType LimitType; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMITTYPECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LimitTypeConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LimitTypeConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMITTYPECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
