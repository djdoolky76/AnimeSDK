#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
namespace System { class String; }

#define CHFBOKNPNPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8E4940)

inline static constexpr unsigned int CHFBOKNPNPN_TypeDefinitionIndex = 42063;

	class CHFBOKNPNPN : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CHFBOKNPNPN_CTOR_OFFSET))(this, a1);
		}

	};
