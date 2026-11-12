#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFFCBOJNNJF.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BNCHFPFHIJL;
class FCOEMCEDLNL;
class IKAHOOLKHDN;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define IKAHOOLKHDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0FE660)
#define IKAHOOLKHDN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E0FE670)
#define IKAHOOLKHDN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E0FE620)

inline static constexpr unsigned int IKAHOOLKHDN_TypeDefinitionIndex = 23782;

	class IKAHOOLKHDN : public ::RPG::GameCore::TaskConfig
	{
	public:
		::BNCHFPFHIJL* EABKOHGCHFP; // 0x18
		::System::String* GFNAPNFFGPJ; // 0x20
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28
		::OFFCBOJNNJF GMPGDEINODK; // 0x30
		::System::Boolean GNDCCBNILML; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKAHOOLKHDN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IKAHOOLKHDN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IKAHOOLKHDN*))((::PBYTE)hIl2Cpp + IKAHOOLKHDN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::IKAHOOLKHDN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IKAHOOLKHDN*))((::PBYTE)hIl2Cpp + IKAHOOLKHDN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
