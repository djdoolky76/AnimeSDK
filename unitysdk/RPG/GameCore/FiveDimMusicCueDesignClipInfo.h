#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimMusicCueDesignClipInfo; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMMUSICCUEDESIGNCLIPINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6CDCB0)
#define RPG_GAMECORE_FIVEDIMMUSICCUEDESIGNCLIPINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6CDA90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMusicCueDesignClipInfo_TypeDefinitionIndex = 18818;

	class FiveDimMusicCueDesignClipInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* Name; // 0x18
		::System::Int32 TrackIndex; // 0x20
		::System::Single StartTime; // 0x24
		::System::Single Duration; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUSICCUEDESIGNCLIPINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimMusicCueDesignClipInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimMusicCueDesignClipInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUSICCUEDESIGNCLIPINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
