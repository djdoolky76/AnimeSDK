#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define PFBLMLOGGOK_CTOR_OFFSET UNITYSDK_OFFSET(0xCAE9A90)

inline static constexpr unsigned int PFBLMLOGGOK_TypeDefinitionIndex = 71386;

	class PFBLMLOGGOK : public ::System::Object
	{
	public:
		::System::Int32 IGOIDKOLPMO; // 0x10
		::System::Single EDKJKBENBBL; // 0x14
		::RPG::Client::TextID KBEPAIAFLHL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFBLMLOGGOK_CTOR_OFFSET))(this);
		}

	};
