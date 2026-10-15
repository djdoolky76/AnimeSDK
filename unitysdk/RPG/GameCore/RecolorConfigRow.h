#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RecolorConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_RECOLORCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D972690)
#define RPG_GAMECORE_RECOLORCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D972540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RecolorConfigRow_TypeDefinitionIndex = 12654;

	class RecolorConfigRow : public ::System::Object
	{
	public:
		::System::String* WhiteBGColor; // 0x10
		::System::String* DefaultColor; // 0x18
		::System::UInt32 ID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECOLORCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RecolorConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RecolorConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECOLORCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
