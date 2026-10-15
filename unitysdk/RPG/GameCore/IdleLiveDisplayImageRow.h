#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveDisplayImageRow; }
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEDISPLAYIMAGEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7797C0)
#define RPG_GAMECORE_IDLELIVEDISPLAYIMAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D779690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveDisplayImageRow_TypeDefinitionIndex = 11796;

	class IdleLiveDisplayImageRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 ID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEDISPLAYIMAGEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveDisplayImageRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveDisplayImageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEDISPLAYIMAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
