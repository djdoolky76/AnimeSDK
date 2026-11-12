#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMGHBGLNMFF.h"
class KAKADGHNMFK;

#define NCNLDCGADOF_CTOR_OFFSET UNITYSDK_OFFSET(0xC39FFA0)
#define NCNLDCGADOF_GET_BUFFCONFIG_OFFSET UNITYSDK_OFFSET(0xC39FF80)
#define NCNLDCGADOF_GET_CASTER_OFFSET UNITYSDK_OFFSET(0xC39FF60)
#define NCNLDCGADOF_SET_BUFFCONFIG_OFFSET UNITYSDK_OFFSET(0xC39FF90)
#define NCNLDCGADOF_SET_CASTER_OFFSET UNITYSDK_OFFSET(0xC39FF70)

inline static constexpr unsigned int NCNLDCGADOF_TypeDefinitionIndex = 80320;

	class NCNLDCGADOF : public ::GMGHBGLNMFF
	{
	public:
		::KAKADGHNMFK* _Caster_k__BackingField; // 0x10
		::KAKADGHNMFK* _BuffConfig_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCNLDCGADOF_CTOR_OFFSET))(this);
		}

		::KAKADGHNMFK* get_Caster()
		{
			return ((::KAKADGHNMFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCNLDCGADOF_GET_CASTER_OFFSET))(this);
		}

		::System::Void set_Caster(::KAKADGHNMFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + NCNLDCGADOF_SET_CASTER_OFFSET))(this, a1);
		}

		::KAKADGHNMFK* get_BuffConfig()
		{
			return ((::KAKADGHNMFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCNLDCGADOF_GET_BUFFCONFIG_OFFSET))(this);
		}

		::System::Void set_BuffConfig(::KAKADGHNMFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + NCNLDCGADOF_SET_BUFFCONFIG_OFFSET))(this, a1);
		}

	};
