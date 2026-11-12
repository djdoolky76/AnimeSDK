#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }
namespace System { class String; }

#define EJFHFNFBHII_CTOR_OFFSET UNITYSDK_OFFSET(0x16418F30)

inline static constexpr unsigned int EJFHFNFBHII_TypeDefinitionIndex = 84043;

	class EJFHFNFBHII : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* MGJLINFADJK; // 0x10
		::System::String* APIKAGGCKHG; // 0x18
		::System::Boolean JCIEMGBFDFN; // 0x20
		::System::Boolean FLONEHBJDAK; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFHFNFBHII_CTOR_OFFSET))(this);
		}

	};
