#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine { class GameObject; }

#define GGCEOPGJELJ_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x16CC1E40)
#define GGCEOPGJELJ_DIJAEFLIFKI_OFFSET UNITYSDK_OFFSET(0x16CC19A0)
#define GGCEOPGJELJ_JEPNKCPDGFK_OFFSET UNITYSDK_OFFSET(0x16CC1650)
#define GGCEOPGJELJ_JOJBLCKGKNH_OFFSET UNITYSDK_OFFSET(0x16CC1B10)
#define GGCEOPGJELJ_LIBFEFEJOCF_OFFSET UNITYSDK_OFFSET(0x16CC1E50)
#define GGCEOPGJELJ_ONDETACH_OFFSET UNITYSDK_OFFSET(0x16CC1600)
#define GGCEOPGJELJ_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x16CC1910)
#define GGCEOPGJELJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16CC1960)

inline static constexpr unsigned int GGCEOPGJELJ_TypeDefinitionIndex = 67450;

class GGCEOPGJELJ
{
public:
	::UnityEngine::GameObject* JLEDDMKIPNN; // 0x28
	::System::Boolean OCDGHLCKBDC; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGCEOPGJELJ__CTOR_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGCEOPGJELJ_ONDETACH_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGCEOPGJELJ_ONRECYCLE_OFFSET))(this);
	}

	::System::Void JEPNKCPDGFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGCEOPGJELJ_JEPNKCPDGFK_OFFSET))(this);
	}

	::UnityEngine::GameObject* DIJAEFLIFKI()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGCEOPGJELJ_DIJAEFLIFKI_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGCEOPGJELJ_ANEOCOIFDDJ_OFFSET))(this);
	}

	::UnityEngine::GameObject* JOJBLCKGKNH()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGCEOPGJELJ_JOJBLCKGKNH_OFFSET))(this);
	}

	::System::Void LIBFEFEJOCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGCEOPGJELJ_LIBFEFEJOCF_OFFSET))(this);
	}
};
