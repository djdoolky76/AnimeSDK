#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class VNoiseSettings; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PKOEPBCCMAB_AEFANCLILJH_OFFSET UNITYSDK_OFFSET(0x1CB4E3D0)
#define PKOEPBCCMAB_CKAFKLCDNLC_OFFSET UNITYSDK_OFFSET(0x1CB4E2B0)
#define PKOEPBCCMAB_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x1CB4E600)
#define PKOEPBCCMAB_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x1CB4E690)
#define PKOEPBCCMAB_FMFAEGAOGHN_OFFSET UNITYSDK_OFFSET(0x1CB4DFC0)
#define PKOEPBCCMAB_HDLGEDBNEIP_OFFSET UNITYSDK_OFFSET(0x1CB4E840)
#define PKOEPBCCMAB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB4DF20)

inline static constexpr unsigned int PKOEPBCCMAB_TypeDefinitionIndex = 88355;

class PKOEPBCCMAB : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::MoleMole::Cameras::VNoiseSettings*>** StaticGet_EAHDFGEAACA()
	{
		return (::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::MoleMole::Cameras::VNoiseSettings*>**)Il2CppClass::FromTypeDefinitionIndex(PKOEPBCCMAB_TypeDefinitionIndex)->GetStaticField(0x459D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKOEPBCCMAB__CCTOR_OFFSET))();
	}

	static ::System::Void FMFAEGAOGHN(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + PKOEPBCCMAB_FMFAEGAOGHN_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::Cameras::VNoiseSettings* AEFANCLILJH(::Foundation::AssetPath OIIHCACKLHD)
	{
		return ((::MoleMole::Cameras::VNoiseSettings*(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + PKOEPBCCMAB_AEFANCLILJH_OFFSET))(OIIHCACKLHD);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + PKOEPBCCMAB_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void CKAFKLCDNLC(::Foundation::AssetPath OIIHCACKLHD, ::System::Boolean GHOLINNCJCE, ::System::Action_1<::MoleMole::Cameras::VNoiseSettings*>* IBNICCGMILF)
	{
		return ((::System::Void(*)(::Foundation::AssetPath, ::System::Boolean, ::System::Action_1<::MoleMole::Cameras::VNoiseSettings*>*))((::PBYTE)hIl2Cpp + PKOEPBCCMAB_CKAFKLCDNLC_OFFSET))(OIIHCACKLHD, GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + PKOEPBCCMAB_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void HDLGEDBNEIP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKOEPBCCMAB_HDLGEDBNEIP_OFFSET))();
	}
};
