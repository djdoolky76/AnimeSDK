#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }

#define HCOPAPIKLIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD61BA0)
#define HCOPAPIKLIJ_GET_PARAMETERNAME_OFFSET UNITYSDK_OFFSET(0x1DD61BB0)

	class HCOPAPIKLIJ : public ::System::Attribute
	{
	public:
		::System::String* _ParameterName_k__BackingField; // 0x10
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HCOPAPIKLIJ_CTOR_OFFSET))(this, a1);
		}

		::System::String* get_ParameterName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCOPAPIKLIJ_GET_PARAMETERNAME_OFFSET))(this);
		}

	};
