#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class FBECENEMLNO;
namespace System { class String; }

#define FBECENEMLNO_ILIKDIHMNDH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15697590)
#define FBECENEMLNO_ILIKDIHMNDH_CTOR_OFFSET UNITYSDK_OFFSET(0x15697650)

	class FBECENEMLNO_ILIKDIHMNDH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBECENEMLNO_ILIKDIHMNDH_CTOR_OFFSET))(this);
		}

		::FBECENEMLNO* BPLPBPMEODA(::RPG::Client::TextID a1, ::RPG::Client::TextID a2, ::System::String* a3)
		{
			return ((::FBECENEMLNO*(*)(::PVOID, ::RPG::Client::TextID, ::RPG::Client::TextID, ::System::String*))((::PBYTE)hIl2Cpp + FBECENEMLNO_ILIKDIHMNDH_BPLPBPMEODA_OFFSET))(this, a1, a2, a3);
		}

	};
