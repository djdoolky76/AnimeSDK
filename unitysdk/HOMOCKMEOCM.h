#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMMHNODILFH.h"
#include "unitysdk/ONHDHGBIGFE.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define HOMOCKMEOCM_DIMMHHDJALE_OFFSET UNITYSDK_OFFSET(0x5FA570)
#define HOMOCKMEOCM_KIFABNFIBNM_OFFSET UNITYSDK_OFFSET(0x17B1B930)
#define HOMOCKMEOCM_OECKMFEGPHE_OFFSET UNITYSDK_OFFSET(0x17B1B880)

inline static constexpr unsigned int HOMOCKMEOCM_TypeDefinitionIndex = 56469;

struct alignas(8) HOMOCKMEOCM
{
	::ONHDHGBIGFE NOOLOILNGPL; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* EAIPBNDPCHH; // 0x18
	::GMMHNODILFH EIKHLEPNMHF; // 0x20

	/*
	static ::HOMOCKMEOCM OECKMFEGPHE(::System::String* NCPCMEFNENP, ::System::String* EOGBOKFFNDF, ::System::String* BMGONJBEIHC)
	{
		return ((::HOMOCKMEOCM(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOMOCKMEOCM_OECKMFEGPHE_OFFSET))(NCPCMEFNENP, EOGBOKFFNDF, BMGONJBEIHC);
	}
	*/

	::System::Boolean DIMMHHDJALE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMOCKMEOCM_DIMMHHDJALE_OFFSET))(this);
	}

	/*
	static ::HOMOCKMEOCM KIFABNFIBNM(::System::String* GDKCMJKMGPN)
	{
		return ((::HOMOCKMEOCM(*)(::System::String*))((::PBYTE)hIl2Cpp + HOMOCKMEOCM_KIFABNFIBNM_OFFSET))(GDKCMJKMGPN);
	}
	*/
};
