#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IdleLiveSpineAnimTriggerType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class HNAMMBJPEDF;
namespace RPG::GameCore { class IdleLiveSpineAnimTriggerRow; }

#define RPG_GAMECORE_IDLELIVESPINEANIMTRIGGERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D752400)
#define RPG_GAMECORE_IDLELIVESPINEANIMTRIGGERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7522B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveSpineAnimTriggerRow_TypeDefinitionIndex = 11814;

	class IdleLiveSpineAnimTriggerRow : public ::System::Object
	{
	public:
		::Il2CppArray<::HNAMMBJPEDF*>* AnimGroupPool; // 0x10
		::RPG::GameCore::IdleLiveSpineAnimTriggerType TriggerType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESPINEANIMTRIGGERROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveSpineAnimTriggerRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveSpineAnimTriggerRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESPINEANIMTRIGGERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
