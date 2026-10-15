#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class KHJCNJAILFO;

#define KHJCNJAILFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0645D0)
#define KHJCNJAILFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0645E0)
#define KHJCNJAILFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D064510)

inline static constexpr unsigned int KHJCNJAILFO_TypeDefinitionIndex = 21147;

	class KHJCNJAILFO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHJCNJAILFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KHJCNJAILFO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KHJCNJAILFO*))((::PBYTE)hIl2Cpp + KHJCNJAILFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::KHJCNJAILFO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KHJCNJAILFO*))((::PBYTE)hIl2Cpp + KHJCNJAILFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
