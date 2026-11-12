#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LDANGCCCCCK;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define LDANGCCCCCK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2D1500)
#define LDANGCCCCCK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E2D1510)
#define LDANGCCCCCK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E2D14D0)

inline static constexpr unsigned int LDANGCCCCCK_TypeDefinitionIndex = 21885;

	class LDANGCCCCCK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::String* MGJPIILDPMF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDANGCCCCCK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LDANGCCCCCK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LDANGCCCCCK*))((::PBYTE)hIl2Cpp + LDANGCCCCCK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LDANGCCCCCK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LDANGCCCCCK*))((::PBYTE)hIl2Cpp + LDANGCCCCCK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
