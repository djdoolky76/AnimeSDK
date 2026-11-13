#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define LHHCPMMADKG_CTOR_OFFSET UNITYSDK_OFFSET(0x1BCC3050)

inline static constexpr unsigned int LHHCPMMADKG_TypeDefinitionIndex = 56538;

	class LHHCPMMADKG : public ::System::Object
	{
	public:
		::RPG::Client::TextID PJHMJKEIGOA; // 0x10
		::System::UInt32 AALPICLABCO; // 0x20
		::System::Boolean GNDCCBNILML; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHCPMMADKG_CTOR_OFFSET))(this);
		}

	};
