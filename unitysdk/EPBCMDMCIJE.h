#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class EPBCMDMCIJE;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class FloatCurve; }
namespace RPG::GameCore { class TargetEvaluator; }

#define EPBCMDMCIJE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDBCE20)
#define EPBCMDMCIJE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDBCE30)
#define EPBCMDMCIJE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDBCDF0)

inline static constexpr unsigned int EPBCMDMCIJE_TypeDefinitionIndex = 22467;

	class EPBCMDMCIJE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::RPG::GameCore::TargetEvaluator* KBFPDJJLDFA; // 0x20
		::RPG::GameCore::FloatCurve* NPMMJCIGLJP; // 0x28
		::RPG::GameCore::DynamicFloat* IEHPFADHJFD; // 0x30
		::RPG::GameCore::DynamicFloat* BJOCBPFKJDP; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBCMDMCIJE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EPBCMDMCIJE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EPBCMDMCIJE*))((::PBYTE)hIl2Cpp + EPBCMDMCIJE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EPBCMDMCIJE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EPBCMDMCIJE*))((::PBYTE)hIl2Cpp + EPBCMDMCIJE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
