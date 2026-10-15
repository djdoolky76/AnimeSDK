#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
namespace System { class String; }

#define KDMCICBOLJD_CTOR_OFFSET UNITYSDK_OFFSET(0xB367390)

	class KDMCICBOLJD : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KDMCICBOLJD_CTOR_OFFSET))(this, a1);
		}

	};
