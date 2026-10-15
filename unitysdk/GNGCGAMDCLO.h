#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define GNGCGAMDCLO_CTOR_OFFSET UNITYSDK_OFFSET(0x15B07840)
#define GNGCGAMDCLO_OJJPFGPNNIL_OFFSET UNITYSDK_OFFSET(0x15B07660)

inline static constexpr unsigned int GNGCGAMDCLO_TypeDefinitionIndex = 79159;

	class GNGCGAMDCLO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNGCGAMDCLO_CTOR_OFFSET))(this);
		}

		::System::Boolean OJJPFGPNNIL(::System::String* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GNGCGAMDCLO_OJJPFGPNNIL_OFFSET))(this, a1, a2, a3);
		}

	};
