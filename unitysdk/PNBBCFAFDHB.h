#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GHJDEAEBHGA.h"
class KNBEDHIFIEE;
class PNBBCFAFDHB;
namespace System { class Object; }

#define PNBBCFAFDHB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC332C10)
#define PNBBCFAFDHB_CTOR_OFFSET UNITYSDK_OFFSET(0xC332BE0)
#define PNBBCFAFDHB_KFPIIOKMALE_OFFSET UNITYSDK_OFFSET(0xC332D20)

	class PNBBCFAFDHB : public ::GHJDEAEBHGA
	{
	public:
		::System::Void _ctor(::KNBEDHIFIEE* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::KNBEDHIFIEE*, ::System::UInt32))((::PBYTE)hIl2Cpp + PNBBCFAFDHB_CTOR_OFFSET))(this, a1, a2);
		}

		static ::PNBBCFAFDHB* BPLPBPMEODA(::KNBEDHIFIEE* a1, ::System::UInt32 a2, ::System::Single a3)
		{
			return ((::PNBBCFAFDHB*(*)(::KNBEDHIFIEE*, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + PNBBCFAFDHB_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

		::System::Void KFPIIOKMALE(::System::Single a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Object*))((::PBYTE)hIl2Cpp + PNBBCFAFDHB_KFPIIOKMALE_OFFSET))(this, a1, a2);
		}

	};
