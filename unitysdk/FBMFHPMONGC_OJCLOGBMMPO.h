#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBMFHPMONGC;
namespace System { class EventArgs; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class Animator; }

#define FBMFHPMONGC_OJCLOGBMMPO_IFBKCJKLKGI_OFFSET UNITYSDK_OFFSET(0x14191160)
#define FBMFHPMONGC_OJCLOGBMMPO_OCLBGDHBPIA_OFFSET UNITYSDK_OFFSET(0x14191170)
#define FBMFHPMONGC_OJCLOGBMMPO_PLFKFBCLMJF_OFFSET UNITYSDK_OFFSET(0x14191230)
#define FBMFHPMONGC_OJCLOGBMMPO__CTOR_OFFSET UNITYSDK_OFFSET(0x14191150)

inline static constexpr unsigned int FBMFHPMONGC_OJCLOGBMMPO_TypeDefinitionIndex = 50507;

class FBMFHPMONGC_OJCLOGBMMPO : public ::System::Object
{
public:
	::FBMFHPMONGC* KLHPEBKNIFB; // 0x10
	::UnityEngine::Animator* ICAAMDMMDDJ; // 0x18
	::System::Func_1<::System::Boolean>* DLMJCFBENGB; // 0x20
	::System::Boolean FPGINMLPFMF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_OJCLOGBMMPO__CTOR_OFFSET))(this);
	}

	::System::Void IFBKCJKLKGI(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + FBMFHPMONGC_OJCLOGBMMPO_IFBKCJKLKGI_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Boolean OCLBGDHBPIA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_OJCLOGBMMPO_OCLBGDHBPIA_OFFSET))(this);
	}

	::System::Boolean PLFKFBCLMJF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_OJCLOGBMMPO_PLFKFBCLMJF_OFFSET))(this);
	}
};
