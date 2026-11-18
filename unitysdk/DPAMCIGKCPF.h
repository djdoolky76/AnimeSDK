#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class AnimationCurveLibrary; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define DPAMCIGKCPF_BBAECOMOFLL_OFFSET UNITYSDK_OFFSET(0x16BC5850)
#define DPAMCIGKCPF_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x16BC52A0)
#define DPAMCIGKCPF_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x16BC6450)
#define DPAMCIGKCPF_DHFJJPEIICC_OFFSET UNITYSDK_OFFSET(0x16BC6100)
#define DPAMCIGKCPF_FEJHBICOECF_OFFSET UNITYSDK_OFFSET(0x16BC5530)
#define DPAMCIGKCPF_JHCNONMGNHI_OFFSET UNITYSDK_OFFSET(0x16BC6310)
#define DPAMCIGKCPF_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x16BC5F60)
#define DPAMCIGKCPF__CCTOR_OFFSET UNITYSDK_OFFSET(0x16BC5270)

inline static constexpr unsigned int DPAMCIGKCPF_TypeDefinitionIndex = 55585;

class DPAMCIGKCPF : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>** StaticGet_DGICDFBNEJP()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(DPAMCIGKCPF_TypeDefinitionIndex)->GetStaticField(0x4CDA0);
	}
	static ::System::Collections::Generic::Dictionary_2<::UnityEngine::AnimationCurve*, ::System::String*>** StaticGet_LKAOGPKAENO()
	{
		return (::System::Collections::Generic::Dictionary_2<::UnityEngine::AnimationCurve*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DPAMCIGKCPF_TypeDefinitionIndex)->GetStaticField(0x4CDA8);
	}
	static ::UnityEngine::AnimationCurve** StaticGet_CMKJKNNJPMB()
	{
		return (::UnityEngine::AnimationCurve**)Il2CppClass::FromTypeDefinitionIndex(DPAMCIGKCPF_TypeDefinitionIndex)->GetStaticField(0x4CDB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPAMCIGKCPF__CCTOR_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + DPAMCIGKCPF_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::UnityEngine::AnimationCurve* FEJHBICOECF(::System::String* KEGJECMIADD)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::System::String*))((::PBYTE)hIl2Cpp + DPAMCIGKCPF_FEJHBICOECF_OFFSET))(KEGJECMIADD);
	}

	static ::System::Void BBAECOMOFLL(::System::Collections::Generic::List_1<::MoleMole::Config::AnimationCurveLibrary*>* GPBGIFPDHCG)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::AnimationCurveLibrary*>*))((::PBYTE)hIl2Cpp + DPAMCIGKCPF_BBAECOMOFLL_OFFSET))(GPBGIFPDHCG);
	}

	static ::System::Void DHFJJPEIICC(::System::String* MCOHLHMKLIP, ::UnityEngine::AnimationCurve* FAJHPKBELMF)
	{
		return ((::System::Void(*)(::System::String*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + DPAMCIGKCPF_DHFJJPEIICC_OFFSET))(MCOHLHMKLIP, FAJHPKBELMF);
	}

	static ::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPAMCIGKCPF_NPOLNFDBOOD_OFFSET))();
	}

	static ::System::String* JHCNONMGNHI(::UnityEngine::AnimationCurve* FAJHPKBELMF)
	{
		return ((::System::String*(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + DPAMCIGKCPF_JHCNONMGNHI_OFFSET))(FAJHPKBELMF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + DPAMCIGKCPF_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};
