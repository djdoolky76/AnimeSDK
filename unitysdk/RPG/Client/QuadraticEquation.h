#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define RPG_CLIENT_QUADRATICEQUATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE0)
#define RPG_CLIENT_QUADRATICEQUATION_KBGCFMIPJDG_OFFSET UNITYSDK_OFFSET(0xEF8F0)
#define RPG_CLIENT_QUADRATICEQUATION_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xEF800)
#define RPG_CLIENT_QUADRATICEQUATION_OJJLNEIAOPN_OFFSET UNITYSDK_OFFSET(0xEF880)
#define RPG_CLIENT_QUADRATICEQUATION_TOSTRING_OFFSET UNITYSDK_OFFSET(0xEF940)

namespace RPG::Client
{
	inline static constexpr unsigned int QuadraticEquation_TypeDefinitionIndex = 73256;

	struct alignas(4) QuadraticEquation
	{
		::System::Single a; // 0x10
		::System::Single b; // 0x14
		::System::Single c; // 0x18
		::System::Single rSquared; // 0x1C
		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRATICEQUATION_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single KFGJEKJHIMB(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRATICEQUATION_KFGJEKJHIMB_OFFSET))(this, a1);
		}

		::System::Single OJJLNEIAOPN(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRATICEQUATION_OJJLNEIAOPN_OFFSET))(this, a1);
		}

		::System::Single KBGCFMIPJDG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRATICEQUATION_KBGCFMIPJDG_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUADRATICEQUATION_TOSTRING_OFFSET))(this);
		}

	};
}
