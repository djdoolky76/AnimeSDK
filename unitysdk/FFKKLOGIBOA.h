#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class FFKKLOGIBOA;

#define FFKKLOGIBOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4512E0)
#define FFKKLOGIBOA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E4512F0)
#define FFKKLOGIBOA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E451220)

inline static constexpr unsigned int FFKKLOGIBOA_TypeDefinitionIndex = 21816;

	class FFKKLOGIBOA : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFKKLOGIBOA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FFKKLOGIBOA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FFKKLOGIBOA*))((::PBYTE)hIl2Cpp + FFKKLOGIBOA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FFKKLOGIBOA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FFKKLOGIBOA*))((::PBYTE)hIl2Cpp + FFKKLOGIBOA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
