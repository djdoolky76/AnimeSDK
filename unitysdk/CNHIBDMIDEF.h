#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class CNHIBDMIDEF;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CNHIBDMIDEF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCB5400)
#define CNHIBDMIDEF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCB5440)
#define CNHIBDMIDEF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCB53A0)

	class CNHIBDMIDEF : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* LICBONAHFPN; // 0x18
		::Il2CppArray<::System::String*>* JNAGOECIKPA; // 0x20
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28
		::System::Boolean IOBJFEJFLJP; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNHIBDMIDEF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CNHIBDMIDEF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CNHIBDMIDEF*))((::PBYTE)hIl2Cpp + CNHIBDMIDEF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CNHIBDMIDEF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CNHIBDMIDEF*))((::PBYTE)hIl2Cpp + CNHIBDMIDEF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
