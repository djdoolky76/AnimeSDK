#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TalkImage; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_TALKIMAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB27AC0)
#define RPG_GAMECORE_TALKIMAGE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB27790)
#define RPG_GAMECORE_TALKIMAGE_PATHINVALID_OFFSET UNITYSDK_OFFSET(0x1DB27B70)
#define RPG_GAMECORE_TALKIMAGE_SHAREBYCOPY_OFFSET UNITYSDK_OFFSET(0x1DB27AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TalkImage_TypeDefinitionIndex = 24392;

	class TalkImage : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean ImageState; // 0x10
		::System::Boolean IsPlayerInvolved; // 0x11
		::System::Byte _padding0[0x6];
		::System::String* ImagePath; // 0x18
		::System::String* MaleImagePath; // 0x20
		::System::String* FemaleImagePath; // 0x28
		::System::String* MaterialPath; // 0x30
		::System::Single FadeTime; // 0x38
		::System::Boolean IsFadeBg; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKIMAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TalkImage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TalkImage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKIMAGE_FROMBINARY_OFFSET))(a1, a2);
		}

		::System::Object* ShareByCopy()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKIMAGE_SHAREBYCOPY_OFFSET))(this);
		}

		::System::Boolean PathInvalid(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKIMAGE_PATHINVALID_OFFSET))(this, a1);
		}

	};
}
