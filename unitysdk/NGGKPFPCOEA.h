#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NGGKPFPCOEA;
namespace RPG::GameCore { class TargetEvaluator; }

#define NGGKPFPCOEA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E41BD50)
#define NGGKPFPCOEA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E41BD60)
#define NGGKPFPCOEA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E41BD20)

inline static constexpr unsigned int NGGKPFPCOEA_TypeDefinitionIndex = 22737;

	class NGGKPFPCOEA : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGGKPFPCOEA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NGGKPFPCOEA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NGGKPFPCOEA*))((::PBYTE)hIl2Cpp + NGGKPFPCOEA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NGGKPFPCOEA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NGGKPFPCOEA*))((::PBYTE)hIl2Cpp + NGGKPFPCOEA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
