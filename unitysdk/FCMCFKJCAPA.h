#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }

#define FCMCFKJCAPA_CTOR_OFFSET UNITYSDK_OFFSET(0x156CE970)

	class FCMCFKJCAPA : public ::System::Attribute
	{
	public:
		::System::String* FFCPBBENHFD; // 0x10
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FCMCFKJCAPA_CTOR_OFFSET))(this, a1);
		}

	};
