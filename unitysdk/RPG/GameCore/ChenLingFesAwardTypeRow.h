#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingFesAwardTypeEnum.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingFesAwardTypeRow; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGFESAWARDTYPEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E79D2B0)
#define RPG_GAMECORE_CHENLINGFESAWARDTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E79D0D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesAwardTypeRow_TypeDefinitionIndex = 11125;

	class ChenLingFesAwardTypeRow : public ::System::Object
	{
	public:
		::System::String* AwardIconPath; // 0x10
		::RPG::Client::TextID AwardDesc; // 0x18
		::RPG::GameCore::ChenLingFesAwardTypeEnum AwardType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESAWARDTYPEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingFesAwardTypeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingFesAwardTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESAWARDTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
