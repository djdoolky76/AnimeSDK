#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class CinemaSingleBeatMapConfig; }
namespace MoleMole { class CinemaSingleBeatMapConfig_BeatMap; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define OHELKPJAADF_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x16C15D70)
#define OHELKPJAADF_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x16C15C80)
#define OHELKPJAADF_FNLGOHBMMKA_OFFSET UNITYSDK_OFFSET(0x16C16220)
#define OHELKPJAADF_GOIABKLCAAG_OFFSET UNITYSDK_OFFSET(0x16C15F90)
#define OHELKPJAADF__CTOR_OFFSET UNITYSDK_OFFSET(0x16C15C70)

inline static constexpr unsigned int OHELKPJAADF_TypeDefinitionIndex = 53798;

class OHELKPJAADF : public ::System::Object
{
public:
	static ::MoleMole::CinemaSingleBeatMapConfig** StaticGet_DFMKILICPFB()
	{
		return (::MoleMole::CinemaSingleBeatMapConfig**)Il2CppClass::FromTypeDefinitionIndex(OHELKPJAADF_TypeDefinitionIndex)->GetStaticField(0x4DDD0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHELKPJAADF__CTOR_OFFSET))(this);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + OHELKPJAADF_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + OHELKPJAADF_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::CinemaSingleBeatMapConfig_BeatMap* GOIABKLCAAG(::System::String* HIAIKHDFCLN)
	{
		return ((::MoleMole::CinemaSingleBeatMapConfig_BeatMap*(*)(::System::String*))((::PBYTE)hIl2Cpp + OHELKPJAADF_GOIABKLCAAG_OFFSET))(HIAIKHDFCLN);
	}

	static ::System::Int32 FNLGOHBMMKA(::System::String* HIAIKHDFCLN)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + OHELKPJAADF_FNLGOHBMMKA_OFFSET))(HIAIKHDFCLN);
	}
};
