#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EnterPageConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_ENTERPAGECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D645550)
#define RPG_GAMECORE_ENTERPAGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6454A0)

namespace RPG::GameCore
{
	class EnterPageConfigRow : public ::System::Object
	{
	public:
		::System::String* Key; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERPAGECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnterPageConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnterPageConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERPAGECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
