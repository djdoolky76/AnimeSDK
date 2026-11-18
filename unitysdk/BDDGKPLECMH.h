#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigTimelineDataExtraTargetEnumMap; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define BDDGKPLECMH_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x143CCC80)
#define BDDGKPLECMH_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x143CCE60)
#define BDDGKPLECMH_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x143CD020)
#define BDDGKPLECMH_EKGAOECLKKD_OFFSET UNITYSDK_OFFSET(0x143CD120)
#define BDDGKPLECMH_OPIAMPMCMFA_OFFSET UNITYSDK_OFFSET(0x143CCC70)

inline static constexpr unsigned int BDDGKPLECMH_TypeDefinitionIndex = 63286;

class BDDGKPLECMH : public ::System::Object
{
public:
	static ::MoleMole::ConfigTimelineDataExtraTargetEnumMap** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::ConfigTimelineDataExtraTargetEnumMap**)Il2CppClass::FromTypeDefinitionIndex(BDDGKPLECMH_TypeDefinitionIndex)->GetStaticField(0x4F1E0);
	}

	static ::System::Void OPIAMPMCMFA(::MoleMole::ConfigTimelineDataExtraTargetEnumMap* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::MoleMole::ConfigTimelineDataExtraTargetEnumMap*))((::PBYTE)hIl2Cpp + BDDGKPLECMH_OPIAMPMCMFA_OFFSET))(EGEGIMGMJHN);
	}

	static ::MoleMole::ConfigTimelineDataExtraTargetEnumMap* COPIDBEMEIE()
	{
		return ((::MoleMole::ConfigTimelineDataExtraTargetEnumMap*(*)())((::PBYTE)hIl2Cpp + BDDGKPLECMH_COPIDBEMEIE_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + BDDGKPLECMH_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + BDDGKPLECMH_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::String* EKGAOECLKKD(::System::String* JBMBFNCJGCB)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + BDDGKPLECMH_EKGAOECLKKD_OFFSET))(JBMBFNCJGCB);
	}
};
