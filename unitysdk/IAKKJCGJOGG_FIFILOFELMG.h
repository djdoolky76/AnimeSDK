#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define IAKKJCGJOGG_FIFILOFELMG_BGKELBCCDKL_OFFSET UNITYSDK_OFFSET(0x15E954D0)
#define IAKKJCGJOGG_FIFILOFELMG__CTOR_OFFSET UNITYSDK_OFFSET(0x15E954C0)

inline static constexpr unsigned int IAKKJCGJOGG_FIFILOFELMG_TypeDefinitionIndex = 86142;

class IAKKJCGJOGG_FIFILOFELMG : public ::System::Object
{
public:
	::System::Action* ANFIMABPLIG; // 0x10
	::System::Boolean FJMLGOEDNOM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKKJCGJOGG_FIFILOFELMG__CTOR_OFFSET))(this);
	}

	::System::Void BGKELBCCDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKKJCGJOGG_FIFILOFELMG_BGKELBCCDKL_OFFSET))(this);
	}
};
