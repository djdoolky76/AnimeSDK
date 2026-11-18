#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define COBPHGPKPLN_FDLNEILHGFH__CTOR_OFFSET UNITYSDK_OFFSET(0x1457F820)

inline static constexpr unsigned int COBPHGPKPLN_FDLNEILHGFH_TypeDefinitionIndex = 64386;

class COBPHGPKPLN_FDLNEILHGFH : public ::System::Object
{
public:
	::System::String* CEBJLNNENLH; // 0x10
	::System::UInt32 LDGNHBECHPH; // 0x18

	::System::Void _ctor(::System::UInt32 BEPMDFENBMH, ::System::String* HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + COBPHGPKPLN_FDLNEILHGFH__CTOR_OFFSET))(this, BEPMDFENBMH, HIAIKHDFCLN);
	}
};
