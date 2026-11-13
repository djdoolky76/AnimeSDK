#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MDHFNACDGHB_CCPGCKJDFAK_OFFSET UNITYSDK_OFFSET(0x183DE6F0)
#define MDHFNACDGHB_CTOR_OFFSET UNITYSDK_OFFSET(0x183DE7A0)

inline static constexpr unsigned int MDHFNACDGHB_TypeDefinitionIndex = 50154;

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
