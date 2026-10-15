#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
class LHLGEKFHPHA;

#define LHLGEKFHPHA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0F38A0)
#define LHLGEKFHPHA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0F38B0)
#define LHLGEKFHPHA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0F37E0)

inline static constexpr unsigned int LHLGEKFHPHA_TypeDefinitionIndex = 21329;

	class LHLGEKFHPHA : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHLGEKFHPHA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LHLGEKFHPHA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LHLGEKFHPHA*))((::PBYTE)hIl2Cpp + LHLGEKFHPHA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LHLGEKFHPHA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LHLGEKFHPHA*))((::PBYTE)hIl2Cpp + LHLGEKFHPHA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
