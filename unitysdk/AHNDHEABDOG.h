#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMGHBGLNMFF.h"
class KAKADGHNMFK;

#define AHNDHEABDOG_CTOR_OFFSET UNITYSDK_OFFSET(0xEB834D0)
#define AHNDHEABDOG_GET_CASTER_OFFSET UNITYSDK_OFFSET(0xEB834B0)
#define AHNDHEABDOG_SET_CASTER_OFFSET UNITYSDK_OFFSET(0xEB834C0)

inline static constexpr unsigned int AHNDHEABDOG_TypeDefinitionIndex = 77582;

	class AHNDHEABDOG : public ::GMGHBGLNMFF
	{
	public:
		::KAKADGHNMFK* _Caster_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNDHEABDOG_CTOR_OFFSET))(this);
		}

		::KAKADGHNMFK* get_Caster()
		{
			return ((::KAKADGHNMFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNDHEABDOG_GET_CASTER_OFFSET))(this);
		}

		::System::Void set_Caster(::KAKADGHNMFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + AHNDHEABDOG_SET_CASTER_OFFSET))(this, a1);
		}

	};
