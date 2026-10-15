#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class HCKGHEOLECJ;
namespace RPG::GameCore { class DynamicString; }

#define HCKGHEOLECJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE5DCD0)
#define HCKGHEOLECJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE5DCE0)
#define HCKGHEOLECJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE5DCA0)

inline static constexpr unsigned int HCKGHEOLECJ_TypeDefinitionIndex = 22663;

	class HCKGHEOLECJ : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DynamicString*>* GIHPNFAEJFK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCKGHEOLECJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HCKGHEOLECJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HCKGHEOLECJ*))((::PBYTE)hIl2Cpp + HCKGHEOLECJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::HCKGHEOLECJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HCKGHEOLECJ*))((::PBYTE)hIl2Cpp + HCKGHEOLECJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
