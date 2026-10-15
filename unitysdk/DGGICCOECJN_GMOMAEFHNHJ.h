#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DGGICCOECJN_GMOMAEFHNHJ_CTOR_OFFSET UNITYSDK_OFFSET(0xE83C790)
#define DGGICCOECJN_GMOMAEFHNHJ_GET_HASEVEREARNEDBADGE_OFFSET UNITYSDK_OFFSET(0xE83D2B0)
#define DGGICCOECJN_GMOMAEFHNHJ_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xE83D290)
#define DGGICCOECJN_GMOMAEFHNHJ_GKLAFAFPLMN_OFFSET UNITYSDK_OFFSET(0xE83CDF0)
#define DGGICCOECJN_GMOMAEFHNHJ_PJFOJFDPDKB_OFFSET UNITYSDK_OFFSET(0xE83CDA0)
#define DGGICCOECJN_GMOMAEFHNHJ_SET_HASEVEREARNEDBADGE_OFFSET UNITYSDK_OFFSET(0xE83D2C0)
#define DGGICCOECJN_GMOMAEFHNHJ_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xE83D2A0)

inline static constexpr unsigned int DGGICCOECJN_GMOMAEFHNHJ_TypeDefinitionIndex = 63127;

	class DGGICCOECJN_GMOMAEFHNHJ : public ::System::Object
	{
	public:
		::System::Int32 _MaxLevel_k__BackingField; // 0x10
		::System::Boolean _HasEverEarnedBadge_k__BackingField; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGICCOECJN_GMOMAEFHNHJ_CTOR_OFFSET))(this);
		}

		::System::Int32 get_MaxLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGICCOECJN_GMOMAEFHNHJ_GET_MAXLEVEL_OFFSET))(this);
		}

		::System::Void set_MaxLevel(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DGGICCOECJN_GMOMAEFHNHJ_SET_MAXLEVEL_OFFSET))(this, a1);
		}

		::System::Boolean get_HasEverEarnedBadge()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGICCOECJN_GMOMAEFHNHJ_GET_HASEVEREARNEDBADGE_OFFSET))(this);
		}

		::System::Void set_HasEverEarnedBadge(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DGGICCOECJN_GMOMAEFHNHJ_SET_HASEVEREARNEDBADGE_OFFSET))(this, a1);
		}

		::System::Void PJFOJFDPDKB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DGGICCOECJN_GMOMAEFHNHJ_PJFOJFDPDKB_OFFSET))(this, a1);
		}

		::System::Void GKLAFAFPLMN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DGGICCOECJN_GMOMAEFHNHJ_GKLAFAFPLMN_OFFSET))(this, a1);
		}

	};
