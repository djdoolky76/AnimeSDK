#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define NIIMOFIKEFK_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x6802E0)
#define NIIMOFIKEFK_EQUALS_OFFSET UNITYSDK_OFFSET(0x680270)
#define NIIMOFIKEFK_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x11598590)
#define NIIMOFIKEFK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x6802D0)
#define NIIMOFIKEFK__CTOR_OFFSET UNITYSDK_OFFSET(0x2E4140)

inline static constexpr unsigned int NIIMOFIKEFK_TypeDefinitionIndex = 74156;

struct alignas(4) NIIMOFIKEFK
{
	::System::UInt32 KEDBFHFLBHI; // 0x10
	::System::Int32 HOMFGOGJNAN; // 0x14

	::System::Void _ctor(::System::UInt32 KMMGKJPAOMF, ::System::Int32 JJGNKFNINLM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + NIIMOFIKEFK__CTOR_OFFSET))(this, KMMGKJPAOMF, JJGNKFNINLM);
	}

	/*
	::System::Boolean Equals(::NIIMOFIKEFK LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::NIIMOFIKEFK))((::PBYTE)hIl2Cpp + NIIMOFIKEFK_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIIMOFIKEFK_TOSTRING_OFFSET))(this);
	}

	/*
	static ::NIIMOFIKEFK JFDOOELFAOA(::System::UInt32 KMMGKJPAOMF, ::System::Int32 JJGNKFNINLM)
	{
		return ((::NIIMOFIKEFK(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + NIIMOFIKEFK_JFDOOELFAOA_OFFSET))(KMMGKJPAOMF, JJGNKFNINLM);
	}
	*/

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIIMOFIKEFK_DPIHOJBBGLA_OFFSET))(this);
	}
};
