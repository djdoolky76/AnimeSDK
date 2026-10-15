#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBtnType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class HDGLGNMBEKO;

#define HDGLGNMBEKO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE941C0)
#define HDGLGNMBEKO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE941D0)
#define HDGLGNMBEKO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE94180)

inline static constexpr unsigned int HDGLGNMBEKO_TypeDefinitionIndex = 21489;

	class HDGLGNMBEKO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::FiveDimBtnType MBOBPDOAGLL; // 0x18
		::System::Boolean MOKNCFJICIC; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDGLGNMBEKO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HDGLGNMBEKO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HDGLGNMBEKO*))((::PBYTE)hIl2Cpp + HDGLGNMBEKO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::HDGLGNMBEKO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HDGLGNMBEKO*))((::PBYTE)hIl2Cpp + HDGLGNMBEKO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
