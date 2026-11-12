#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class EAFAGENDEJO;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define EAFAGENDEJO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF2D090)
#define EAFAGENDEJO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DF2D0A0)
#define EAFAGENDEJO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DF2D060)

inline static constexpr unsigned int EAFAGENDEJO_TypeDefinitionIndex = 21882;

	class EAFAGENDEJO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* OLOIFNNLKJP; // 0x18
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::System::Single IEHPFADHJFD; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFAGENDEJO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EAFAGENDEJO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EAFAGENDEJO*))((::PBYTE)hIl2Cpp + EAFAGENDEJO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EAFAGENDEJO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EAFAGENDEJO*))((::PBYTE)hIl2Cpp + EAFAGENDEJO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
