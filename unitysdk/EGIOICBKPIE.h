#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class EGIOICBKPIE;
class FCOEMCEDLNL;

#define EGIOICBKPIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD4E790)
#define EGIOICBKPIE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD4E7A0)
#define EGIOICBKPIE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD4E6D0)

inline static constexpr unsigned int EGIOICBKPIE_TypeDefinitionIndex = 19943;

	class EGIOICBKPIE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGIOICBKPIE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EGIOICBKPIE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EGIOICBKPIE*))((::PBYTE)hIl2Cpp + EGIOICBKPIE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EGIOICBKPIE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EGIOICBKPIE*))((::PBYTE)hIl2Cpp + EGIOICBKPIE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
