#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::CustomRP { class DebugShaderHotReloadMsg; }
namespace RPG::CustomRP { class IRPMessage; }
namespace System { class String; }

#define RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSGCREATOR_APPLYCOMPUTESHADERBYTES_OFFSET UNITYSDK_OFFSET(0x1CC2AA50)
#define RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSGCREATOR_APPLYSHADERBYTES_OFFSET UNITYSDK_OFFSET(0x1CC2A890)
#define RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSGCREATOR_APPLYSHADERHOTRELOADMSG_OFFSET UNITYSDK_OFFSET(0x1CC2AC20)
#define RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSGCREATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC2AE50)
#define RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSGCREATOR_ONMSG_OFFSET UNITYSDK_OFFSET(0x1CC2AC70)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DebugShaderHotReloadMsgCreator_TypeDefinitionIndex = 37750;

	class DebugShaderHotReloadMsgCreator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSGCREATOR_CTOR_OFFSET))(this);
		}

		static ::System::Boolean ApplyShaderBytes(::System::String* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSGCREATOR_APPLYSHADERBYTES_OFFSET))(a1, a2);
		}

		static ::System::Boolean ApplyComputeShaderBytes(::System::String* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSGCREATOR_APPLYCOMPUTESHADERBYTES_OFFSET))(a1, a2);
		}

		static ::System::Boolean ApplyShaderHotReloadMsg(::RPG::CustomRP::DebugShaderHotReloadMsg* a1)
		{
			return ((::System::Boolean(*)(::RPG::CustomRP::DebugShaderHotReloadMsg*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSGCREATOR_APPLYSHADERHOTRELOADMSG_OFFSET))(a1);
		}

		::System::Void OnMsg(::RPG::CustomRP::IRPMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::IRPMessage*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSGCREATOR_ONMSG_OFFSET))(this, a1);
		}

	};
}
