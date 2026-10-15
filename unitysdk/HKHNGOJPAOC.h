#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MAOPBKPKCEK.h"
class HKHNGOJPAOC;
namespace System { class String; }

#define HKHNGOJPAOC_COMPARETO_OFFSET UNITYSDK_OFFSET(0x15D384F0)
#define HKHNGOJPAOC_CTOR_OFFSET UNITYSDK_OFFSET(0x15D384A0)
#define HKHNGOJPAOC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15D38570)

inline static constexpr unsigned int HKHNGOJPAOC_TypeDefinitionIndex = 62027;

	class HKHNGOJPAOC : public ::MAOPBKPKCEK
	{
	public:
		::System::UInt32 OKHLEGENBBJ; // 0x18
		::System::UInt32 KDDAMPAMLNN; // 0x1C
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + HKHNGOJPAOC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 CompareTo(::HKHNGOJPAOC* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::HKHNGOJPAOC*))((::PBYTE)hIl2Cpp + HKHNGOJPAOC_COMPARETO_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHNGOJPAOC_TOSTRING_OFFSET))(this);
		}

	};
