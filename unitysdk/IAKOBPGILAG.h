#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KKOJJCIIKAH;
namespace RPG::Client { class IActivityQuestRewardData; }

#define IAKOBPGILAG_CGKGDMHDEPO_OFFSET UNITYSDK_OFFSET(0x15E182A0)
#define IAKOBPGILAG_CNEMIJAFODH_OFFSET UNITYSDK_OFFSET(0x15E18030)
#define IAKOBPGILAG_CTOR_OFFSET UNITYSDK_OFFSET(0x15E18020)
#define IAKOBPGILAG_NKNDHAMHLMJ_OFFSET UNITYSDK_OFFSET(0x15E18340)

inline static constexpr unsigned int IAKOBPGILAG_TypeDefinitionIndex = 82082;

	class IAKOBPGILAG : public ::System::Object
	{
	public:
		::KKOJJCIIKAH* MHBFNKIFLNN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKOBPGILAG_CTOR_OFFSET))(this);
		}

		::System::Void CNEMIJAFODH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKOBPGILAG_CNEMIJAFODH_OFFSET))(this);
		}

		::System::UInt32 NKNDHAMHLMJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKOBPGILAG_NKNDHAMHLMJ_OFFSET))(this);
		}

		::RPG::Client::IActivityQuestRewardData* CGKGDMHDEPO()
		{
			return ((::RPG::Client::IActivityQuestRewardData*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKOBPGILAG_CGKGDMHDEPO_OFFSET))(this);
		}

	};
