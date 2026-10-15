#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PKHNHEBKPPI.h"
namespace System { class Object; }
namespace System { class String; }

#define IIMPMKALHPL_CLEAR_OFFSET UNITYSDK_OFFSET(0x164517C0)
#define IIMPMKALHPL_CTOR_OFFSET UNITYSDK_OFFSET(0x164519D0)
#define IIMPMKALHPL_DDCENCNBHDN_OFFSET UNITYSDK_OFFSET(0x16451800)

inline static constexpr unsigned int IIMPMKALHPL_TypeDefinitionIndex = 73386;

	class IIMPMKALHPL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMPMKALHPL_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMPMKALHPL_CLEAR_OFFSET))(this);
		}

		::System::String* DDCENCNBHDN(::System::Object* a1, ::PKHNHEBKPPI a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*, ::PKHNHEBKPPI))((::PBYTE)hIl2Cpp + IIMPMKALHPL_DDCENCNBHDN_OFFSET))(this, a1, a2);
		}

	};
