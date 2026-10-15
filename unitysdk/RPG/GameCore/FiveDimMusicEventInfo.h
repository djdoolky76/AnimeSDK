#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimMusicEventInfo; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMMUSICEVENTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6CE450)
#define RPG_GAMECORE_FIVEDIMMUSICEVENTINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6CE300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMusicEventInfo_TypeDefinitionIndex = 18816;

	class FiveDimMusicEventInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EventName; // 0x10
		::Il2CppArray<::System::UInt32>* TargetEntities; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUSICEVENTINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimMusicEventInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimMusicEventInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMUSICEVENTINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
