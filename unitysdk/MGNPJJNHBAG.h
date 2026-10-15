#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MGNPJJNHBAG_CTOR_OFFSET UNITYSDK_OFFSET(0xB9237E0)
#define MGNPJJNHBAG_KLAMOIEIAIO_OFFSET UNITYSDK_OFFSET(0xB923730)

inline static constexpr unsigned int MGNPJJNHBAG_TypeDefinitionIndex = 80340;

	class MGNPJJNHBAG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGNPJJNHBAG_CTOR_OFFSET))(this);
		}

		static ::System::String* KLAMOIEIAIO(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MGNPJJNHBAG_KLAMOIEIAIO_OFFSET))(a1, a2);
		}

	};
