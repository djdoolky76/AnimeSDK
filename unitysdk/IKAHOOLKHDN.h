#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFFCBOJNNJF.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BNCHFPFHIJL;
class FCOEMCEDLNL;
class IKAHOOLKHDN;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define IKAHOOLKHDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEEBCA0)
#define IKAHOOLKHDN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CEEBCB0)
#define IKAHOOLKHDN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CEEBC60)

inline static constexpr unsigned int IKAHOOLKHDN_TypeDefinitionIndex = 23340;

	class IKAHOOLKHDN : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* GFNAPNFFGPJ; // 0x18
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::BNCHFPFHIJL* EABKOHGCHFP; // 0x28
		::System::Boolean GNDCCBNILML; // 0x30
		::System::Byte _padding0[0x3];
		::OFFCBOJNNJF GMPGDEINODK; // 0x34
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
