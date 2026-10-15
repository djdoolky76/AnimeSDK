#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimMusicCueInfo; }
namespace RPG::GameCore { class FiveDimMusicEventInfo; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMMUSICCUEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6CDEA0)
#define RPG_GAMECORE_FIVEDIMMUSICCUEINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6CDCC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMusicCueInfo_TypeDefinitionIndex = 18817;

	class FiveDimMusicCueInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* CueName; // 0x10
		::System::Single Time; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::FiveDimMusicEventInfo*>* EventInfos; // 0x20
		::System::String* CueGUID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUSICCUEINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimMusicCueInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimMusicCueInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUSICCUEINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
