#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TextJoinConditionalItemRow; }

#define RPG_GAMECORE_TEXTJOINCONDITIONALITEMROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB819F0)
#define RPG_GAMECORE_TEXTJOINCONDITIONALITEMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB81830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TextJoinConditionalItemRow_TypeDefinitionIndex = 15285;

	class TextJoinConditionalItemRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID TextJoinText; // 0x10
		::System::UInt32 TextJoinItemID; // 0x20
		::System::UInt32 UnlockID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTJOINCONDITIONALITEMROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TextJoinConditionalItemRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TextJoinConditionalItemRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTJOINCONDITIONALITEMROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
