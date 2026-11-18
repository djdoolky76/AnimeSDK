#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

class DONGCBIGJJL_BADMJCMNJAH;

#define DONGCBIGJJL_JLCJMNLDHDP_ENINBGMEEFG_OFFSET UNITYSDK_OFFSET(0x17216D50)
#define DONGCBIGJJL_JLCJMNLDHDP__CTOR_OFFSET UNITYSDK_OFFSET(0x17216D40)

inline static constexpr unsigned int DONGCBIGJJL_JLCJMNLDHDP_TypeDefinitionIndex = 70490;

class DONGCBIGJJL_JLCJMNLDHDP : public ::System::Object
{
public:
	::DONGCBIGJJL_BADMJCMNJAH* FGBNBFHOKAA; // 0x10
	::UnityEngine::Color POGDJHENNHA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONGCBIGJJL_JLCJMNLDHDP__CTOR_OFFSET))(this);
	}

	::UnityEngine::Color ENINBGMEEFG()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + DONGCBIGJJL_JLCJMNLDHDP_ENINBGMEEFG_OFFSET))(this);
	}
};
