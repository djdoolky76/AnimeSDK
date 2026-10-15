#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::CustomRP { class DebugShaderHotReloadMsg; }
namespace RPG::CustomRP { class IRPMessage; }
namespace System { class String; }

#define RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSGCREATOR_APPLYCOMPUTESHADERBYTES_OFFSET UNITYSDK_OFFSET(0x1CBFC810)
#define RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSGCREATOR_APPLYSHADERBYTES_OFFSET UNITYSDK_OFFSET(0x1CBFC650)
#define RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSGCREATOR_APPLYSHADERHOTRELOADMSG_OFFSET UNITYSDK_OFFSET(0x1CBFC9E0)
#define RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSGCREATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBFCC10)
#define RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSGCREATOR_ONMSG_OFFSET UNITYSDK_OFFSET(0x1CBFCA30)

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
