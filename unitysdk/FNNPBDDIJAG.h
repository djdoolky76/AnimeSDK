#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJNNEOKOCJD.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
class ECIIEBFKNMJ;
class HAJDFCHFBGN;
class KAKADGHNMFK;
class MDHIBNLFCFL;
class OMFDCMJIAHG;
namespace RPG::GameCore { class ChimeraDuelBuffConfig; }
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FNNPBDDIJAG_CIJOLMCDLCI_OFFSET UNITYSDK_OFFSET(0x15884030)
#define FNNPBDDIJAG_CTOR_OFFSET UNITYSDK_OFFSET(0x15884EE0)
#define FNNPBDDIJAG_EHGBLDIPCGL_OFFSET UNITYSDK_OFFSET(0x15884600)
#define FNNPBDDIJAG_GICABFLDIPA_OFFSET UNITYSDK_OFFSET(0x158840A0)

inline static constexpr unsigned int FNNPBDDIJAG_TypeDefinitionIndex = 77446;

	class FNNPBDDIJAG : public ::FJNNEOKOCJD
	{
	public:
		::OMFDCMJIAHG* KOHNGCOONLN; // 0x10
		::MDHIBNLFCFL* LMJGBLDGMEN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNNPBDDIJAG_CTOR_OFFSET))(this);
		}

		::System::Void CIJOLMCDLCI(::ECIIEBFKNMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECIIEBFKNMJ*))((::PBYTE)hIl2Cpp + FNNPBDDIJAG_CIJOLMCDLCI_OFFSET))(this, a1);
		}

		::System::Boolean GICABFLDIPA(::HAJDFCHFBGN* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + FNNPBDDIJAG_GICABFLDIPA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EHGBLDIPCGL(::RPG::GameCore::ChimeraDuelTeamType a1, ::Il2CppArray<::RPG::GameCore::ChimeraDuelBuffConfig*>* a2, ::HAJDFCHFBGN* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelTeamType, ::Il2CppArray<::RPG::GameCore::ChimeraDuelBuffConfig*>*, ::HAJDFCHFBGN*))((::PBYTE)hIl2Cpp + FNNPBDDIJAG_EHGBLDIPCGL_OFFSET))(this, a1, a2, a3);
		}

	};
