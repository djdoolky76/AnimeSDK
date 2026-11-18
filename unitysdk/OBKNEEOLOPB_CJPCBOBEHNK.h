#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJJINBCPBKK.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define OBKNEEOLOPB_CJPCBOBEHNK_HLHNGBIFLEP_OFFSET UNITYSDK_OFFSET(0x1B772720)
#define OBKNEEOLOPB_CJPCBOBEHNK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B772710)

inline static constexpr unsigned int OBKNEEOLOPB_CJPCBOBEHNK_TypeDefinitionIndex = 83965;

class OBKNEEOLOPB_CJPCBOBEHNK : public ::System::Object
{
public:
	::IJJINBCPBKK IPMMCGDMODG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBKNEEOLOPB_CJPCBOBEHNK__CTOR_OFFSET))(this);
	}

	::System::String* HLHNGBIFLEP(::System::String* LCEGOBBEECM)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OBKNEEOLOPB_CJPCBOBEHNK_HLHNGBIFLEP_OFFSET))(this, LCEGOBBEECM);
	}
};
