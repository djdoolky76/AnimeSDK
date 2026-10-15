#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class KOFKLJILCOE;

#define KOFKLJILCOE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D090E50)
#define KOFKLJILCOE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D090E60)
#define KOFKLJILCOE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D090D90)

inline static constexpr unsigned int KOFKLJILCOE_TypeDefinitionIndex = 23168;

	class KOFKLJILCOE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFKLJILCOE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KOFKLJILCOE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KOFKLJILCOE*))((::PBYTE)hIl2Cpp + KOFKLJILCOE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::KOFKLJILCOE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KOFKLJILCOE*))((::PBYTE)hIl2Cpp + KOFKLJILCOE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
