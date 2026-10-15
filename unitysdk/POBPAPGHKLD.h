#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MissionKind.h"
#include "unitysdk/System/Object.h"

#define POBPAPGHKLD_CTOR_OFFSET UNITYSDK_OFFSET(0xC358230)

inline static constexpr unsigned int POBPAPGHKLD_TypeDefinitionIndex = 66167;

	class POBPAPGHKLD : public ::System::Object
	{
	public:
		::RPG::Client::MissionKind KAPIKEEGEPA; // 0x10
		::System::UInt32 BPINLJHDPKH; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POBPAPGHKLD_CTOR_OFFSET))(this);
		}

	};
