#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class CMFFNNENPNL;
class FCOEMCEDLNL;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CMFFNNENPNL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCAFBB0)
#define CMFFNNENPNL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCAFBC0)
#define CMFFNNENPNL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCAFB70)

	class CMFFNNENPNL : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::JsonEnum* HMHJNMGOCLC; // 0x18
		::System::String* OFLNJBCADMN; // 0x20
		::System::String* HDHCKOKMAGF; // 0x28
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x30
		::RPG::GameCore::TargetEvaluator* KBFPDJJLDFA; // 0x38
		::System::Int32 NALMBOOCCIN; // 0x40
		::System::Boolean ICADPILMFPK; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMFFNNENPNL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CMFFNNENPNL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CMFFNNENPNL*))((::PBYTE)hIl2Cpp + CMFFNNENPNL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CMFFNNENPNL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CMFFNNENPNL*))((::PBYTE)hIl2Cpp + CMFFNNENPNL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
