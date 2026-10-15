#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMGHBGLNMFF.h"
class KAKADGHNMFK;

#define EDMHCJNAKJI_CTOR_OFFSET UNITYSDK_OFFSET(0x13326500)
#define EDMHCJNAKJI_GET_CASTER_OFFSET UNITYSDK_OFFSET(0x133264E0)
#define EDMHCJNAKJI_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0x133264C0)
#define EDMHCJNAKJI_SET_CASTER_OFFSET UNITYSDK_OFFSET(0x133264F0)
#define EDMHCJNAKJI_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0x133264D0)

inline static constexpr unsigned int EDMHCJNAKJI_TypeDefinitionIndex = 77583;

	class EDMHCJNAKJI : public ::GMGHBGLNMFF
	{
	public:
		::KAKADGHNMFK* _Caster_k__BackingField; // 0x10
		::System::UInt32 _SkillID_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDMHCJNAKJI_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_SkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDMHCJNAKJI_GET_SKILLID_OFFSET))(this);
		}

		::System::Void set_SkillID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EDMHCJNAKJI_SET_SKILLID_OFFSET))(this, a1);
		}

		::KAKADGHNMFK* get_Caster()
		{
			return ((::KAKADGHNMFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDMHCJNAKJI_GET_CASTER_OFFSET))(this);
		}

		::System::Void set_Caster(::KAKADGHNMFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + EDMHCJNAKJI_SET_CASTER_OFFSET))(this, a1);
		}

	};
