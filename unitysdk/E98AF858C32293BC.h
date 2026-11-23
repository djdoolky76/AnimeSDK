#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }

#define E98AF858C32293BC_AB2B1CAE048D1936_OFFSET UNITYSDK_OFFSET(0x3D03BA0)
#define E98AF858C32293BC_BA61DD10F82ED936_1_OFFSET UNITYSDK_OFFSET(0x3D03DB0)
#define E98AF858C32293BC_BA61DD10F82ED936_OFFSET UNITYSDK_OFFSET(0x3D03E00)
#define E98AF858C32293BC_E244C9B37512B606_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define E98AF858C32293BC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3D03FA0)
#define E98AF858C32293BC__CTOR_OFFSET UNITYSDK_OFFSET(0x3D03E30)

inline static constexpr unsigned int E98AF858C32293BC_TypeDefinitionIndex = 10859;

class E98AF858C32293BC : public ::System::Object
{
public:
	::System::Exception* B739EE643EAC9106; // 0x10
	::System::Object* F684155A3E83C9EA; // 0x18

	::System::Void _ctor(::System::Exception* E2B6D81F69EA0D9B)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + E98AF858C32293BC__CTOR_OFFSET))(this, E2B6D81F69EA0D9B);
	}

	::System::Exception* E244C9B37512B606()
	{
		return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + E98AF858C32293BC_E244C9B37512B606_OFFSET))(this);
	}

	static ::System::Void BA61DD10F82ED936(::System::Exception* AFE8F10692F5139F)
	{
		return ((::System::Void(*)(::System::Exception*))((::PBYTE)hIl2Cpp + E98AF858C32293BC_BA61DD10F82ED936_OFFSET))(AFE8F10692F5139F);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E98AF858C32293BC__CTOR_1_OFFSET))(this);
	}

	::System::Void BA61DD10F82ED936_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E98AF858C32293BC_BA61DD10F82ED936_1_OFFSET))(this);
	}

	static ::E98AF858C32293BC* AB2B1CAE048D1936(::System::Exception* AFE8F10692F5139F)
	{
		return ((::E98AF858C32293BC*(*)(::System::Exception*))((::PBYTE)hIl2Cpp + E98AF858C32293BC_AB2B1CAE048D1936_OFFSET))(AFE8F10692F5139F);
	}
};
