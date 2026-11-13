#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_PIXAIR_BASEPIXAIRPENDINGACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x18D9DAB0)
#define RPG_CLIENT_PIXAIR_BASEPIXAIRPENDINGACTION_FINISH_OFFSET UNITYSDK_OFFSET(0x18D9DB80)
#define RPG_CLIENT_PIXAIR_BASEPIXAIRPENDINGACTION_GETACTIONID_OFFSET UNITYSDK_OFFSET(0x18D9DAC0)
#define RPG_CLIENT_PIXAIR_BASEPIXAIRPENDINGACTION_GETCONTENTKEY_OFFSET UNITYSDK_OFFSET(0x18D9DBD0)
#define RPG_CLIENT_PIXAIR_BASEPIXAIRPENDINGACTION_GETISFINISHED_OFFSET UNITYSDK_OFFSET(0x18D9DB00)
#define RPG_CLIENT_PIXAIR_BASEPIXAIRPENDINGACTION_START_OFFSET UNITYSDK_OFFSET(0x18D9DB40)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int BasePixAirPendingAction_TypeDefinitionIndex = 82057;

	class BasePixAirPendingAction : public ::System::Object
	{
	public:
		::System::UInt32 _ActionID; // 0x10
		::System::Boolean _IsFinished; // 0x14
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_BASEPIXAIRPENDINGACTION_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 GetActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_BASEPIXAIRPENDINGACTION_GETACTIONID_OFFSET))(this);
		}

		::System::Boolean GetIsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_BASEPIXAIRPENDINGACTION_GETISFINISHED_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_BASEPIXAIRPENDINGACTION_START_OFFSET))(this);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_BASEPIXAIRPENDINGACTION_FINISH_OFFSET))(this);
		}

		::System::String* GetContentKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_BASEPIXAIRPENDINGACTION_GETCONTENTKEY_OFFSET))(this);
		}

	};
}
