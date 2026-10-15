#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define LHHCPMMADKG_CTOR_OFFSET UNITYSDK_OFFSET(0xB6AAB40)

inline static constexpr unsigned int LHHCPMMADKG_TypeDefinitionIndex = 55355;

	class LHHCPMMADKG : public ::System::Object
	{
	public:
		::System::Boolean GNDCCBNILML; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 AALPICLABCO; // 0x14
		::RPG::Client::TextID PJHMJKEIGOA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHCPMMADKG_CTOR_OFFSET))(this);
		}

	};
