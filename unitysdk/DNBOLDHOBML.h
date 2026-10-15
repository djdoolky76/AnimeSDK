#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class DNBOLDHOBML;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }

#define DNBOLDHOBML_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD1B590)
#define DNBOLDHOBML_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD1B5A0)
#define DNBOLDHOBML_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD1B560)

inline static constexpr unsigned int DNBOLDHOBML_TypeDefinitionIndex = 19952;

	class DNBOLDHOBML : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::Boolean GNDCCBNILML; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBOLDHOBML_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DNBOLDHOBML* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DNBOLDHOBML*))((::PBYTE)hIl2Cpp + DNBOLDHOBML_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DNBOLDHOBML* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DNBOLDHOBML*))((::PBYTE)hIl2Cpp + DNBOLDHOBML_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
