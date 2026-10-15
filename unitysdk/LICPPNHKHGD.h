#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LICPPNHKHGD;
namespace RPG::GameCore { class TargetEvaluator; }

#define LICPPNHKHGD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0F5C50)
#define LICPPNHKHGD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0F5C80)
#define LICPPNHKHGD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0F5C00)

inline static constexpr unsigned int LICPPNHKHGD_TypeDefinitionIndex = 22051;

	class LICPPNHKHGD : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LICPPNHKHGD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LICPPNHKHGD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LICPPNHKHGD*))((::PBYTE)hIl2Cpp + LICPPNHKHGD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LICPPNHKHGD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LICPPNHKHGD*))((::PBYTE)hIl2Cpp + LICPPNHKHGD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
