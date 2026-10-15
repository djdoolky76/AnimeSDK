#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConstValueClientRow; }
namespace RPG::GameCore { class DynamicValue; }
namespace System { class String; }

#define RPG_GAMECORE_CONSTVALUECLIENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D7B80)
#define RPG_GAMECORE_CONSTVALUECLIENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5D75D0)

namespace RPG::GameCore
{
	class ConstValueClientRow : public ::System::Object
	{
	public:
		::System::String* ConstValueName; // 0x10
		::RPG::GameCore::DynamicValue* Value; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUECLIENTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConstValueClientRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConstValueClientRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUECLIENTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
