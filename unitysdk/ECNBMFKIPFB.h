#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class ECNBMFKIPFB;
class FCOEMCEDLNL;

#define ECNBMFKIPFB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD6D600)
#define ECNBMFKIPFB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD6D610)
#define ECNBMFKIPFB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD6D5D0)

inline static constexpr unsigned int ECNBMFKIPFB_TypeDefinitionIndex = 21331;

	class ECNBMFKIPFB : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Single IEHPFADHJFD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNBMFKIPFB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ECNBMFKIPFB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ECNBMFKIPFB*))((::PBYTE)hIl2Cpp + ECNBMFKIPFB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::ECNBMFKIPFB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ECNBMFKIPFB*))((::PBYTE)hIl2Cpp + ECNBMFKIPFB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
