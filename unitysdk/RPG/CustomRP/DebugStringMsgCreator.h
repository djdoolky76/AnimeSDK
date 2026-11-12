#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::CustomRP { class DebugStrCb; }
namespace RPG::CustomRP { class IRPMessage; }

#define RPG_CUSTOMRP_DEBUGSTRINGMSGCREATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDD2CC0)
#define RPG_CUSTOMRP_DEBUGSTRINGMSGCREATOR_ONMSG_OFFSET UNITYSDK_OFFSET(0x1DDD2C40)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DebugStringMsgCreator_TypeDefinitionIndex = 38672;

	class DebugStringMsgCreator
	{
	public:
		static ::RPG::CustomRP::DebugStrCb** StaticGet_strCb()
		{
			return (::RPG::CustomRP::DebugStrCb**)UnitySDK::FromName("RPG.CustomRP", "DebugStringMsgCreator")->GetStaticField(0x2A380);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSTRINGMSGCREATOR_CTOR_OFFSET))(this);
		}

		::System::Void OnMsg(::RPG::CustomRP::IRPMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::IRPMessage*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSTRINGMSGCREATOR_ONMSG_OFFSET))(this, a1);
		}

	};
}
