#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }

#define DHBOGGBEMFF_PBCMKBIEJOP_CTOR_OFFSET UNITYSDK_OFFSET(0xEBB9160)
#define DHBOGGBEMFF_PBCMKBIEJOP_EQUALS_OFFSET UNITYSDK_OFFSET(0xEBC7800)
#define DHBOGGBEMFF_PBCMKBIEJOP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xEBC78F0)
#define DHBOGGBEMFF_PBCMKBIEJOP_TOSTRING_OFFSET UNITYSDK_OFFSET(0xEBC7A30)

	class DHBOGGBEMFF_PBCMKBIEJOP : public ::System::Object
	{
	public:
		::System::String* ACDAFHAFPHI; // 0x10
		::System::String* ELFIBPKLELI; // 0x18
		::System::Int32 JHBAAEHHPDE; // 0x20
		::RPG::CustomRP::CustomLightQualityFilter JFDEKLAJGNH; // 0x24
		::System::Int32 KBKCIKHHFDL; // 0x28
		::System::Void _ctor(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::RPG::CustomRP::CustomLightQualityFilter a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter, ::System::Int32))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_PBCMKBIEJOP_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_PBCMKBIEJOP_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_PBCMKBIEJOP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_PBCMKBIEJOP_TOSTRING_OFFSET))(this);
		}

	};
