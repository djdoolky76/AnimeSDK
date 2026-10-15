#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APCGKBOPGJL.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreeAnchorType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NINIDOPDNLC_CTOR_OFFSET UNITYSDK_OFFSET(0xBBFE870)
#define NINIDOPDNLC_HEIAFIJBHPE_OFFSET UNITYSDK_OFFSET(0xBBFE950)
#define NINIDOPDNLC_HIGHCBNFGFK_OFFSET UNITYSDK_OFFSET(0xBBFE190)
#define NINIDOPDNLC_JOFBCHJCLDA_OFFSET UNITYSDK_OFFSET(0xBBFE360)
#define NINIDOPDNLC_OMFPOKGALDM_OFFSET UNITYSDK_OFFSET(0xBBFE520)

	class NINIDOPDNLC : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarSkillTreeAnchorType, ::System::UInt32>*>* FGKDDIMLIMC; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::ValueTuple>* LCIBIGFOMCA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NINIDOPDNLC_CTOR_OFFSET))(this);
		}

		::System::ValueTuple HIGHCBNFGFK(::System::UInt32 a1)
		{
			return ((::System::ValueTuple(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NINIDOPDNLC_HIGHCBNFGFK_OFFSET))(this, a1);
		}

		::System::UInt32 JOFBCHJCLDA(::APCGKBOPGJL a1, ::RPG::GameCore::AvatarSkillTreeAnchorType a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::APCGKBOPGJL, ::RPG::GameCore::AvatarSkillTreeAnchorType))((::PBYTE)hIl2Cpp + NINIDOPDNLC_JOFBCHJCLDA_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarSkillTreeAnchorType, ::System::UInt32>* OMFPOKGALDM(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarSkillTreeAnchorType, ::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NINIDOPDNLC_OMFPOKGALDM_OFFSET))(this, a1, a2);
		}

		::System::UInt32 HEIAFIJBHPE(::APCGKBOPGJL a1, ::RPG::GameCore::AvatarSkillTreeAnchorType a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::APCGKBOPGJL, ::RPG::GameCore::AvatarSkillTreeAnchorType))((::PBYTE)hIl2Cpp + NINIDOPDNLC_HEIAFIJBHPE_OFFSET))(this, a1, a2);
		}

	};
