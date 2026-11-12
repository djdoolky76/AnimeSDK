#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LNIODOGCLAH;

#define LNIODOGCLAH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E31B7B0)
#define LNIODOGCLAH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E31B7C0)
#define LNIODOGCLAH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E31B6F0)

inline static constexpr unsigned int LNIODOGCLAH_TypeDefinitionIndex = 21887;

	class LNIODOGCLAH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNIODOGCLAH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LNIODOGCLAH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LNIODOGCLAH*))((::PBYTE)hIl2Cpp + LNIODOGCLAH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LNIODOGCLAH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LNIODOGCLAH*))((::PBYTE)hIl2Cpp + LNIODOGCLAH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
