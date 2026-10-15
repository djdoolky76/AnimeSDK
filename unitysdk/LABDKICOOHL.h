#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
class KLGICPNPKIC;
namespace System { class Exception; }
namespace System { class String; }

#define LABDKICOOHL_CTOR_1_OFFSET UNITYSDK_OFFSET(0xB5D54B0)
#define LABDKICOOHL_CTOR_OFFSET UNITYSDK_OFFSET(0xB5D54A0)

inline static constexpr unsigned int LABDKICOOHL_TypeDefinitionIndex = 73422;

	class LABDKICOOHL : public ::System::Exception
	{
	public:
		::System::Void _ctor(::KLGICPNPKIC* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KLGICPNPKIC*, ::System::String*))((::PBYTE)hIl2Cpp + LABDKICOOHL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::KLGICPNPKIC* a1, ::System::String* a2, ::System::Exception* a3)
		{
			return ((::System::Void(*)(::PVOID, ::KLGICPNPKIC*, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + LABDKICOOHL_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

	};
