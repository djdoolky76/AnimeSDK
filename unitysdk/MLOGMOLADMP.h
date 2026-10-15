#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class HEKOMMJCPJF;
class MLOGMOLADMP;
namespace RPG::GameCore { class TargetEvaluator; }

#define MLOGMOLADMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1CE360)
#define MLOGMOLADMP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D1CE3A0)
#define MLOGMOLADMP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1CE300)

inline static constexpr unsigned int MLOGMOLADMP_TypeDefinitionIndex = 23200;

	class MLOGMOLADMP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::Il2CppArray<::HEKOMMJCPJF*>* GNNGLBGENGF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLOGMOLADMP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MLOGMOLADMP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MLOGMOLADMP*))((::PBYTE)hIl2Cpp + MLOGMOLADMP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MLOGMOLADMP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MLOGMOLADMP*))((::PBYTE)hIl2Cpp + MLOGMOLADMP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
