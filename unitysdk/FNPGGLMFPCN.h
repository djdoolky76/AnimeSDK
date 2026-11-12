#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class FNPGGLMFPCN;
namespace RPG::GameCore { class ComicDessertComplexityRestriction; }
namespace System { class String; }

#define FNPGGLMFPCN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFEBFA0)
#define FNPGGLMFPCN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DFEBFB0)
#define FNPGGLMFPCN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DFEBF70)

inline static constexpr unsigned int FNPGGLMFPCN_TypeDefinitionIndex = 21896;

	class FNPGGLMFPCN : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* DBNGDDIKHKO; // 0x18
		::Il2CppArray<::RPG::GameCore::ComicDessertComplexityRestriction*>* MGDIFJEGDNG; // 0x20
		::Il2CppArray<::System::String*>* KHJJIMHGMMM; // 0x28
		::System::String* ABJMPKMHCBD; // 0x30
		::System::UInt32 CNBNIFAFMFD; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNPGGLMFPCN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FNPGGLMFPCN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FNPGGLMFPCN*))((::PBYTE)hIl2Cpp + FNPGGLMFPCN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FNPGGLMFPCN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FNPGGLMFPCN*))((::PBYTE)hIl2Cpp + FNPGGLMFPCN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
