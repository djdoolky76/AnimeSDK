#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
class IPOILCLEDEE;

#define IPOILCLEDEE_CTOR_OFFSET UNITYSDK_OFFSET(0xC9ABB10)
#define IPOILCLEDEE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0xC9ABAB0)
#define IPOILCLEDEE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0xC9A0D40)

inline static constexpr unsigned int IPOILCLEDEE_TypeDefinitionIndex = 21426;

	class IPOILCLEDEE : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPOILCLEDEE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IPOILCLEDEE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IPOILCLEDEE*))((::PBYTE)hIl2Cpp + IPOILCLEDEE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::IPOILCLEDEE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IPOILCLEDEE*))((::PBYTE)hIl2Cpp + IPOILCLEDEE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
