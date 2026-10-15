#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GotoConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GOTOCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D721940)
#define RPG_GAMECORE_GOTOCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7212A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GotoConfigRow_TypeDefinitionIndex = 13328;

	class GotoConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamIntList; // 0x10
		::Il2CppArray<::System::String*>* ParamStringList; // 0x18
		::System::UInt32 UnlockMainMission; // 0x20
		::System::UInt32 UnlockID; // 0x24
		::System::UInt32 ID; // 0x28
		::System::UInt32 GotoType; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GOTOCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GotoConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GotoConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GOTOCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
