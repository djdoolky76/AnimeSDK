#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"

#define IAGLACHHAPE_FKBEMLHDJJM_OFFSET UNITYSDK_OFFSET(0x1608A130)
#define IAGLACHHAPE_JJOEFPNJNGL_OFFSET UNITYSDK_OFFSET(0x1608A0C0)
#define IAGLACHHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1608A120)

inline static constexpr unsigned int IAGLACHHAPE_TypeDefinitionIndex = 39222;

class IAGLACHHAPE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAGLACHHAPE__CTOR_OFFSET))(this);
	}

	::System::Void JJOEFPNJNGL(::Foundation::Unreal::FTransform& GKBJOPJKCLB)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FTransform&))((::PBYTE)hIl2Cpp + IAGLACHHAPE_JJOEFPNJNGL_OFFSET))(this, GKBJOPJKCLB);
	}

	::System::Void FKBEMLHDJJM(::Foundation::Unreal::FTransform& GKBJOPJKCLB)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FTransform&))((::PBYTE)hIl2Cpp + IAGLACHHAPE_FKBEMLHDJJM_OFFSET))(this, GKBJOPJKCLB);
	}
};
