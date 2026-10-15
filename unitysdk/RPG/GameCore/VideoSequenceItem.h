#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VideoSequenceItem; }
namespace System { class String; }

#define RPG_GAMECORE_VIDEOSEQUENCEITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC902D0)
#define RPG_GAMECORE_VIDEOSEQUENCEITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC900C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VideoSequenceItem_TypeDefinitionIndex = 17017;

	class VideoSequenceItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 VideoID; // 0x10
		::System::Boolean IsLoop; // 0x14
		::System::Byte _padding0[0x3];
		::System::String* DefaultTexturePath; // 0x18
		::System::String* SoundEvent; // 0x20
		::System::UInt32 VoiceID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VIDEOSEQUENCEITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VideoSequenceItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VideoSequenceItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VIDEOSEQUENCEITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
