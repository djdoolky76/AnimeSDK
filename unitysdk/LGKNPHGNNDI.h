#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/EB51RacingResultState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define LGKNPHGNNDI_CTOR_OFFSET UNITYSDK_OFFSET(0xB69AC20)

inline static constexpr unsigned int LGKNPHGNNDI_TypeDefinitionIndex = 82057;

	class LGKNPHGNNDI : public ::System::Object
	{
	public:
		::System::String* DOBAKDMANPL; // 0x10
		::System::String* ABOAHHIAIMC; // 0x18
		::System::String* JIKBDNPAIFO; // 0x20
		::System::String* ACFGMFBOFJB; // 0x28
		::System::Boolean HFICBGPNKKP; // 0x30
		::System::Boolean PBFLDDKDJNB; // 0x31
		::System::Byte _padding0[0x2];
		::RPG::Client::B51Racing::EB51RacingResultState JPLBGHENAPG; // 0x34
		::RPG::Client::TextID POFLNFDFEKB; // 0x38
		::System::Boolean NKPLIFKDJEO; // 0x48
		::System::Boolean ODLCDAGDNDE; // 0x49
		::System::Boolean ONEPBLBGLKO; // 0x4A
		::System::Boolean DHHGLHOOCMA; // 0x4B
		::System::Int32 GBJLLAJJEOL; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKNPHGNNDI_CTOR_OFFSET))(this);
		}

	};
