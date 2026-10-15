#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class KJCIMIGBELH;
namespace RPG::GameCore { class ChenLingFesTargetConfig; }
namespace System { class String; }

#define KJCIMIGBELH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D096C60)
#define KJCIMIGBELH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D096C70)
#define KJCIMIGBELH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D096C30)

inline static constexpr unsigned int KJCIMIGBELH_TypeDefinitionIndex = 21499;

	class KJCIMIGBELH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ChenLingFesTargetConfig* GMJKHCGCNKA; // 0x18
		::System::String* KFEHPOFIOOA; // 0x20
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
