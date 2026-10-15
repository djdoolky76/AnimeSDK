#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FACMJBCOHBP;
class PKHKEEKIODC;
namespace RPG::Client { class IRogueMiracleInfo; }
namespace RPG::Client { class RogueBuffInfo; }
namespace RPG::Client { class RogueMagicScepterInfo; }

#define HMJIELAOLEK_HHABABNCGIO_OFFSET UNITYSDK_OFFSET(0x15D84990)
#define HMJIELAOLEK_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x15D84280)
#define HMJIELAOLEK_LNNONDPMPGG_OFFSET UNITYSDK_OFFSET(0x15D85280)
#define HMJIELAOLEK_MCBOJBKFPHK_OFFSET UNITYSDK_OFFSET(0x15D84B00)

inline static constexpr unsigned int HMJIELAOLEK_TypeDefinitionIndex = 67157;

	class HMJIELAOLEK : public ::System::Object
	{
	public:
		static ::System::Void HKKFFCBJOKM(::FACMJBCOHBP* a1)
		{
			return ((::System::Void(*)(::FACMJBCOHBP*))((::PBYTE)hIl2Cpp + HMJIELAOLEK_HKKFFCBJOKM_OFFSET))(a1);
		}

		static ::System::Void HHABABNCGIO(::RPG::Client::RogueBuffInfo* a1, ::PKHKEEKIODC* a2)
		{
			return ((::System::Void(*)(::RPG::Client::RogueBuffInfo*, ::PKHKEEKIODC*))((::PBYTE)hIl2Cpp + HMJIELAOLEK_HHABABNCGIO_OFFSET))(a1, a2);
		}

		static ::System::Void MCBOJBKFPHK(::RPG::Client::IRogueMiracleInfo* a1, ::PKHKEEKIODC* a2)
		{
			return ((::System::Void(*)(::RPG::Client::IRogueMiracleInfo*, ::PKHKEEKIODC*))((::PBYTE)hIl2Cpp + HMJIELAOLEK_MCBOJBKFPHK_OFFSET))(a1, a2);
		}

		static ::System::Void LNNONDPMPGG(::RPG::Client::RogueMagicScepterInfo* a1, ::PKHKEEKIODC* a2)
		{
			return ((::System::Void(*)(::RPG::Client::RogueMagicScepterInfo*, ::PKHKEEKIODC*))((::PBYTE)hIl2Cpp + HMJIELAOLEK_LNNONDPMPGG_OFFSET))(a1, a2);
		}

	};
