#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
namespace System { class String; }

#define IALALIPNFPM_CTOR_OFFSET UNITYSDK_OFFSET(0x15E18460)
#define IALALIPNFPM_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x15E184D0)

inline static constexpr unsigned int IALALIPNFPM_TypeDefinitionIndex = 50045;

	class IALALIPNFPM : public ::System::Exception
	{
	public:
		::System::Int32 EOONMIGPBEF; // 0x88
		::System::Void _ctor(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + IALALIPNFPM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IALALIPNFPM_GET_MESSAGE_OFFSET))(this);
		}

	};
