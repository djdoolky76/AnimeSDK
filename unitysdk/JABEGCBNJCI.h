#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class JABEGCBNJCI;
namespace RPG::GameCore { class ComicDessertComplexityRestriction; }

#define JABEGCBNJCI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E11A7A0)
#define JABEGCBNJCI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E11A7B0)
#define JABEGCBNJCI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E11A580)

inline static constexpr unsigned int JABEGCBNJCI_TypeDefinitionIndex = 21876;

	class JABEGCBNJCI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ComicDessertComplexityRestriction*>* MGDIFJEGDNG; // 0x18
		::Il2CppArray<::System::Single>* JKDFIMCIKFJ; // 0x20
		::System::Single GBMPICBMFID; // 0x28
		::System::UInt32 KPAGIHOPPLI; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JABEGCBNJCI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JABEGCBNJCI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JABEGCBNJCI*))((::PBYTE)hIl2Cpp + JABEGCBNJCI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JABEGCBNJCI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JABEGCBNJCI*))((::PBYTE)hIl2Cpp + JABEGCBNJCI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
