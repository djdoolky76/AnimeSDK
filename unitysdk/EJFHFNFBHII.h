#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }
namespace System { class String; }

#define EJFHFNFBHII_CTOR_OFFSET UNITYSDK_OFFSET(0x154D85F0)

inline static constexpr unsigned int EJFHFNFBHII_TypeDefinitionIndex = 81263;

	class EJFHFNFBHII : public ::System::Object
	{
	public:
		::System::String* APIKAGGCKHG; // 0x10
		::RPG::Client::Promises::Promise* MGJLINFADJK; // 0x18
		::System::Boolean FLONEHBJDAK; // 0x20
		::System::Boolean JCIEMGBFDFN; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFHFNFBHII_CTOR_OFFSET))(this);
		}

	};
