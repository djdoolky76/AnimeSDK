#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FODIJOIAPKD.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BFGMNHOONGJ;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }

#define BFGMNHOONGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1D672A40)
#define BFGMNHOONGJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D672A50)
#define BFGMNHOONGJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D672A10)

inline static constexpr unsigned int BFGMNHOONGJ_TypeDefinitionIndex = 19889;

	class BFGMNHOONGJ : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* AJHHCOHFIFA; // 0x18
		::RPG::GameCore::PropertyModifyFunction DNKFJMBHINL; // 0x20
		::FODIJOIAPKD FODBMMCKAEN; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGMNHOONGJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BFGMNHOONGJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BFGMNHOONGJ*))((::PBYTE)hIl2Cpp + BFGMNHOONGJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BFGMNHOONGJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BFGMNHOONGJ*))((::PBYTE)hIl2Cpp + BFGMNHOONGJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
