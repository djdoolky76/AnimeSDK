#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ELFPROGRESSATTRIBUTEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1AEA92B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfProgressAttributeData_TypeDefinitionIndex = 65160;

	class ElfProgressAttributeData : public ::System::Object
	{
	public:
		::RPG::Client::TextID AttributeName; // 0x10
		::System::Single AttributeValue; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROGRESSATTRIBUTEDATA_CTOR_OFFSET))(this);
		}

	};
}
