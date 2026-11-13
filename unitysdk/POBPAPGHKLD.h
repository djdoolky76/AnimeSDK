#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MissionKind.h"
#include "unitysdk/System/Object.h"

#define POBPAPGHKLD_CTOR_OFFSET UNITYSDK_OFFSET(0x184CEA50)

inline static constexpr unsigned int POBPAPGHKLD_TypeDefinitionIndex = 68103;

	class POBPAPGHKLD : public ::System::Object
	{
	public:
		::System::UInt32 BPINLJHDPKH; // 0x10
		::RPG::Client::MissionKind KAPIKEEGEPA; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POBPAPGHKLD_CTOR_OFFSET))(this);
		}

	};
