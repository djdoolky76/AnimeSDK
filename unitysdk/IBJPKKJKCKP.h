#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class IBJPKKJKCKP;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define IBJPKKJKCKP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEDECE0)
#define IBJPKKJKCKP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CEDECF0)
#define IBJPKKJKCKP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CEDECB0)

	class IBJPKKJKCKP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* KAHBCKFNAFM; // 0x18
		::Il2CppArray<::System::String*>* ECMLCKMOOHJ; // 0x20
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBJPKKJKCKP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IBJPKKJKCKP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IBJPKKJKCKP*))((::PBYTE)hIl2Cpp + IBJPKKJKCKP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::IBJPKKJKCKP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IBJPKKJKCKP*))((::PBYTE)hIl2Cpp + IBJPKKJKCKP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
