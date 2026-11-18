#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"

class FLDPBAPLICI;

#define LKBGCCBEMMD_AFMOJILHHDM_OFFSET UNITYSDK_OFFSET(0x13CF8AA0)
#define LKBGCCBEMMD__CTOR_OFFSET UNITYSDK_OFFSET(0x13CF8A90)

inline static constexpr unsigned int LKBGCCBEMMD_TypeDefinitionIndex = 61520;

class LKBGCCBEMMD : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKBGCCBEMMD__CTOR_OFFSET))(this);
	}

	static ::Foundation::ViewObject::ViewObjectHandle AFMOJILHHDM(::System::UInt32 AOCOIDIMLIH, ::System::UInt32 CLACNEMIOBA, ::FLDPBAPLICI* PHPGNKPNEFD, ::System::Boolean JIPOIHGGHFD)
	{
		return ((::Foundation::ViewObject::ViewObjectHandle(*)(::System::UInt32, ::System::UInt32, ::FLDPBAPLICI*, ::System::Boolean))((::PBYTE)hIl2Cpp + LKBGCCBEMMD_AFMOJILHHDM_OFFSET))(AOCOIDIMLIH, CLACNEMIOBA, PHPGNKPNEFD, JIPOIHGGHFD);
	}
};
