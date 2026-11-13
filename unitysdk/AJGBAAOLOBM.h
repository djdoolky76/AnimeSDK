#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class AJGBAAOLOBM;
class FCOEMCEDLNL;

#define AJGBAAOLOBM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E03D7C0)
#define AJGBAAOLOBM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E03D7D0)
#define AJGBAAOLOBM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E03D700)

inline static constexpr unsigned int AJGBAAOLOBM_TypeDefinitionIndex = 21836;

	class AJGBAAOLOBM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGBAAOLOBM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AJGBAAOLOBM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AJGBAAOLOBM*))((::PBYTE)hIl2Cpp + AJGBAAOLOBM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::AJGBAAOLOBM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AJGBAAOLOBM*))((::PBYTE)hIl2Cpp + AJGBAAOLOBM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
