#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GANLFBNCJCB;
namespace System { class String; }

#define GANLFBNCJCB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15942920)
#define GANLFBNCJCB_CTOR_OFFSET UNITYSDK_OFFSET(0x15942990)
#define GANLFBNCJCB_OKPLPEELPBC_OFFSET UNITYSDK_OFFSET(0x159429A0)

inline static constexpr unsigned int GANLFBNCJCB_TypeDefinitionIndex = 65988;

	class GANLFBNCJCB : public ::System::Object
	{
	public:
		::System::String* PMEDKAFPLMN; // 0x10
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GANLFBNCJCB_CTOR_OFFSET))(this, a1);
		}

		static ::GANLFBNCJCB* BPLPBPMEODA(::System::String* a1)
		{
			return ((::GANLFBNCJCB*(*)(::System::String*))((::PBYTE)hIl2Cpp + GANLFBNCJCB_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Boolean OKPLPEELPBC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GANLFBNCJCB_OKPLPEELPBC_OFFSET))(this);
		}

	};
