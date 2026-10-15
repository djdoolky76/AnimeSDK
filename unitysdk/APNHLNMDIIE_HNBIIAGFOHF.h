#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class String; }

#define APNHLNMDIIE_HNBIIAGFOHF_CTOR_OFFSET UNITYSDK_OFFSET(0x15BB3700)

inline static constexpr unsigned int APNHLNMDIIE_HNBIIAGFOHF_TypeDefinitionIndex = 52277;

	class APNHLNMDIIE_HNBIIAGFOHF : public ::System::Object
	{
	public:
		::System::Action* MGJLINFADJK; // 0x10
		::System::String* DHMDAEKJENF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APNHLNMDIIE_HNBIIAGFOHF_CTOR_OFFSET))(this);
		}

	};
