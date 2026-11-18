#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class TimeBasedAlphaGenerator; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class AnimationCurve; }

#define NNLLOIACBEP_MAIMJMCMEDF_OFFSET UNITYSDK_OFFSET(0x13170C70)
#define NNLLOIACBEP_MBGNDFPNOJJ_OFFSET UNITYSDK_OFFSET(0x13170CB0)
#define NNLLOIACBEP_MNNGEINLGMO_OFFSET UNITYSDK_OFFSET(0x13170D00)
#define NNLLOIACBEP__CCTOR_OFFSET UNITYSDK_OFFSET(0x13170BC0)
#define NNLLOIACBEP__CTOR_OFFSET UNITYSDK_OFFSET(0x13170AE0)

inline static constexpr unsigned int NNLLOIACBEP_TypeDefinitionIndex = 51481;

class NNLLOIACBEP : public ::System::Object
{
public:
	static ::UnityEngine::AnimationCurve** StaticGet_OCDHDOPPGLE()
	{
		return (::UnityEngine::AnimationCurve**)Il2CppClass::FromTypeDefinitionIndex(NNLLOIACBEP_TypeDefinitionIndex)->GetStaticField(0x42580);
	}
	static ::System::Func_1<::System::Single>** StaticGet_HIOJLCMKJAA()
	{
		return (::System::Func_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(NNLLOIACBEP_TypeDefinitionIndex)->GetStaticField(0x42588);
	}
	::System::Func_1<::System::Single>* CCDNFNCMJGE; // 0x10
	::PipelineCamera::TimeBasedAlphaGenerator* CAHNMPOGHII; // 0x18
	::System::Single KKJKPJEGKJC; // 0x20

	::System::Void _ctor(::System::Func_1<::System::Single>* CAOPDAMCNCN, ::System::Single MDPPNMIPDMP, ::UnityEngine::AnimationCurve* FAJHPKBELMF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Single>*, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + NNLLOIACBEP__CTOR_OFFSET))(this, CAOPDAMCNCN, MDPPNMIPDMP, FAJHPKBELMF);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNLLOIACBEP__CCTOR_OFFSET))();
	}

	::System::Func_1<::System::Single>* MAIMJMCMEDF()
	{
		return ((::System::Func_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNLLOIACBEP_MAIMJMCMEDF_OFFSET))(this);
	}

	::System::Single MBGNDFPNOJJ()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NNLLOIACBEP_MBGNDFPNOJJ_OFFSET))(this);
	}

	::PipelineCamera::TimeBasedAlphaGenerator* MNNGEINLGMO()
	{
		return ((::PipelineCamera::TimeBasedAlphaGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNLLOIACBEP_MNNGEINLGMO_OFFSET))(this);
	}
};
