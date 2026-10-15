#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MAOPBKPKCEK.h"
class HMKBFLFIOMH;
namespace System { class String; }

#define HMKBFLFIOMH_COMPARETO_OFFSET UNITYSDK_OFFSET(0x15D79200)
#define HMKBFLFIOMH_CTOR_OFFSET UNITYSDK_OFFSET(0x15D791B0)
#define HMKBFLFIOMH_EEKHJLIHCDN_OFFSET UNITYSDK_OFFSET(0x15D793A0)
#define HMKBFLFIOMH_IOBACAGGCJN_OFFSET UNITYSDK_OFFSET(0x15D79360)
#define HMKBFLFIOMH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15D79280)

inline static constexpr unsigned int HMKBFLFIOMH_TypeDefinitionIndex = 62024;

	class HMKBFLFIOMH : public ::MAOPBKPKCEK
	{
	public:
		::System::UInt32 KDDAMPAMLNN; // 0x18
		::System::UInt32 OKHLEGENBBJ; // 0x1C
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + HMKBFLFIOMH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 CompareTo(::HMKBFLFIOMH* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::HMKBFLFIOMH*))((::PBYTE)hIl2Cpp + HMKBFLFIOMH_COMPARETO_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMKBFLFIOMH_TOSTRING_OFFSET))(this);
		}

		::System::UInt32 IOBACAGGCJN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMKBFLFIOMH_IOBACAGGCJN_OFFSET))(this);
		}

		::System::UInt32 EEKHJLIHCDN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMKBFLFIOMH_EEKHJLIHCDN_OFFSET))(this);
		}

	};
