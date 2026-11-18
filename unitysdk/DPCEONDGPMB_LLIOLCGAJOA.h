#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BALOLNHHBDA;
namespace System { template <typename T1, typename T2> class Func_2; }

#define DPCEONDGPMB_LLIOLCGAJOA_AIKEGOAJOIM_OFFSET UNITYSDK_OFFSET(0x13532360)
#define DPCEONDGPMB_LLIOLCGAJOA__CTOR_OFFSET UNITYSDK_OFFSET(0x1351E130)

inline static constexpr unsigned int DPCEONDGPMB_LLIOLCGAJOA_TypeDefinitionIndex = 91708;

class DPCEONDGPMB_LLIOLCGAJOA : public ::System::Object
{
public:
	::System::Func_2<::System::Int32, ::System::Boolean>* KNGDEEPCNGG; // 0x10
	::BALOLNHHBDA* GNAIIPBHAHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCEONDGPMB_LLIOLCGAJOA__CTOR_OFFSET))(this);
	}

	::System::Boolean AIKEGOAJOIM(::System::Int32 ALBNFNCECKJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DPCEONDGPMB_LLIOLCGAJOA_AIKEGOAJOIM_OFFSET))(this, ALBNFNCECKJ);
	}
};
