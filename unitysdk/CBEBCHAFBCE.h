#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define CBEBCHAFBCE_CFKKENJPLFH_OFFSET UNITYSDK_OFFSET(0xC4A08E0)
#define CBEBCHAFBCE_CTOR_OFFSET UNITYSDK_OFFSET(0xC4A08D0)

	class CBEBCHAFBCE : public ::System::Object
	{
	public:
		::System::String* LFLPOOCDHDP; // 0x10
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CBEBCHAFBCE_CTOR_OFFSET))(this, a1);
		}

		::System::String* CFKKENJPLFH()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEBCHAFBCE_CFKKENJPLFH_OFFSET))(this);
		}

	};
