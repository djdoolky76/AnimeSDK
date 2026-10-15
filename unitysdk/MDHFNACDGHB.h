#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MDHFNACDGHB_CCPGCKJDFAK_OFFSET UNITYSDK_OFFSET(0xB8A54F0)
#define MDHFNACDGHB_CTOR_OFFSET UNITYSDK_OFFSET(0xB8A55A0)

	class MDHFNACDGHB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHFNACDGHB_CTOR_OFFSET))(this);
		}

		static ::System::String* CCPGCKJDFAK(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MDHFNACDGHB_CCPGCKJDFAK_OFFSET))(a1);
		}

	};
