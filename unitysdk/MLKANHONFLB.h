#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/GEEOPFIMJEM.h"
class DGPKLNNFELK;
class LHJDLMKLANL;
namespace RPG::GameCore { class LodConfig; }
namespace RPG::GameCore { class NormDistanceLodTemplate; }
namespace RPG::GameCore { class StageLodMapConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MLKANHONFLB_ABMGAEGOBJB_OFFSET UNITYSDK_OFFSET(0xB9B38F0)
#define MLKANHONFLB_CJJCKGKLOEP_OFFSET UNITYSDK_OFFSET(0xB9B3120)
#define MLKANHONFLB_CTOR_OFFSET UNITYSDK_OFFSET(0xB9B1F60)
#define MLKANHONFLB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9B3F00)
#define MLKANHONFLB_DKBFNAGDBBJ_OFFSET UNITYSDK_OFFSET(0xB9B3DA0)
#define MLKANHONFLB_ECALDDDACIP_OFFSET UNITYSDK_OFFSET(0xB9B3830)
#define MLKANHONFLB_ENIPBFOKFMA_OFFSET UNITYSDK_OFFSET(0xB9B29D0)
#define MLKANHONFLB_FBBCCHPNKAA_OFFSET UNITYSDK_OFFSET(0xB9B3B60)
#define MLKANHONFLB_GBMNJKOEACC_OFFSET UNITYSDK_OFFSET(0xB9B30C0)
#define MLKANHONFLB_GNFDFKNLCAM_OFFSET UNITYSDK_OFFSET(0xB9B21D0)
#define MLKANHONFLB_HMFPIFOEPCM_OFFSET UNITYSDK_OFFSET(0xB9B27D0)
#define MLKANHONFLB_IPMIPOOHNCL_OFFSET UNITYSDK_OFFSET(0xB9B3770)
#define MLKANHONFLB_LNIDBKMLMOC_OFFSET UNITYSDK_OFFSET(0xB9B3E50)
#define MLKANHONFLB_MCLNDFDMAMI_OFFSET UNITYSDK_OFFSET(0xB9B3A90)
#define MLKANHONFLB_NMLGHCEGCLM_OFFSET UNITYSDK_OFFSET(0xB9B33E0)
#define MLKANHONFLB_OCKFDBBHOPD_OFFSET UNITYSDK_OFFSET(0xB9B2BD0)
#define MLKANHONFLB_PKAHGMOCKAB_OFFSET UNITYSDK_OFFSET(0xB9B31E0)

inline static constexpr unsigned int MLKANHONFLB_TypeDefinitionIndex = 73842;

	class MLKANHONFLB : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::DGPKLNNFELK*>* FANECFNCGLF; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::DGPKLNNFELK*>* LAHCBMFNKED; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::NormDistanceLodTemplate*>* FGINEAJBMEH; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::LHJDLMKLANL*>* ONLODPMNHAK; // 0x28
		::RPG::GameCore::StageLodMapConfig* DOEFBHPBMJA; // 0x30
		::RPG::GameCore::StageLodMapConfig* AHPDFDBDKHH; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* MMBJALBPIPC; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::DGPKLNNFELK*>* MHAOKMFJAFH; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::DGPKLNNFELK*>* CHHDHCBPODP; // 0x50
		::System::Int32 NLDPADJJKEB; // 0x58
		::System::Boolean DMIKPDCIHII; // 0x5C
		::System::Boolean KKEOLEFKJNE; // 0x5D
		::System::Void _ctor(::RPG::GameCore::StageLodMapConfig* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2, ::RPG::GameCore::StageLodMapConfig* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageLodMapConfig*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::RPG::GameCore::StageLodMapConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + MLKANHONFLB_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GNFDFKNLCAM(::RPG::GameCore::LodConfig* a1, ::RPG::GameCore::LodConfig* a2, ::RPG::GameCore::LodConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LodConfig*, ::RPG::GameCore::LodConfig*, ::RPG::GameCore::LodConfig*))((::PBYTE)hIl2Cpp + MLKANHONFLB_GNFDFKNLCAM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OCKFDBBHOPD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MLKANHONFLB_OCKFDBBHOPD_OFFSET))(this, a1);
		}

		::System::Void ENIPBFOKFMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKANHONFLB_ENIPBFOKFMA_OFFSET))(this);
		}

		::DGPKLNNFELK* CJJCKGKLOEP(::System::String* a1)
		{
			return ((::DGPKLNNFELK*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MLKANHONFLB_CJJCKGKLOEP_OFFSET))(this, a1);
		}

		::System::String* PKAHGMOCKAB(::GEEOPFIMJEM a1)
		{
			return ((::System::String*(*)(::PVOID, ::GEEOPFIMJEM))((::PBYTE)hIl2Cpp + MLKANHONFLB_PKAHGMOCKAB_OFFSET))(this, a1);
		}

		::DGPKLNNFELK* NMLGHCEGCLM(::GEEOPFIMJEM a1)
		{
			return ((::DGPKLNNFELK*(*)(::PVOID, ::GEEOPFIMJEM))((::PBYTE)hIl2Cpp + MLKANHONFLB_NMLGHCEGCLM_OFFSET))(this, a1);
		}

		::DGPKLNNFELK* ABMGAEGOBJB(::System::String* a1, ::System::Single a2)
		{
			return ((::DGPKLNNFELK*(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MLKANHONFLB_ABMGAEGOBJB_OFFSET))(this, a1, a2);
		}

		::System::String* IPMIPOOHNCL(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MLKANHONFLB_IPMIPOOHNCL_OFFSET))(this, a1);
		}

		::DGPKLNNFELK* MCLNDFDMAMI(::System::String* a1)
		{
			return ((::DGPKLNNFELK*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MLKANHONFLB_MCLNDFDMAMI_OFFSET))(this, a1);
		}

		::DGPKLNNFELK* ECALDDDACIP(::System::String* a1, ::System::String* a2)
		{
			return ((::DGPKLNNFELK*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MLKANHONFLB_ECALDDDACIP_OFFSET))(this, a1, a2);
		}

		::System::Void FBBCCHPNKAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKANHONFLB_FBBCCHPNKAA_OFFSET))(this);
		}

		::DGPKLNNFELK* DKBFNAGDBBJ(::System::String* a1)
		{
			return ((::DGPKLNNFELK*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MLKANHONFLB_DKBFNAGDBBJ_OFFSET))(this, a1);
		}

		::DGPKLNNFELK* LNIDBKMLMOC(::System::String* a1)
		{
			return ((::DGPKLNNFELK*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MLKANHONFLB_LNIDBKMLMOC_OFFSET))(this, a1);
		}

		::System::Void HMFPIFOEPCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKANHONFLB_HMFPIFOEPCM_OFFSET))(this);
		}

		::System::Boolean GBMNJKOEACC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKANHONFLB_GBMNJKOEACC_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKANHONFLB_DISPOSE_OFFSET))(this);
		}

	};
