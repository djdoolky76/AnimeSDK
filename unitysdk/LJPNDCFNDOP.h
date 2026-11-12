#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJPNDCFNDOP;

#define LJPNDCFNDOP_CTOR_OFFSET UNITYSDK_OFFSET(0xBFC19B0)
#define LJPNDCFNDOP_ECGALHNIEOC_OFFSET UNITYSDK_OFFSET(0xBFC19C0)
#define LJPNDCFNDOP_FFHNOMIDEDE_OFFSET UNITYSDK_OFFSET(0xBFC1B10)
#define LJPNDCFNDOP_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0xBFC18A0)

inline static constexpr unsigned int LJPNDCFNDOP_TypeDefinitionIndex = 70188;

	class LJPNDCFNDOP : public ::System::Object
	{
	public:
		::System::Boolean OJAHBOOIFED; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPNDCFNDOP_CTOR_OFFSET))(this);
		}

		static ::LJPNDCFNDOP* OHMHJFANEIF(::System::Boolean a1)
		{
			return ((::LJPNDCFNDOP*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + LJPNDCFNDOP_OHMHJFANEIF_OFFSET))(a1);
		}

		::System::Void ECGALHNIEOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPNDCFNDOP_ECGALHNIEOC_OFFSET))(this);
		}

		::System::Void FFHNOMIDEDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJPNDCFNDOP_FFHNOMIDEDE_OFFSET))(this);
		}

	};
