#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleWheelType.h"
#include "unitysdk/RPG/GameCore/ShortCutWheelGotoType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleWheelFuncConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEWHEELFUNCCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA2B920)
#define RPG_GAMECORE_LITTLEWHEELFUNCCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA2B2D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleWheelFuncConfigRow_TypeDefinitionIndex = 13397;

	class LittleWheelFuncConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::GameCore::LittleWheelType Type; // 0x18
		::RPG::GameCore::ShortCutWheelGotoType LittleWheelFuncID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEWHEELFUNCCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleWheelFuncConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleWheelFuncConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEWHEELFUNCCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
