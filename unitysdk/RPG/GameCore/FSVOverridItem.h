#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FSVOverridItem; }
namespace System { class String; }

#define RPG_GAMECORE_FSVOVERRIDITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6681C0)
#define RPG_GAMECORE_FSVOVERRIDITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D668070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FSVOverridItem_TypeDefinitionIndex = 19041;

	class FSVOverridItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Key; // 0x10
		::System::Int32 Value; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FSVOVERRIDITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FSVOverridItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FSVOverridItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FSVOVERRIDITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
