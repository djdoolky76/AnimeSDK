#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingFesAwardTypeEnum.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingFesAwardTypeRow; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGFESAWARDTYPEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F914CB0)
#define RPG_GAMECORE_CHENLINGFESAWARDTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F914AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesAwardTypeRow_TypeDefinitionIndex = 11125;

	class ChenLingFesAwardTypeRow : public ::System::Object
	{
	public:
		::System::String* AwardIconPath; // 0x10
		::RPG::GameCore::ChenLingFesAwardTypeEnum AwardType; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID AwardDesc; // 0x20
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
