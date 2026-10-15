#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class DamageTextStyle;
namespace System { class String; }

#define BODMMAAAOCE_BHMDNOJDCEF_CTOR_OFFSET UNITYSDK_OFFSET(0xC18EF60)

inline static constexpr unsigned int BODMMAAAOCE_BHMDNOJDCEF_TypeDefinitionIndex = 72376;

	class BODMMAAAOCE_BHMDNOJDCEF : public ::System::Object
	{
	public:
		::System::String* BDACPPLKLGL; // 0x10
		::DamageTextStyle* CFNAKPADAEB; // 0x18
		::RPG::Client::TextID MJOOFPBABEA; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BODMMAAAOCE_BHMDNOJDCEF_CTOR_OFFSET))(this);
		}

	};
