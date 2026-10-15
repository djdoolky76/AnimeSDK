#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class GPDBMOHFKDG;
namespace System { class String; }

#define GPDBMOHFKDG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE76350)
#define GPDBMOHFKDG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE760C0)

	class GPDBMOHFKDG : public ::System::Object
	{
	public:
		::System::String* FNEGKJAJEIG; // 0x10
		::System::String* BFLIFKBEOPJ; // 0x18
		::System::String* FBGPKCMABBI; // 0x20
		::System::String* BBLEDNHEDCB; // 0x28
		::System::String* CJGEEODEJIB; // 0x30
		::System::String* OJOIHFGMHFB; // 0x38
		::System::String* AICAOPMPGFE; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDBMOHFKDG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GPDBMOHFKDG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GPDBMOHFKDG*))((::PBYTE)hIl2Cpp + GPDBMOHFKDG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
