#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define LHHCPMMADKG_CTOR_OFFSET UNITYSDK_OFFSET(0xB6B1770)

	class LHHCPMMADKG : public ::System::Object
	{
	public:
		::System::UInt32 AALPICLABCO; // 0x10
		::System::Boolean GNDCCBNILML; // 0x14
		::System::Byte _padding0[0x3];
		::RPG::Client::TextID PJHMJKEIGOA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHCPMMADKG_CTOR_OFFSET))(this);
		}

	};
