#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CMOALFMNCNI;
class ScreenPlayData;
namespace System { class Action; }

#define CMOALFMNCNI_HOLLNDIOIKA_BOIBGFNCKKP_OFFSET UNITYSDK_OFFSET(0x1457C620)
#define CMOALFMNCNI_HOLLNDIOIKA_JPLIGBKNNAN_OFFSET UNITYSDK_OFFSET(0x1457C580)
#define CMOALFMNCNI_HOLLNDIOIKA_LLOBLPABDPO_OFFSET UNITYSDK_OFFSET(0x1457C470)
#define CMOALFMNCNI_HOLLNDIOIKA__CTOR_OFFSET UNITYSDK_OFFSET(0x1457C460)

inline static constexpr unsigned int CMOALFMNCNI_HOLLNDIOIKA_TypeDefinitionIndex = 77697;

class CMOALFMNCNI_HOLLNDIOIKA : public ::System::Object
{
public:
	::System::Action* FFMGICPLKFB; // 0x10
	::ScreenPlayData* IAPFJKNDANB; // 0x18
	::System::Action* DLMJCFBENGB; // 0x20
	::CMOALFMNCNI* KLHPEBKNIFB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOALFMNCNI_HOLLNDIOIKA__CTOR_OFFSET))(this);
	}

	::System::Void LLOBLPABDPO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOALFMNCNI_HOLLNDIOIKA_LLOBLPABDPO_OFFSET))(this);
	}

	::System::Void JPLIGBKNNAN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOALFMNCNI_HOLLNDIOIKA_JPLIGBKNNAN_OFFSET))(this);
	}

	::System::Void BOIBGFNCKKP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOALFMNCNI_HOLLNDIOIKA_BOIBGFNCKKP_OFFSET))(this);
	}
};
