#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ToastManagerRow; }
namespace System { class String; }

#define RPG_GAMECORE_TOASTMANAGERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB5DEA0)
#define RPG_GAMECORE_TOASTMANAGERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB5D4D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ToastManagerRow_TypeDefinitionIndex = 15305;

	class ToastManagerRow : public ::System::Object
	{
	public:
		::System::String* FuncName; // 0x10
		::System::UInt32 Priority; // 0x18
		::System::UInt32 Duration; // 0x1C
		::System::Boolean IsinBattle; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTMANAGERROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ToastManagerRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ToastManagerRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTMANAGERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
