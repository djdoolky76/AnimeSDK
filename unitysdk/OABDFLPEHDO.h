#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDPFOOJIAIJ;

#define OABDFLPEHDO_CTOR_OFFSET UNITYSDK_OFFSET(0xBD18E90)
#define OABDFLPEHDO_KLICCELODLB_OFFSET UNITYSDK_OFFSET(0xBD18910)
#define OABDFLPEHDO_LKAFOOENJID_OFFSET UNITYSDK_OFFSET(0xBD18970)

inline static constexpr unsigned int OABDFLPEHDO_TypeDefinitionIndex = 64746;

	class OABDFLPEHDO : public ::System::Object
	{
	public:
		::System::UInt32 BDAAMNHJOIC; // 0x10
		::System::UInt32 BPEOPJPCCHD; // 0x14
		::System::UInt32 MJFIKMCKMAD; // 0x18
		::System::UInt32 BPOJBDLBKMC; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OABDFLPEHDO_CTOR_OFFSET))(this);
		}

		::System::Boolean KLICCELODLB(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OABDFLPEHDO_KLICCELODLB_OFFSET))(this, a1);
		}

		::System::UInt32 LKAFOOENJID(::System::UInt32 a1, ::System::UInt32 a2, ::NDPFOOJIAIJ* a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::NDPFOOJIAIJ*))((::PBYTE)hIl2Cpp + OABDFLPEHDO_LKAFOOENJID_OFFSET))(this, a1, a2, a3);
		}

	};
