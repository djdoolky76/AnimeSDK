#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FDIOAGGFDHD;
namespace System { class String; }

#define OBKNEEOLOPB_NLEIGOJFDEJ_EHHLDFDPEDN_OFFSET UNITYSDK_OFFSET(0xFD61140)
#define OBKNEEOLOPB_NLEIGOJFDEJ__CTOR_OFFSET UNITYSDK_OFFSET(0xFD61130)

inline static constexpr unsigned int OBKNEEOLOPB_NLEIGOJFDEJ_TypeDefinitionIndex = 83967;

class OBKNEEOLOPB_NLEIGOJFDEJ : public ::System::Object
{
public:
	::FDIOAGGFDHD* DFMKILICPFB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBKNEEOLOPB_NLEIGOJFDEJ__CTOR_OFFSET))(this);
	}

	::System::String* EHHLDFDPEDN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBKNEEOLOPB_NLEIGOJFDEJ_EHHLDFDPEDN_OFFSET))(this);
	}
};
