#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class EAFAGENDEJO;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define EAFAGENDEJO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9A4AA0)
#define EAFAGENDEJO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E9A4AB0)
#define EAFAGENDEJO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E9A4A70)

inline static constexpr unsigned int EAFAGENDEJO_TypeDefinitionIndex = 21882;

	class EAFAGENDEJO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::String* OLOIFNNLKJP; // 0x20
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
