#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class KLFLPIFLDAB;
namespace System { class String; }

#define KLFLPIFLDAB_PGJHOONPGCK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB5262B0)
#define KLFLPIFLDAB_PGJHOONPGCK_CTOR_OFFSET UNITYSDK_OFFSET(0xB526350)

inline static constexpr unsigned int KLFLPIFLDAB_PGJHOONPGCK_TypeDefinitionIndex = 79746;

	class KLFLPIFLDAB_PGJHOONPGCK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFLPIFLDAB_PGJHOONPGCK_CTOR_OFFSET))(this);
		}

		::KLFLPIFLDAB* BPLPBPMEODA(::RPG::Client::TextID a1, ::System::String* a2)
		{
			return ((::KLFLPIFLDAB*(*)(::PVOID, ::RPG::Client::TextID, ::System::String*))((::PBYTE)hIl2Cpp + KLFLPIFLDAB_PGJHOONPGCK_BPLPBPMEODA_OFFSET))(this, a1, a2);
		}

	};
