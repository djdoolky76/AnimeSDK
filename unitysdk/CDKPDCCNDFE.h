#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JIHILNOBAPH;
class MGHCFNBICOM;
namespace RPG::Client::DiceCombat { class DiceCombatV2PvEStage; }
namespace RPG::Client::DiceCombat { class DiceCombatV2PvPStage; }
namespace RPG::Client::DiceCombat { class DiceCombatV2Stage; }

#define CDKPDCCNDFE_ECGDAECNKBI_OFFSET UNITYSDK_OFFSET(0xC76CCC0)
#define CDKPDCCNDFE_NLKJGDMLAAM_OFFSET UNITYSDK_OFFSET(0xC76CA30)
#define CDKPDCCNDFE_ODADAHOFBLL_OFFSET UNITYSDK_OFFSET(0xC76CE70)
#define CDKPDCCNDFE_PHBBAJGNPAF_OFFSET UNITYSDK_OFFSET(0xC76C980)

inline static constexpr unsigned int CDKPDCCNDFE_TypeDefinitionIndex = 76176;

	class CDKPDCCNDFE : public ::System::Object
	{
	public:
		static ::RPG::Client::DiceCombat::DiceCombatV2Stage* PHBBAJGNPAF(::System::UInt32 a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2Stage*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CDKPDCCNDFE_PHBBAJGNPAF_OFFSET))(a1);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2PvPStage* ECGDAECNKBI(::JIHILNOBAPH* a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2PvPStage*(*)(::JIHILNOBAPH*))((::PBYTE)hIl2Cpp + CDKPDCCNDFE_ECGDAECNKBI_OFFSET))(a1);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2PvEStage* NLKJGDMLAAM(::JIHILNOBAPH* a1, ::MGHCFNBICOM* a2)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2PvEStage*(*)(::JIHILNOBAPH*, ::MGHCFNBICOM*))((::PBYTE)hIl2Cpp + CDKPDCCNDFE_NLKJGDMLAAM_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::UInt32>* ODADAHOFBLL(::JIHILNOBAPH* a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::JIHILNOBAPH*))((::PBYTE)hIl2Cpp + CDKPDCCNDFE_ODADAHOFBLL_OFFSET))(a1);
		}

	};
