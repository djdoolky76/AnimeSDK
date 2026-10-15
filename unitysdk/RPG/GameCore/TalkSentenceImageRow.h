#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TalkSentenceImageRow; }
namespace System { class String; }

#define RPG_GAMECORE_TALKSENTENCEIMAGEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB2A8E0)
#define RPG_GAMECORE_TALKSENTENCEIMAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB29EB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TalkSentenceImageRow_TypeDefinitionIndex = 15222;

	class TalkSentenceImageRow : public ::System::Object
	{
	public:
		::System::String* Comment; // 0x10
		::System::String* ImagePath; // 0x18
		::System::String* Speaker; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCEIMAGEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TalkSentenceImageRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TalkSentenceImageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCEIMAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
