#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class GPDBMOHFKDG;
namespace System { class String; }

#define GPDBMOHFKDG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE48250)
#define GPDBMOHFKDG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE47FC0)

inline static constexpr unsigned int GPDBMOHFKDG_TypeDefinitionIndex = 15136;

	class GPDBMOHFKDG : public ::System::Object
	{
	public:
		::System::String* AICAOPMPGFE; // 0x10
		::System::String* OJOIHFGMHFB; // 0x18
		::System::String* FBGPKCMABBI; // 0x20
		::System::String* CJGEEODEJIB; // 0x28
		::System::String* BFLIFKBEOPJ; // 0x30
		::System::String* BBLEDNHEDCB; // 0x38
		::System::String* FNEGKJAJEIG; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDBMOHFKDG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GPDBMOHFKDG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GPDBMOHFKDG*))((::PBYTE)hIl2Cpp + GPDBMOHFKDG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
