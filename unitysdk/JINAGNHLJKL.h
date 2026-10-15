#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class JINAGNHLJKL;

#define JINAGNHLJKL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D037330)
#define JINAGNHLJKL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D037340)
#define JINAGNHLJKL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D037300)

inline static constexpr unsigned int JINAGNHLJKL_TypeDefinitionIndex = 10220;

	class JINAGNHLJKL : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single HGLGJAMKBGH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JINAGNHLJKL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JINAGNHLJKL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JINAGNHLJKL*))((::PBYTE)hIl2Cpp + JINAGNHLJKL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JINAGNHLJKL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JINAGNHLJKL*))((::PBYTE)hIl2Cpp + JINAGNHLJKL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
