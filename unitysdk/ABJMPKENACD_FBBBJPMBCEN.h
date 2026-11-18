#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ABJMPKENACD;
namespace System { class EventArgs; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class Animator; }

#define ABJMPKENACD_FBBBJPMBCEN_IFBKCJKLKGI_OFFSET UNITYSDK_OFFSET(0x1420B9D0)
#define ABJMPKENACD_FBBBJPMBCEN_OCLBGDHBPIA_OFFSET UNITYSDK_OFFSET(0x1420B850)
#define ABJMPKENACD_FBBBJPMBCEN_PLFKFBCLMJF_OFFSET UNITYSDK_OFFSET(0x1420B910)
#define ABJMPKENACD_FBBBJPMBCEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1420B840)

inline static constexpr unsigned int ABJMPKENACD_FBBBJPMBCEN_TypeDefinitionIndex = 88646;

class ABJMPKENACD_FBBBJPMBCEN : public ::System::Object
{
public:
	::System::Func_1<::System::Boolean>* DLMJCFBENGB; // 0x10
	::ABJMPKENACD* KLHPEBKNIFB; // 0x18
	::UnityEngine::Animator* ICAAMDMMDDJ; // 0x20
	::System::Boolean FPGINMLPFMF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_FBBBJPMBCEN__CTOR_OFFSET))(this);
	}

	::System::Boolean OCLBGDHBPIA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_FBBBJPMBCEN_OCLBGDHBPIA_OFFSET))(this);
	}

	::System::Boolean PLFKFBCLMJF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_FBBBJPMBCEN_PLFKFBCLMJF_OFFSET))(this);
	}

	::System::Void IFBKCJKLKGI(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ABJMPKENACD_FBBBJPMBCEN_IFBKCJKLKGI_OFFSET))(this, EIFONLCJOPG);
	}
};
