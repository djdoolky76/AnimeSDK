#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GKEPODNIBJB;
namespace UnityEngine { class GameObject; }

#define GKEPODNIBJB_PEAHFGDJBGG_BGKDELCJKFB_OFFSET UNITYSDK_OFFSET(0x149DB610)
#define GKEPODNIBJB_PEAHFGDJBGG_BMAMDNKNMMM_OFFSET UNITYSDK_OFFSET(0x149DB640)
#define GKEPODNIBJB_PEAHFGDJBGG_HLDCKOLGOGE_OFFSET UNITYSDK_OFFSET(0x149DB660)
#define GKEPODNIBJB_PEAHFGDJBGG_JHCIGLAMBNO_OFFSET UNITYSDK_OFFSET(0x149DB5D0)
#define GKEPODNIBJB_PEAHFGDJBGG__CTOR_OFFSET UNITYSDK_OFFSET(0x149DB5C0)

inline static constexpr unsigned int GKEPODNIBJB_PEAHFGDJBGG_TypeDefinitionIndex = 50389;

class GKEPODNIBJB_PEAHFGDJBGG : public ::System::Object
{
public:
	::GKEPODNIBJB* KLHPEBKNIFB; // 0x10
	::System::Int32 HBHJAMLMMKK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_PEAHFGDJBGG__CTOR_OFFSET))(this);
	}

	::System::Boolean JHCIGLAMBNO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_PEAHFGDJBGG_JHCIGLAMBNO_OFFSET))(this);
	}

	::System::Void BGKDELCJKFB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_PEAHFGDJBGG_BGKDELCJKFB_OFFSET))(this);
	}

	::System::Boolean BMAMDNKNMMM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEPODNIBJB_PEAHFGDJBGG_BMAMDNKNMMM_OFFSET))(this);
	}

	::System::Void HLDCKOLGOGE(::UnityEngine::GameObject* EKOPMGIPNOB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + GKEPODNIBJB_PEAHFGDJBGG_HLDCKOLGOGE_OFFSET))(this, EKOPMGIPNOB);
	}
};
