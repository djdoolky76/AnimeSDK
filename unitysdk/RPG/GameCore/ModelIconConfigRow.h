#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ModelIconConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_MODELICONCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D88BD50)
#define RPG_GAMECORE_MODELICONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D88BC20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModelIconConfigRow_TypeDefinitionIndex = 12578;

	class ModelIconConfigRow : public ::System::Object
	{
	public:
		::System::String* PrefabPath; // 0x10
		::System::UInt32 ID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODELICONCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModelIconConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModelIconConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODELICONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
