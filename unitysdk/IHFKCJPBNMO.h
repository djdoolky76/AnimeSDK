#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DICEONDKEFF.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"
class AOBICCEGAMM;
class FACMJBCOHBP;
class JMBHIPPPMPA;
class KAJFMFEMJGA;
class LKENEGPBIEB;
class MKJBLEPELNC;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define IHFKCJPBNMO_FMJNCIEAEGG_OFFSET UNITYSDK_OFFSET(0x1641D8C0)
#define IHFKCJPBNMO_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x1641B0B0)
#define IHFKCJPBNMO_IBJMMJNFNLC_OFFSET UNITYSDK_OFFSET(0x1641D990)
#define IHFKCJPBNMO_JJEKFAFOOIG_OFFSET UNITYSDK_OFFSET(0x1641DA60)
#define IHFKCJPBNMO_JJGGKIHNBJA_OFFSET UNITYSDK_OFFSET(0x1641D830)

inline static constexpr unsigned int IHFKCJPBNMO_TypeDefinitionIndex = 67159;

	class IHFKCJPBNMO : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::IList_1<::AOBICCEGAMM*>* HKKFFCBJOKM(::FACMJBCOHBP* a1)
		{
			return ((::System::Collections::Generic::IList_1<::AOBICCEGAMM*>*(*)(::FACMJBCOHBP*))((::PBYTE)hIl2Cpp + IHFKCJPBNMO_HKKFFCBJOKM_OFFSET))(a1);
		}

		static ::System::Boolean JJGGKIHNBJA(::RPG::GameCore::RogueSubMode a1, ::MKJBLEPELNC* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RogueSubMode, ::MKJBLEPELNC*))((::PBYTE)hIl2Cpp + IHFKCJPBNMO_JJGGKIHNBJA_OFFSET))(a1, a2);
		}

		static ::LKENEGPBIEB* FMJNCIEAEGG(::RPG::GameCore::RogueSubMode a1)
		{
			return ((::LKENEGPBIEB*(*)(::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + IHFKCJPBNMO_FMJNCIEAEGG_OFFSET))(a1);
		}

		static ::JMBHIPPPMPA* IBJMMJNFNLC(::RPG::GameCore::RogueSubMode a1)
		{
			return ((::JMBHIPPPMPA*(*)(::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + IHFKCJPBNMO_IBJMMJNFNLC_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::KAJFMFEMJGA*>* JJEKFAFOOIG(::RPG::GameCore::RogueSubMode a1, ::DICEONDKEFF a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::KAJFMFEMJGA*>*(*)(::RPG::GameCore::RogueSubMode, ::DICEONDKEFF))((::PBYTE)hIl2Cpp + IHFKCJPBNMO_JJEKFAFOOIG_OFFSET))(a1, a2);
		}

	};
