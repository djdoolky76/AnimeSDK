#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class HNJPENLPJKC;
namespace System { class String; }

#define HNJPENLPJKC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE9EEE0)
#define HNJPENLPJKC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE9ED60)

inline static constexpr unsigned int HNJPENLPJKC_TypeDefinitionIndex = 12822;

	class HNJPENLPJKC : public ::System::Object
	{
	public:
		::System::String* OLOIFNNLKJP; // 0x10
		::System::String* DHMDAEKJENF; // 0x18
		::System::UInt32 PHFMCACHFIJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJPENLPJKC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HNJPENLPJKC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HNJPENLPJKC*))((::PBYTE)hIl2Cpp + HNJPENLPJKC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
