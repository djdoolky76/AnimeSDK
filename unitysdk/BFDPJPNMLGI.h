#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DACDFPKGELK.h"
class LEEEMFAEDLN;
namespace System { class String; }

#define BFDPJPNMLGI_AKJABINEGDJ_OFFSET UNITYSDK_OFFSET(0xB15F6E0)
#define BFDPJPNMLGI_CTOR_OFFSET UNITYSDK_OFFSET(0xB15F5F0)
#define BFDPJPNMLGI_JFJNLINGBLB_OFFSET UNITYSDK_OFFSET(0xB15F730)
#define BFDPJPNMLGI_OOPJCBAIKMA_OFFSET UNITYSDK_OFFSET(0xB15F910)

inline static constexpr unsigned int BFDPJPNMLGI_TypeDefinitionIndex = 80646;

	class BFDPJPNMLGI : public ::System::Object
	{
	public:
		::System::String* LDNLKDCNEBJ; // 0x10
		::System::Single HBDJCFFDGDD; // 0x18
		::System::Void _ctor(::System::Single a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + BFDPJPNMLGI_CTOR_OFFSET))(this, a1, a2);
		}

		::DACDFPKGELK AKJABINEGDJ()
		{
			return ((::DACDFPKGELK(*)(::PVOID))((::PBYTE)hIl2Cpp + BFDPJPNMLGI_AKJABINEGDJ_OFFSET))(this);
		}

		::DACDFPKGELK OOPJCBAIKMA(::System::Single a1)
		{
			return ((::DACDFPKGELK(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BFDPJPNMLGI_OOPJCBAIKMA_OFFSET))(this, a1);
		}

		static ::LEEEMFAEDLN* JFJNLINGBLB(::System::Single a1, ::System::String* a2)
		{
			return ((::LEEEMFAEDLN*(*)(::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + BFDPJPNMLGI_JFJNLINGBLB_OFFSET))(a1, a2);
		}

	};
