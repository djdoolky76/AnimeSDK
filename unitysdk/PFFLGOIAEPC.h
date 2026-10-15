#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class PFFLGOIAEPC;
namespace RPG::GameCore { class ChenLingFesTargetConfig; }
namespace System { class String; }

#define PFFLGOIAEPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2DAD40)
#define PFFLGOIAEPC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2DAD50)
#define PFFLGOIAEPC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2DAD10)

inline static constexpr unsigned int PFFLGOIAEPC_TypeDefinitionIndex = 21517;

	class PFFLGOIAEPC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ChenLingFesTargetConfig* GMJKHCGCNKA; // 0x18
		::System::String* MNDFOPKBHKP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFFLGOIAEPC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PFFLGOIAEPC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PFFLGOIAEPC*))((::PBYTE)hIl2Cpp + PFFLGOIAEPC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::PFFLGOIAEPC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PFFLGOIAEPC*))((::PBYTE)hIl2Cpp + PFFLGOIAEPC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
