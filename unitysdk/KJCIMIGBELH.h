#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class KJCIMIGBELH;
namespace RPG::GameCore { class ChenLingFesTargetConfig; }
namespace System { class String; }

#define KJCIMIGBELH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D068D20)
#define KJCIMIGBELH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D068D30)
#define KJCIMIGBELH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D068CF0)

inline static constexpr unsigned int KJCIMIGBELH_TypeDefinitionIndex = 21499;

	class KJCIMIGBELH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* KFEHPOFIOOA; // 0x18
		::RPG::GameCore::ChenLingFesTargetConfig* GMJKHCGCNKA; // 0x20
		::System::String* HHMLELABBFN; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCIMIGBELH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KJCIMIGBELH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KJCIMIGBELH*))((::PBYTE)hIl2Cpp + KJCIMIGBELH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::KJCIMIGBELH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KJCIMIGBELH*))((::PBYTE)hIl2Cpp + KJCIMIGBELH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
