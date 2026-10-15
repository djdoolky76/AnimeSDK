#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define GNLKKMMEANC_CHGAODBJPBE_OFFSET UNITYSDK_OFFSET(0x15B0A7A0)

inline static constexpr unsigned int GNLKKMMEANC_TypeDefinitionIndex = 63468;

	class GNLKKMMEANC : public ::System::Object
	{
	public:
		static ::System::Void CHGAODBJPBE(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GNLKKMMEANC_CHGAODBJPBE_OFFSET))(a1);
		}

	};
