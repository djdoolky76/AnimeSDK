#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EmotionID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PhotoGraphConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_PHOTOGRAPHCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E2BE0)
#define RPG_GAMECORE_PHOTOGRAPHCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8E2A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphConfigRow_TypeDefinitionIndex = 14489;

	class PhotoGraphConfigRow : public ::System::Object
	{
	public:
		::System::String* EmotionIconPath; // 0x10
		::RPG::GameCore::EmotionID EmotionID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID EmotionName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
