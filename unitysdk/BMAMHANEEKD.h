#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MAOPBKPKCEK.h"
class BMAMHANEEKD;
namespace System { class String; }

#define BMAMHANEEKD_COMPARETO_OFFSET UNITYSDK_OFFSET(0xBA85850)
#define BMAMHANEEKD_CTOR_OFFSET UNITYSDK_OFFSET(0xBA85800)
#define BMAMHANEEKD_TOSTRING_OFFSET UNITYSDK_OFFSET(0xBA858D0)

	class BMAMHANEEKD : public ::MAOPBKPKCEK
	{
	public:
		::System::UInt32 KDDAMPAMLNN; // 0x18
		::System::UInt32 OKHLEGENBBJ; // 0x1C
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BMAMHANEEKD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 CompareTo(::BMAMHANEEKD* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::BMAMHANEEKD*))((::PBYTE)hIl2Cpp + BMAMHANEEKD_COMPARETO_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMAMHANEEKD_TOSTRING_OFFSET))(this);
		}

	};
