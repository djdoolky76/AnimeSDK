#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBtnType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class HDGLGNMBEKO;

#define HDGLGNMBEKO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE660C0)
#define HDGLGNMBEKO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE660D0)
#define HDGLGNMBEKO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE66080)

inline static constexpr unsigned int HDGLGNMBEKO_TypeDefinitionIndex = 21489;

	class HDGLGNMBEKO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean MOKNCFJICIC; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::GameCore::FiveDimBtnType MBOBPDOAGLL; // 0x1C
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
