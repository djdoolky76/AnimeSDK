#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HeliobusPostImgRow; }
namespace System { class String; }

#define RPG_GAMECORE_HELIOBUSPOSTIMGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D762750)
#define RPG_GAMECORE_HELIOBUSPOSTIMGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D762160)

namespace RPG::GameCore
{
	class HeliobusPostImgRow : public ::System::Object
	{
	public:
		::System::String* PostImgPath; // 0x10
		::System::UInt32 PostImgID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTIMGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::HeliobusPostImgRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HeliobusPostImgRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTIMGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
