#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AreaMapMenuIconRow; }
namespace System { class String; }

#define RPG_GAMECORE_AREAMAPMENUICONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C9C30)
#define RPG_GAMECORE_AREAMAPMENUICONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3C9640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AreaMapMenuIconRow_TypeDefinitionIndex = 14006;

	class AreaMapMenuIconRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 ID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AREAMAPMENUICONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AreaMapMenuIconRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AreaMapMenuIconRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AREAMAPMENUICONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
