#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MOGBNBGMIHF.h"
class KNBEDHIFIEE;
namespace System { class Object; }

#define GHJDEAEBHGA_CTOR_OFFSET UNITYSDK_OFFSET(0x15A25470)
#define GHJDEAEBHGA_KFPIIOKMALE_OFFSET UNITYSDK_OFFSET(0x15A255D0)
#define GHJDEAEBHGA_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x15A254A0)

	class GHJDEAEBHGA : public ::MOGBNBGMIHF
	{
	public:
		::KNBEDHIFIEE* BKIBLEGOACO; // 0x38
		::System::UInt32 GOAKEBLAKCF; // 0x40
		::System::Void _ctor(::KNBEDHIFIEE* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::KNBEDHIFIEE*, ::System::UInt32))((::PBYTE)hIl2Cpp + GHJDEAEBHGA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GHJDEAEBHGA_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void KFPIIOKMALE(::System::Single a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Object*))((::PBYTE)hIl2Cpp + GHJDEAEBHGA_KFPIIOKMALE_OFFSET))(this, a1, a2);
		}

	};
