#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MAJGCLDPEFI.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/System/Object.h"

class DPFMDEBJEMG;
class NKEGAKMNAGM;
namespace System { template <typename T> class Action_1; }

#define NKEGAKMNAGM_GDNHCCPKEOA_OHGENOLKCCF_OFFSET UNITYSDK_OFFSET(0x17294860)
#define NKEGAKMNAGM_GDNHCCPKEOA__CTOR_OFFSET UNITYSDK_OFFSET(0x17294850)

inline static constexpr unsigned int NKEGAKMNAGM_GDNHCCPKEOA_TypeDefinitionIndex = 82165;

class NKEGAKMNAGM_GDNHCCPKEOA : public ::System::Object
{
public:
	::System::Action_1<::DPFMDEBJEMG*>* EJGDHCIBCJH; // 0x10
	::NKEGAKMNAGM* KLHPEBKNIFB; // 0x18
	::System::Int32 OPCELBOCIDJ; // 0x20
	::PipelineCamera::FinalCameraData KONLMDBCDCK; // 0x24
	::MAJGCLDPEFI FCPCLIJNDLA; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEGAKMNAGM_GDNHCCPKEOA__CTOR_OFFSET))(this);
	}

	::System::Boolean OHGENOLKCCF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEGAKMNAGM_GDNHCCPKEOA_OHGENOLKCCF_OFFSET))(this);
	}
};
