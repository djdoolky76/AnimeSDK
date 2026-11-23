#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B15A0F1CFC73F828_A8AD1089F01F8C61;
namespace System { class Action; }

#define B15A0F1CFC73F828_B6A4C165D9682B97_AAF53F5F2F4B2688_OFFSET UNITYSDK_OFFSET(0x2081B50)
#define B15A0F1CFC73F828_B6A4C165D9682B97__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B15A0F1CFC73F828_B6A4C165D9682B97_TypeDefinitionIndex = 8474;

class B15A0F1CFC73F828_B6A4C165D9682B97 : public ::System::Object
{
public:
	::B15A0F1CFC73F828_A8AD1089F01F8C61* A0EB125A66A994BD; // 0x10
	::System::Action* F422651CC4956382; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B15A0F1CFC73F828_B6A4C165D9682B97__CTOR_OFFSET))(this);
	}

	::System::Void AAF53F5F2F4B2688()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B15A0F1CFC73F828_B6A4C165D9682B97_AAF53F5F2F4B2688_OFFSET))(this);
	}
};
