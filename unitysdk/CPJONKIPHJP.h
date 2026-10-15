#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace System { class String; }

#define CPJONKIPHJP_GET_AGGRO_OFFSET UNITYSDK_OFFSET(0x2080)
#define CPJONKIPHJP_GET_HPBASE_OFFSET UNITYSDK_OFFSET(0x1D30)
#define CPJONKIPHJP_GET_HPINHERIT_OFFSET UNITYSDK_OFFSET(0x1D40)
#define CPJONKIPHJP_GET_HPSKILL_OFFSET UNITYSDK_OFFSET(0x3260)
#define CPJONKIPHJP_GET_SPEEDBASE_OFFSET UNITYSDK_OFFSET(0x94F0)
#define CPJONKIPHJP_GET_SPEEDINHERIT_OFFSET UNITYSDK_OFFSET(0xAD00)
#define CPJONKIPHJP_GET_SPEEDSKILL_OFFSET UNITYSDK_OFFSET(0xAD20)
#define CPJONKIPHJP_SET_AGGRO_OFFSET UNITYSDK_OFFSET(0xAD40)
#define CPJONKIPHJP_SET_HPBASE_OFFSET UNITYSDK_OFFSET(0x94B0)
#define CPJONKIPHJP_SET_HPINHERIT_OFFSET UNITYSDK_OFFSET(0x94C0)
#define CPJONKIPHJP_SET_HPSKILL_OFFSET UNITYSDK_OFFSET(0xDDA70)
#define CPJONKIPHJP_SET_SPEEDBASE_OFFSET UNITYSDK_OFFSET(0x9500)
#define CPJONKIPHJP_SET_SPEEDINHERIT_OFFSET UNITYSDK_OFFSET(0xAD10)
#define CPJONKIPHJP_SET_SPEEDSKILL_OFFSET UNITYSDK_OFFSET(0xAD30)

inline static constexpr unsigned int CPJONKIPHJP_TypeDefinitionIndex = 51971;

	struct alignas(8) CPJONKIPHJP
	{
		::System::String* _HPBase_k__BackingField; // 0x10
		::System::String* _HPInherit_k__BackingField; // 0x18
		::System::UInt32 _HPSkill_k__BackingField; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* _SpeedBase_k__BackingField; // 0x28
		::System::String* _SpeedInherit_k__BackingField; // 0x30
		::System::UInt32 _SpeedSkill_k__BackingField; // 0x38
		::System::Byte _padding1[0x4];
		::RPG::GameCore::FixPoint _Aggro_k__BackingField; // 0x40
		::System::String* get_HPBase()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJONKIPHJP_GET_HPBASE_OFFSET))(this);
		}

		::System::Void set_HPBase(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CPJONKIPHJP_SET_HPBASE_OFFSET))(this, a1);
		}

		::System::String* get_HPInherit()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJONKIPHJP_GET_HPINHERIT_OFFSET))(this);
		}

		::System::Void set_HPInherit(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CPJONKIPHJP_SET_HPINHERIT_OFFSET))(this, a1);
		}

		::System::UInt32 get_HPSkill()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJONKIPHJP_GET_HPSKILL_OFFSET))(this);
		}

		::System::Void set_HPSkill(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPJONKIPHJP_SET_HPSKILL_OFFSET))(this, a1);
		}

		::System::String* get_SpeedBase()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJONKIPHJP_GET_SPEEDBASE_OFFSET))(this);
		}

		::System::Void set_SpeedBase(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CPJONKIPHJP_SET_SPEEDBASE_OFFSET))(this, a1);
		}

		::System::String* get_SpeedInherit()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJONKIPHJP_GET_SPEEDINHERIT_OFFSET))(this);
		}

		::System::Void set_SpeedInherit(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CPJONKIPHJP_SET_SPEEDINHERIT_OFFSET))(this, a1);
		}

		::System::UInt32 get_SpeedSkill()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJONKIPHJP_GET_SPEEDSKILL_OFFSET))(this);
		}

		::System::Void set_SpeedSkill(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPJONKIPHJP_SET_SPEEDSKILL_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_Aggro()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJONKIPHJP_GET_AGGRO_OFFSET))(this);
		}

		::System::Void set_Aggro(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CPJONKIPHJP_SET_AGGRO_OFFSET))(this, a1);
		}

	};
