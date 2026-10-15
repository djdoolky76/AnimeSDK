#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TextDanmuContentRow; }

#define RPG_GAMECORE_TEXTDANMUCONTENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB53930)
#define RPG_GAMECORE_TEXTDANMUCONTENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB537B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TextDanmuContentRow_TypeDefinitionIndex = 15190;

	class TextDanmuContentRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Content; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTDANMUCONTENTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TextDanmuContentRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TextDanmuContentRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTDANMUCONTENTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
