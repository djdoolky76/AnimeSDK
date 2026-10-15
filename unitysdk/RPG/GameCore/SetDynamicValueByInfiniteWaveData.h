#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/InfiniteWaveDataType.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByInfiniteWaveData; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYINFINITEWAVEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA6AD0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYINFINITEWAVEDATA_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DAA6CC0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYINFINITEWAVEDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA6AE0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYINFINITEWAVEDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA6AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByInfiniteWaveData_TypeDefinitionIndex = 23263;

	class SetDynamicValueByInfiniteWaveData : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::InfiniteWaveDataType ValueType; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYINFINITEWAVEDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByInfiniteWaveData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByInfiniteWaveData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYINFINITEWAVEDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByInfiniteWaveData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByInfiniteWaveData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYINFINITEWAVEDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYINFINITEWAVEDATA_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
