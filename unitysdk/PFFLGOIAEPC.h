#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class PFFLGOIAEPC;
namespace RPG::GameCore { class ChenLingFesTargetConfig; }
namespace System { class String; }

#define PFFLGOIAEPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4E7190)
#define PFFLGOIAEPC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E4E71A0)
#define PFFLGOIAEPC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E4E7160)

inline static constexpr unsigned int PFFLGOIAEPC_TypeDefinitionIndex = 21870;

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
