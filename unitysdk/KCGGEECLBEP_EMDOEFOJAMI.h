#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define KCGGEECLBEP_EMDOEFOJAMI_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x130AD8A0)
#define KCGGEECLBEP_EMDOEFOJAMI__CTOR_OFFSET UNITYSDK_OFFSET(0x130AD890)

inline static constexpr unsigned int KCGGEECLBEP_EMDOEFOJAMI_TypeDefinitionIndex = 83741;

class KCGGEECLBEP_EMDOEFOJAMI : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* CBJLCJKAEKJ; // 0x10
	::Foundation::ViewObject::ViewObjectHandle MDFCIHDPJJK; // 0x18
	::System::Int32 COMDNFILAIC; // 0x28
	::System::Int32 AOCOIDIMLIH; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCGGEECLBEP_EMDOEFOJAMI__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL(::System::Boolean NENJCIFFNIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KCGGEECLBEP_EMDOEFOJAMI_LIDNPLMPHAL_OFFSET))(this, NENJCIFFNIG);
	}
};
