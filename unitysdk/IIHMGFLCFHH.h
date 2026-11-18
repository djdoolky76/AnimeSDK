#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GBKLHLCGLMN.h"
#include "unitysdk/HDCBDDDMPNH.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define IIHMGFLCFHH_GIGGGMFBGEH_OFFSET UNITYSDK_OFFSET(0x5B5D20)
#define IIHMGFLCFHH_OMPFLKCBFHF_OFFSET UNITYSDK_OFFSET(0xEBDF030)
#define IIHMGFLCFHH__CCTOR_OFFSET UNITYSDK_OFFSET(0xEBDEFA0)
#define IIHMGFLCFHH__CTOR_OFFSET UNITYSDK_OFFSET(0x5B5CD0)

inline static constexpr unsigned int IIHMGFLCFHH_TypeDefinitionIndex = 75490;

struct alignas(8) IIHMGFLCFHH
{
	static ::Il2CppArray<::IIHMGFLCFHH>** StaticGet_JKBNLLNGPCP()
	{
		return (::Il2CppArray<::IIHMGFLCFHH>**)Il2CppClass::FromTypeDefinitionIndex(IIHMGFLCFHH_TypeDefinitionIndex)->GetStaticField(0x40E80);
	}
	::GBKLHLCGLMN BCCCCPJGKPK; // 0x10
	::System::Boolean GPAMIGPKKGO; // 0x11
	::System::Byte _padding0[0x6];
	::System::String* OMMEALOOOOD; // 0x18
	::System::String* KLPNMOJBPCM; // 0x20

	::System::Void _ctor(::GBKLHLCGLMN OBNIAHNMHPF, ::System::String* IMLLDOHDCNC, ::System::String* CBLGCIFLMKL)
	{
		return ((::System::Void(*)(::PVOID, ::GBKLHLCGLMN, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + IIHMGFLCFHH__CTOR_OFFSET))(this, OBNIAHNMHPF, IMLLDOHDCNC, CBLGCIFLMKL);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIHMGFLCFHH__CCTOR_OFFSET))();
	}

	/*
	static ::IIHMGFLCFHH OMPFLKCBFHF(::HDCBDDDMPNH OBNIAHNMHPF)
	{
		return ((::IIHMGFLCFHH(*)(::HDCBDDDMPNH))((::PBYTE)hIl2Cpp + IIHMGFLCFHH_OMPFLKCBFHF_OFFSET))(OBNIAHNMHPF);
	}
	*/

	::System::Int32 GIGGGMFBGEH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIHMGFLCFHH_GIGGGMFBGEH_OFFSET))(this);
	}
};
