#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BNDBNODKGAP_GEJMMOILJIA;
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class AnimationCurve; }

#define BNDBNODKGAP_KEJOKMDGGFF_OFCMIIOHACI_OFFSET UNITYSDK_OFFSET(0x115FF900)
#define BNDBNODKGAP_KEJOKMDGGFF__CTOR_OFFSET UNITYSDK_OFFSET(0x115FF8F0)

inline static constexpr unsigned int BNDBNODKGAP_KEJOKMDGGFF_TypeDefinitionIndex = 78417;

class BNDBNODKGAP_KEJOKMDGGFF : public ::System::Object
{
public:
	::BNDBNODKGAP_GEJMMOILJIA* MFOCAFMBBGM; // 0x10
	::UnityEngine::AnimationCurve* MCFBNHEMOKP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNDBNODKGAP_KEJOKMDGGFF__CTOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* OFCMIIOHACI()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNDBNODKGAP_KEJOKMDGGFF_OFCMIIOHACI_OFFSET))(this);
	}
};
