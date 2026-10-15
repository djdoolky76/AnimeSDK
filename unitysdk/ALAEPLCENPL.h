#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FFNCLDDJDCC;
class PAKHLIJNJNO;
namespace RPG::GameCore { class GameWorld; }

#define ALAEPLCENPL_EGOALAOKEFG_OFFSET UNITYSDK_OFFSET(0x12CDFB30)
#define ALAEPLCENPL_FLCOMPJDMLA_OFFSET UNITYSDK_OFFSET(0x12CDFD40)
#define ALAEPLCENPL_LJFALNMCMOA_OFFSET UNITYSDK_OFFSET(0x12CDFA20)
#define ALAEPLCENPL_MDGGHPAMKFO_OFFSET UNITYSDK_OFFSET(0x12CDFC30)

inline static constexpr unsigned int ALAEPLCENPL_TypeDefinitionIndex = 57826;

	class ALAEPLCENPL : public ::System::Object
	{
	public:
		static ::System::Void LJFALNMCMOA(::RPG::GameCore::GameWorld* a1, ::FFNCLDDJDCC* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameWorld*, ::FFNCLDDJDCC*))((::PBYTE)hIl2Cpp + ALAEPLCENPL_LJFALNMCMOA_OFFSET))(a1, a2);
		}

		static ::System::Void EGOALAOKEFG(::RPG::GameCore::GameWorld* a1, ::FFNCLDDJDCC* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameWorld*, ::FFNCLDDJDCC*))((::PBYTE)hIl2Cpp + ALAEPLCENPL_EGOALAOKEFG_OFFSET))(a1, a2);
		}

		static ::System::Void MDGGHPAMKFO(::RPG::GameCore::GameWorld* a1, ::PAKHLIJNJNO* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameWorld*, ::PAKHLIJNJNO*))((::PBYTE)hIl2Cpp + ALAEPLCENPL_MDGGHPAMKFO_OFFSET))(a1, a2);
		}

		static ::System::Void FLCOMPJDMLA(::RPG::GameCore::GameWorld* a1, ::PAKHLIJNJNO* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameWorld*, ::PAKHLIJNJNO*))((::PBYTE)hIl2Cpp + ALAEPLCENPL_FLCOMPJDMLA_OFFSET))(a1, a2);
		}

	};
