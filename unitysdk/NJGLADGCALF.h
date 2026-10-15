#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NJGLADGCALF;

#define NJGLADGCALF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1E9480)
#define NJGLADGCALF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D1E9490)
#define NJGLADGCALF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1E9450)

inline static constexpr unsigned int NJGLADGCALF_TypeDefinitionIndex = 21155;

	class NJGLADGCALF : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJGLADGCALF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NJGLADGCALF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NJGLADGCALF*))((::PBYTE)hIl2Cpp + NJGLADGCALF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NJGLADGCALF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NJGLADGCALF*))((::PBYTE)hIl2Cpp + NJGLADGCALF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
