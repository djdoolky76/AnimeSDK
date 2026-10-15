#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActionOperationSetRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIONOPERATIONSETROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D318BF0)
#define RPG_GAMECORE_ACTIONOPERATIONSETROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D318660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionOperationSetRow_TypeDefinitionIndex = 13813;

	class ActionOperationSetRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* ActionNameList; // 0x10
		::System::UInt32 ID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONOPERATIONSETROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActionOperationSetRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActionOperationSetRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONOPERATIONSETROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
