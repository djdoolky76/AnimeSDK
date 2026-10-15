#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDNNILEFPHG;

#define NDNNILEFPHG_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C944660)
#define NDNNILEFPHG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C944890)
#define NDNNILEFPHG_KJAKNLOMIOJ_OFFSET UNITYSDK_OFFSET(0x1C944840)
#define NDNNILEFPHG_NBHCPBBGAKA_OFFSET UNITYSDK_OFFSET(0x1C944710)
#define NDNNILEFPHG_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0x1C9446B0)

inline static constexpr unsigned int NDNNILEFPHG_TypeDefinitionIndex = 42016;

	class NDNNILEFPHG : public ::System::Object
	{
	public:
		::System::UInt32 MIAJNJNECOG; // 0x10
		::System::UInt32 FLJEIOBKCKC; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDNNILEFPHG_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDNNILEFPHG_CLEAR_OFFSET))(this);
		}

		::System::Void PPEGOIODAKI(::NDNNILEFPHG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NDNNILEFPHG*))((::PBYTE)hIl2Cpp + NDNNILEFPHG_PPEGOIODAKI_OFFSET))(this, a1);
		}

		::NDNNILEFPHG* NBHCPBBGAKA()
		{
			return ((::NDNNILEFPHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDNNILEFPHG_NBHCPBBGAKA_OFFSET))(this);
		}

		::NDNNILEFPHG* KJAKNLOMIOJ()
		{
			return ((::NDNNILEFPHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDNNILEFPHG_KJAKNLOMIOJ_OFFSET))(this);
		}

	};
