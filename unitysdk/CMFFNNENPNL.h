#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class CMFFNNENPNL;
class FCOEMCEDLNL;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CMFFNNENPNL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC82340)
#define CMFFNNENPNL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC82350)
#define CMFFNNENPNL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC82300)

inline static constexpr unsigned int CMFFNNENPNL_TypeDefinitionIndex = 23720;

	class CMFFNNENPNL : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::RPG::GameCore::JsonEnum* HMHJNMGOCLC; // 0x20
		::System::String* HDHCKOKMAGF; // 0x28
		::System::String* OFLNJBCADMN; // 0x30
		::RPG::GameCore::TargetEvaluator* KBFPDJJLDFA; // 0x38
		::System::Boolean ICADPILMFPK; // 0x40
		::System::Byte _padding0[0x3];
		::System::Int32 NALMBOOCCIN; // 0x44
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
