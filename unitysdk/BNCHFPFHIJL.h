#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class BNCHFPFHIJL;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }

#define BNCHFPFHIJL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9E8E20)
#define BNCHFPFHIJL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9E8D80)
#define BNCHFPFHIJL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9E8BC0)

inline static constexpr unsigned int BNCHFPFHIJL_TypeDefinitionIndex = 23331;

	class BNCHFPFHIJL : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* CLBOONHBCLJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNCHFPFHIJL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BNCHFPFHIJL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BNCHFPFHIJL*))((::PBYTE)hIl2Cpp + BNCHFPFHIJL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BNCHFPFHIJL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BNCHFPFHIJL*))((::PBYTE)hIl2Cpp + BNCHFPFHIJL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
