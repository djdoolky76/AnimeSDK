#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A0E056D42353C1E5.h"
#include "unitysdk/E3E924FA034550A4.h"

namespace System { class String; }

#define A47F9D83DCED9F4B__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A47F9D83DCED9F4B_TypeDefinitionIndex = 17842;

class A47F9D83DCED9F4B : public ::A0E056D42353C1E5
{
public:
	::Il2CppArray<::E3E924FA034550A4>* F4A1ECEA12A08A12; // 0x30
	::Il2CppArray<::System::String*>* EBE2428C15A2B542; // 0x38
	::Il2CppArray<::System::Int32>* B5F0A49E52909972; // 0x40
	::Il2CppArray<::System::String*>* AB25510D6263B0BA; // 0x48
	::Il2CppArray<::System::String*>* F4DE7DA1CA47DC02; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A47F9D83DCED9F4B__CTOR_OFFSET))(this);
	}
};
