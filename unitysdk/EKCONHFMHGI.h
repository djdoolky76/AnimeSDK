#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MarcelShape.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/MarcelShapeConfig.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole { class MarcelConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define EKCONHFMHGI_CGMOBOBGJME_OFFSET UNITYSDK_OFFSET(0x158B6980)
#define EKCONHFMHGI_COBNJAAKCAG_OFFSET UNITYSDK_OFFSET(0x158B6F80)
#define EKCONHFMHGI_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x158B7170)
#define EKCONHFMHGI_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x158B7630)
#define EKCONHFMHGI_EEBFAGDBDLB_OFFSET UNITYSDK_OFFSET(0x158B6790)
#define EKCONHFMHGI_GBDNLMFAOLB_OFFSET UNITYSDK_OFFSET(0x158B7390)
#define EKCONHFMHGI_MEAFKEJJKAO_OFFSET UNITYSDK_OFFSET(0x158B6B80)
#define EKCONHFMHGI_PILKNNJDFLJ_OFFSET UNITYSDK_OFFSET(0x158B6D70)

inline static constexpr unsigned int EKCONHFMHGI_TypeDefinitionIndex = 81896;

class EKCONHFMHGI : public ::System::Object
{
public:
	static ::MoleMole::MarcelConfig** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::MarcelConfig**)Il2CppClass::FromTypeDefinitionIndex(EKCONHFMHGI_TypeDefinitionIndex)->GetStaticField(0x31780);
	}

	static ::System::UInt32 EEBFAGDBDLB()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + EKCONHFMHGI_EEBFAGDBDLB_OFFSET))();
	}

	static ::System::Single CGMOBOBGJME()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + EKCONHFMHGI_CGMOBOBGJME_OFFSET))();
	}

	static ::UnityEngine::AnimationCurve* MEAFKEJJKAO()
	{
		return ((::UnityEngine::AnimationCurve*(*)())((::PBYTE)hIl2Cpp + EKCONHFMHGI_MEAFKEJJKAO_OFFSET))();
	}

	static ::UnityEngine::Color PILKNNJDFLJ()
	{
		return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + EKCONHFMHGI_PILKNNJDFLJ_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* COBNJAAKCAG()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)())((::PBYTE)hIl2Cpp + EKCONHFMHGI_COBNJAAKCAG_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + EKCONHFMHGI_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Boolean GBDNLMFAOLB(::MoleMole::MarcelShape AGNLMKIFIEM, ::MoleMole::MarcelShapeConfig& DFMKILICPFB)
	{
		return ((::System::Boolean(*)(::MoleMole::MarcelShape, ::MoleMole::MarcelShapeConfig&))((::PBYTE)hIl2Cpp + EKCONHFMHGI_GBDNLMFAOLB_OFFSET))(AGNLMKIFIEM, DFMKILICPFB);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + EKCONHFMHGI_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};
