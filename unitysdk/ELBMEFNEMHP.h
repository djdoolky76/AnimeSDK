#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class ELBMEFNEMHP;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define ELBMEFNEMHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD99CC0)
#define ELBMEFNEMHP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD99D00)
#define ELBMEFNEMHP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD99C60)

	class ELBMEFNEMHP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* GFNAPNFFGPJ; // 0x18
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::System::Single HKGPLKJOCDH; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBMEFNEMHP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ELBMEFNEMHP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ELBMEFNEMHP*))((::PBYTE)hIl2Cpp + ELBMEFNEMHP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::ELBMEFNEMHP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ELBMEFNEMHP*))((::PBYTE)hIl2Cpp + ELBMEFNEMHP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
