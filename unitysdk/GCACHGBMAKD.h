#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GCACHGBMAKD;

#define GCACHGBMAKD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E004E90)
#define GCACHGBMAKD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E004EA0)
#define GCACHGBMAKD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E004DD0)

inline static constexpr unsigned int GCACHGBMAKD_TypeDefinitionIndex = 23042;

	class GCACHGBMAKD : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCACHGBMAKD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GCACHGBMAKD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GCACHGBMAKD*))((::PBYTE)hIl2Cpp + GCACHGBMAKD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GCACHGBMAKD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GCACHGBMAKD*))((::PBYTE)hIl2Cpp + GCACHGBMAKD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
