#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TextSpriteConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_TEXTSPRITECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB81EC0)
#define RPG_GAMECORE_TEXTSPRITECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB81D90)

namespace RPG::GameCore
{
	class TextSpriteConfigRow : public ::System::Object
	{
	public:
		::System::String* SpritePath; // 0x10
		::System::String* SpriteName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTSPRITECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TextSpriteConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TextSpriteConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTSPRITECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
