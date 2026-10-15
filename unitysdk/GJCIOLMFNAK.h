#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GJCIOLMFNAK;

#define GJCIOLMFNAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE27240)
#define GJCIOLMFNAK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE27250)
#define GJCIOLMFNAK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE27180)

inline static constexpr unsigned int GJCIOLMFNAK_TypeDefinitionIndex = 10207;

	class GJCIOLMFNAK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJCIOLMFNAK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GJCIOLMFNAK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GJCIOLMFNAK*))((::PBYTE)hIl2Cpp + GJCIOLMFNAK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GJCIOLMFNAK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GJCIOLMFNAK*))((::PBYTE)hIl2Cpp + GJCIOLMFNAK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
