#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BLPDNBMFBDH;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }

#define BLPDNBMFBDH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B3050)
#define BLPDNBMFBDH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9B3060)
#define BLPDNBMFBDH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9B3020)

inline static constexpr unsigned int BLPDNBMFBDH_TypeDefinitionIndex = 21468;

	class BLPDNBMFBDH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* GFNAPNFFGPJ; // 0x18
		::RPG::GameCore::DynamicString* ANFKEPMIINB; // 0x20
		::RPG::GameCore::DynamicString* MAMNLIOEABC; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPDNBMFBDH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BLPDNBMFBDH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BLPDNBMFBDH*))((::PBYTE)hIl2Cpp + BLPDNBMFBDH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BLPDNBMFBDH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BLPDNBMFBDH*))((::PBYTE)hIl2Cpp + BLPDNBMFBDH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
