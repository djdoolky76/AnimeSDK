#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BHPKKLEKLJN;
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingFesTargetConfig; }
namespace System { class String; }

#define BHPKKLEKLJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D805A90)
#define BHPKKLEKLJN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D805AA0)
#define BHPKKLEKLJN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D805A60)

inline static constexpr unsigned int BHPKKLEKLJN_TypeDefinitionIndex = 21510;

	class BHPKKLEKLJN : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CDEEHGCEOKN; // 0x18
		::RPG::GameCore::ChenLingFesTargetConfig* GMJKHCGCNKA; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPKKLEKLJN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BHPKKLEKLJN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BHPKKLEKLJN*))((::PBYTE)hIl2Cpp + BHPKKLEKLJN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BHPKKLEKLJN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BHPKKLEKLJN*))((::PBYTE)hIl2Cpp + BHPKKLEKLJN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
