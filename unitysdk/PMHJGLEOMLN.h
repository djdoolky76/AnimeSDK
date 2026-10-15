#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }

#define PMHJGLEOMLN_CTOR_OFFSET UNITYSDK_OFFSET(0xC315D30)

inline static constexpr unsigned int PMHJGLEOMLN_TypeDefinitionIndex = 72949;

	class PMHJGLEOMLN : public ::System::Object
	{
	public:
		::System::String* BIFLKECNJEP; // 0x10
		::System::String* OMKCCILBIOF; // 0x18
		::System::String* MAEPOCCHNEG; // 0x20
		::Il2CppArray<::System::Object*>* EECMDMJIJGD; // 0x28
		::RPG::Client::TextID NMMKDFFHOLL; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHJGLEOMLN_CTOR_OFFSET))(this);
		}

	};
