#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }

#define PMHJGLEOMLN_CTOR_OFFSET UNITYSDK_OFFSET(0xC31D610)

	class PMHJGLEOMLN : public ::System::Object
	{
	public:
		::System::String* MAEPOCCHNEG; // 0x10
		::System::String* BIFLKECNJEP; // 0x18
		::Il2CppArray<::System::Object*>* EECMDMJIJGD; // 0x20
		::System::String* OMKCCILBIOF; // 0x28
		::RPG::Client::TextID NMMKDFFHOLL; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHJGLEOMLN_CTOR_OFFSET))(this);
		}

	};
