#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class CMOKPGLKOOG;
class FCOEMCEDLNL;

#define CMOKPGLKOOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC843C0)
#define CMOKPGLKOOG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC843D0)
#define CMOKPGLKOOG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC84300)

inline static constexpr unsigned int CMOKPGLKOOG_TypeDefinitionIndex = 19926;

	class CMOKPGLKOOG : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOKPGLKOOG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CMOKPGLKOOG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CMOKPGLKOOG*))((::PBYTE)hIl2Cpp + CMOKPGLKOOG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CMOKPGLKOOG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CMOKPGLKOOG*))((::PBYTE)hIl2Cpp + CMOKPGLKOOG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
