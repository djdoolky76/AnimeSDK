#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FeverTimeToastType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define JKJGLIPPEPP_CTOR_OFFSET UNITYSDK_OFFSET(0x17B254B0)

inline static constexpr unsigned int JKJGLIPPEPP_TypeDefinitionIndex = 74146;

	class JKJGLIPPEPP : public ::System::Object
	{
	public:
		::System::String* LAJHJAJNFGC; // 0x10
		::System::Boolean HLHLJLDBKOI; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::GameCore::FeverTimeToastType FOCIKDIKBGK; // 0x1C
		::RPG::Client::TextID NMMKDFFHOLL; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKJGLIPPEPP_CTOR_OFFSET))(this);
		}

	};
