#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Nullable_1.h"
namespace RPG::Client { class ChallengeGroupData; }

#define FOKHLPIEBKE_CELIPHHBDII_OFFSET UNITYSDK_OFFSET(0x158EBAE0)
#define FOKHLPIEBKE_EKJNEAEEGHO_OFFSET UNITYSDK_OFFSET(0x158EB9B0)
#define FOKHLPIEBKE_GCKKKFFCGBH_OFFSET UNITYSDK_OFFSET(0x158EB870)
#define FOKHLPIEBKE_KJNNMNGFKLF_OFFSET UNITYSDK_OFFSET(0x158EB790)

inline static constexpr unsigned int FOKHLPIEBKE_TypeDefinitionIndex = 81520;

	class FOKHLPIEBKE : public ::System::Object
	{
	public:
		static ::System::Boolean KJNNMNGFKLF()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOKHLPIEBKE_KJNNMNGFKLF_OFFSET))();
		}

		static ::System::Nullable_1<::RPG::GameCore::ChallengeGroupType> GCKKKFFCGBH()
		{
			return ((::System::Nullable_1<::RPG::GameCore::ChallengeGroupType>(*)())((::PBYTE)hIl2Cpp + FOKHLPIEBKE_GCKKKFFCGBH_OFFSET))();
		}

		static ::System::Void EKJNEAEEGHO(::RPG::Client::ChallengeGroupData* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::RPG::Client::ChallengeGroupData*, ::System::Int32))((::PBYTE)hIl2Cpp + FOKHLPIEBKE_EKJNEAEEGHO_OFFSET))(a1, a2);
		}

		static ::RPG::Client::TextID CELIPHHBDII(::System::Int32 a1)
		{
			return ((::RPG::Client::TextID(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOKHLPIEBKE_CELIPHHBDII_OFFSET))(a1);
		}

	};
