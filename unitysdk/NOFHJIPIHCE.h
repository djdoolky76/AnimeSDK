#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define NOFHJIPIHCE_CTOR_OFFSET UNITYSDK_OFFSET(0xBCEB870)

	class NOFHJIPIHCE : public ::System::Object
	{
	public:
		::System::String* EDMBKLOAKIG; // 0x10
		::System::Int32 HCDEOKNIGKG; // 0x18
		::System::UInt32 GBGNNIDPBBE; // 0x1C
		::RPG::Client::TextID PJHMJKEIGOA; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFHJIPIHCE_CTOR_OFFSET))(this);
		}

	};
