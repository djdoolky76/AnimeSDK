#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBLHIMCKJIJ;
namespace System { class String; }

#define EBLHIMCKJIJ_CFAPEEHJGFA_CTOR_OFFSET UNITYSDK_OFFSET(0x12D02320)

	class EBLHIMCKJIJ_CFAPEEHJGFA : public ::System::Object
	{
	public:
		::EBLHIMCKJIJ* FMJPMFEDIJL; // 0x10
		::System::String* KCBPBMOJOKJ; // 0x18
		::System::Boolean NEIFCODCNGN; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLHIMCKJIJ_CFAPEEHJGFA_CTOR_OFFSET))(this);
		}

	};
