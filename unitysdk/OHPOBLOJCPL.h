#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define OHPOBLOJCPL_CTOR_OFFSET UNITYSDK_OFFSET(0xBE75E00)

inline static constexpr unsigned int OHPOBLOJCPL_TypeDefinitionIndex = 82055;

	class OHPOBLOJCPL : public ::System::Object
	{
	public:
		::System::Boolean GDBPKGCLAPF; // 0x10
		::System::Byte _padding0[0x7];
		::RPG::Client::TextID POFLNFDFEKB; // 0x18
		::System::Int32 GBJLLAJJEOL; // 0x28
		::System::Int32 MNAKIEOGPDK; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHPOBLOJCPL_CTOR_OFFSET))(this);
		}

	};
