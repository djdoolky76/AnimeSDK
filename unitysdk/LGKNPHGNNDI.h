#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/EB51RacingResultState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define LGKNPHGNNDI_CTOR_OFFSET UNITYSDK_OFFSET(0x1BCABC20)

inline static constexpr unsigned int LGKNPHGNNDI_TypeDefinitionIndex = 84837;

	class LGKNPHGNNDI : public ::System::Object
	{
	public:
		::System::String* ABOAHHIAIMC; // 0x10
		::System::String* ACFGMFBOFJB; // 0x18
		::System::String* DOBAKDMANPL; // 0x20
		::System::String* JIKBDNPAIFO; // 0x28
		::System::Boolean NKPLIFKDJEO; // 0x30
		::System::Boolean ODLCDAGDNDE; // 0x31
		::System::Boolean DHHGLHOOCMA; // 0x32
		::System::Boolean HFICBGPNKKP; // 0x33
		::System::Boolean ONEPBLBGLKO; // 0x34
		::System::Boolean PBFLDDKDJNB; // 0x35
		::System::Byte _padding0[0x2];
		::System::Int32 GBJLLAJJEOL; // 0x38
		::RPG::Client::B51Racing::EB51RacingResultState JPLBGHENAPG; // 0x3C
		::RPG::Client::TextID POFLNFDFEKB; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKNPHGNNDI_CTOR_OFFSET))(this);
		}

	};
