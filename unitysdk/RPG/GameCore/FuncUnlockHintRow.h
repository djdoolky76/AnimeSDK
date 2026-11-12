#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FuncUnlockPromptType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FuncUnlockHintRow; }
namespace System { class String; }

#define RPG_GAMECORE_FUNCUNLOCKHINTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9028D0)
#define RPG_GAMECORE_FUNCUNLOCKHINTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E9025C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FuncUnlockHintRow_TypeDefinitionIndex = 13391;

	class FuncUnlockHintRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::Client::TextID Title; // 0x18
		::RPG::Client::TextID SubTitle; // 0x28
		::RPG::Client::TextID Desc; // 0x38
		::RPG::GameCore::FuncUnlockPromptType Type; // 0x48
		::System::UInt32 UnlockID; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCUNLOCKHINTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::FuncUnlockHintRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FuncUnlockHintRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCUNLOCKHINTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
