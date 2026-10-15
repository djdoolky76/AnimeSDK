#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusTypeMask.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BPABHBPFOHO;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define BPABHBPFOHO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9F6BD0)
#define BPABHBPFOHO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9F6C40)
#define BPABHBPFOHO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9F6B40)

	class BPABHBPFOHO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* LGANOFMNOCG; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* MAONBNHOPBJ; // 0x20
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28
		::RPG::GameCore::PredicateConfig* IANNCHKLMOD; // 0x30
		::RPG::GameCore::TargetEvaluator* NJLICGGKCAB; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* NKCKAJPAJCJ; // 0x40
		::System::String* IFNAGLOMHBK; // 0x48
		::RPG::GameCore::DynamicFloat* LNNLLMKBAGL; // 0x50
		::RPG::GameCore::EnumStatusTypeMask JHGJBDEIJNC; // 0x58
		::System::Boolean NANPIEIOFLM; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPABHBPFOHO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BPABHBPFOHO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BPABHBPFOHO*))((::PBYTE)hIl2Cpp + BPABHBPFOHO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BPABHBPFOHO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BPABHBPFOHO*))((::PBYTE)hIl2Cpp + BPABHBPFOHO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
