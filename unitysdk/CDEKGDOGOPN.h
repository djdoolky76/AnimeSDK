#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class OverShoulderCameraConfig; }
namespace MoleMole::Cameras { class OverrideOverShoulderCameraConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CDEKGDOGOPN_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x14F1BC60)
#define CDEKGDOGOPN_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x14F1BB50)
#define CDEKGDOGOPN_JOHMMGKMJMI_OFFSET UNITYSDK_OFFSET(0x14F1C630)
#define CDEKGDOGOPN_JPBNOOMAKNG_OFFSET UNITYSDK_OFFSET(0x14F1C380)
#define CDEKGDOGOPN__CCTOR_OFFSET UNITYSDK_OFFSET(0x14F1BA30)

inline static constexpr unsigned int CDEKGDOGOPN_TypeDefinitionIndex = 77467;

class CDEKGDOGOPN : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*>** StaticGet_KJBGGDFLOIC()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*>**)Il2CppClass::FromTypeDefinitionIndex(CDEKGDOGOPN_TypeDefinitionIndex)->GetStaticField(0x310D0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::OverShoulderCameraConfig*>** StaticGet_GJDHCIGKAPC()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::OverShoulderCameraConfig*>**)Il2CppClass::FromTypeDefinitionIndex(CDEKGDOGOPN_TypeDefinitionIndex)->GetStaticField(0x310D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDEKGDOGOPN__CCTOR_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CDEKGDOGOPN_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::Cameras::OverShoulderCameraConfig* JPBNOOMAKNG(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Cameras::OverShoulderCameraConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CDEKGDOGOPN_JPBNOOMAKNG_OFFSET))(MCOHLHMKLIP);
	}

	static ::MoleMole::Cameras::OverrideOverShoulderCameraConfig* JOHMMGKMJMI(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Cameras::OverrideOverShoulderCameraConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CDEKGDOGOPN_JOHMMGKMJMI_OFFSET))(MCOHLHMKLIP);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CDEKGDOGOPN_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}
};
