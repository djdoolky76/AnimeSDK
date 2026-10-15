#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BFKKNBNIBFB;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }

#define BFKKNBNIBFB_CTOR_OFFSET UNITYSDK_OFFSET(0x1D649420)
#define BFKKNBNIBFB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D649430)
#define BFKKNBNIBFB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6746A0)

inline static constexpr unsigned int BFKKNBNIBFB_TypeDefinitionIndex = 23161;

	class BFKKNBNIBFB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* OJMMBJHNOCA; // 0x18
		::System::Boolean GNDCCBNILML; // 0x20
		::System::Boolean EKGDOELGLFK; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKKNBNIBFB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BFKKNBNIBFB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BFKKNBNIBFB*))((::PBYTE)hIl2Cpp + BFKKNBNIBFB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BFKKNBNIBFB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BFKKNBNIBFB*))((::PBYTE)hIl2Cpp + BFKKNBNIBFB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
