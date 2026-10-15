#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class InControlMouseTypeInfoRow; }
namespace System { class String; }

#define RPG_GAMECORE_INCONTROLMOUSETYPEINFOROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D785AD0)
#define RPG_GAMECORE_INCONTROLMOUSETYPEINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7854F0)

namespace RPG::GameCore
{
	class InControlMouseTypeInfoRow : public ::System::Object
	{
	public:
		::System::String* iconForMouse; // 0x10
		::System::String* controlType; // 0x18
		::System::Boolean isSettingMouseType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLMOUSETYPEINFOROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::InControlMouseTypeInfoRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::InControlMouseTypeInfoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLMOUSETYPEINFOROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
