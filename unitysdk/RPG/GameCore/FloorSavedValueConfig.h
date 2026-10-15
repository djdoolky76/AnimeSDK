#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FloorSavedValueConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FLOORSAVEDVALUECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B9520)
#define RPG_GAMECORE_FLOORSAVEDVALUECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B9230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloorSavedValueConfig_TypeDefinitionIndex = 18286;

	class FloorSavedValueConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt16 ID; // 0x10
		::System::Boolean IsDelete; // 0x12
		::System::Byte _padding0[0x5];
		::System::String* Name; // 0x18
		::System::Int16 DefaultValue; // 0x20
		::System::Byte _padding1[0x6];
		::Il2CppArray<::System::Int16>* AllowedValues; // 0x28
		::System::Int16 MaxValue; // 0x30
		::System::Int16 MinValue; // 0x32
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORSAVEDVALUECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FloorSavedValueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FloorSavedValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORSAVEDVALUECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
