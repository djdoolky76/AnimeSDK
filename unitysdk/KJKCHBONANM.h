#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ABBEDLEPBAO;
namespace UnityEngine { class AnimationCurve; }

#define KJKCHBONANM_NMBJIKEJKCK_OFFSET UNITYSDK_OFFSET(0x1771B920)
#define KJKCHBONANM__CTOR_OFFSET UNITYSDK_OFFSET(0x1771B9D0)

inline static constexpr unsigned int KJKCHBONANM_TypeDefinitionIndex = 83819;

class KJKCHBONANM : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* IMAKLAHCANN; // 0x10
	::UnityEngine::AnimationCurve* EPLCFNFAGAL; // 0x18
	::UnityEngine::AnimationCurve* KJJOMBALAMP; // 0x20
	::UnityEngine::AnimationCurve* DOGGDBLNINP; // 0x28
	::System::Single NGGJJEPKOHL; // 0x30
	::System::Single JLKIFFFBJCJ; // 0x34
	::System::Single EHBPOALLAOD; // 0x38
	::System::Single LEEOOFEBJFG; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKCHBONANM__CTOR_OFFSET))(this);
	}

	::ABBEDLEPBAO* NMBJIKEJKCK()
	{
		return ((::ABBEDLEPBAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKCHBONANM_NMBJIKEJKCK_OFFSET))(this);
	}
};
