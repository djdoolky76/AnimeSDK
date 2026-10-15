#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LDODCBONPLA;

#define LDODCBONPLA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0B67F0)
#define LDODCBONPLA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0B6800)
#define LDODCBONPLA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0B6730)

inline static constexpr unsigned int LDODCBONPLA_TypeDefinitionIndex = 21149;

	class LDODCBONPLA : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDODCBONPLA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LDODCBONPLA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LDODCBONPLA*))((::PBYTE)hIl2Cpp + LDODCBONPLA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LDODCBONPLA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LDODCBONPLA*))((::PBYTE)hIl2Cpp + LDODCBONPLA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
