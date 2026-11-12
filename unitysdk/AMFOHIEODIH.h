#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class AMFOHIEODIH;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }

#define AMFOHIEODIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE87460)
#define AMFOHIEODIH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DE87490)
#define AMFOHIEODIH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DE87410)

inline static constexpr unsigned int AMFOHIEODIH_TypeDefinitionIndex = 22409;

	class AMFOHIEODIH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFOHIEODIH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AMFOHIEODIH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AMFOHIEODIH*))((::PBYTE)hIl2Cpp + AMFOHIEODIH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::AMFOHIEODIH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AMFOHIEODIH*))((::PBYTE)hIl2Cpp + AMFOHIEODIH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
