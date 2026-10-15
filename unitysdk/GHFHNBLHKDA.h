#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IMissionChroniclePathUnlockConditionData; }
namespace RPG::Client { class MissionChronicleBasePathData; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }

#define GHFHNBLHKDA_CTOR_OFFSET UNITYSDK_OFFSET(0x15A19C00)
#define GHFHNBLHKDA_GOLIFFPPCEG_OFFSET UNITYSDK_OFFSET(0x15A1AD00)
#define GHFHNBLHKDA_ILAPNHCEMJF_OFFSET UNITYSDK_OFFSET(0x15A1A0C0)
#define GHFHNBLHKDA_LMNPPAMFNEJ_OFFSET UNITYSDK_OFFSET(0x15A19C10)

inline static constexpr unsigned int GHFHNBLHKDA_TypeDefinitionIndex = 66111;

	class GHFHNBLHKDA : public ::System::Object
	{
	public:
		::RPG::Client::MissionChronicleBasePathData* DDPCPAHNLCL; // 0x10
		::System::Void _ctor(::RPG::Client::MissionChronicleBasePathData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionChronicleBasePathData*))((::PBYTE)hIl2Cpp + GHFHNBLHKDA_CTOR_OFFSET))(this, a1);
		}

		::System::Void LMNPPAMFNEJ(::System::Collections::Generic::ICollection_1<::System::UInt32>* a1, ::System::Collections::Generic::ICollection_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::UInt32>*, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + GHFHNBLHKDA_LMNPPAMFNEJ_OFFSET))(this, a1, a2);
		}

		::System::Void ILAPNHCEMJF(::System::Collections::Generic::ICollection_1<::RPG::Client::IMissionChroniclePathUnlockConditionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::Client::IMissionChroniclePathUnlockConditionData*>*))((::PBYTE)hIl2Cpp + GHFHNBLHKDA_ILAPNHCEMJF_OFFSET))(this, a1);
		}

		static ::System::Boolean GOLIFFPPCEG(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GHFHNBLHKDA_GOLIFFPPCEG_OFFSET))(a1);
		}

	};
