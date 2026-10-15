#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PPHMLMHGOIJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC37FC10)
#define PPHMLMHGOIJ_GET_CHECKMARKISVISIBLE_OFFSET UNITYSDK_OFFSET(0xC37FBF0)
#define PPHMLMHGOIJ_GET_DAMAGETYPEISVISIBLE_OFFSET UNITYSDK_OFFSET(0xC37FB90)
#define PPHMLMHGOIJ_GET_LEVELISVISIBLE_OFFSET UNITYSDK_OFFSET(0xC37FBB0)
#define PPHMLMHGOIJ_GET_NAMEISVISIBLE_OFFSET UNITYSDK_OFFSET(0xC37FBD0)
#define PPHMLMHGOIJ_SET_CHECKMARKISVISIBLE_OFFSET UNITYSDK_OFFSET(0xC37FC00)
#define PPHMLMHGOIJ_SET_DAMAGETYPEISVISIBLE_OFFSET UNITYSDK_OFFSET(0xC37FBA0)
#define PPHMLMHGOIJ_SET_LEVELISVISIBLE_OFFSET UNITYSDK_OFFSET(0xC37FBC0)
#define PPHMLMHGOIJ_SET_NAMEISVISIBLE_OFFSET UNITYSDK_OFFSET(0xC37FBE0)

inline static constexpr unsigned int PPHMLMHGOIJ_TypeDefinitionIndex = 60092;

	class PPHMLMHGOIJ : public ::System::Object
	{
	public:
		::System::Boolean _LevelIsVisible_k__BackingField; // 0x10
		::System::Boolean _NameIsVisible_k__BackingField; // 0x11
		::System::Boolean _CheckMarkIsVisible_k__BackingField; // 0x12
		::System::Boolean _DamageTypeIsVisible_k__BackingField; // 0x13
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPHMLMHGOIJ_CTOR_OFFSET))(this);
		}

		::System::Boolean get_DamageTypeIsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PPHMLMHGOIJ_GET_DAMAGETYPEISVISIBLE_OFFSET))(this);
		}

		::System::Void set_DamageTypeIsVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PPHMLMHGOIJ_SET_DAMAGETYPEISVISIBLE_OFFSET))(this, a1);
		}

		::System::Boolean get_LevelIsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PPHMLMHGOIJ_GET_LEVELISVISIBLE_OFFSET))(this);
		}

		::System::Void set_LevelIsVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PPHMLMHGOIJ_SET_LEVELISVISIBLE_OFFSET))(this, a1);
		}

		::System::Boolean get_NameIsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PPHMLMHGOIJ_GET_NAMEISVISIBLE_OFFSET))(this);
		}

		::System::Void set_NameIsVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PPHMLMHGOIJ_SET_NAMEISVISIBLE_OFFSET))(this, a1);
		}

		::System::Boolean get_CheckMarkIsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PPHMLMHGOIJ_GET_CHECKMARKISVISIBLE_OFFSET))(this);
		}

		::System::Void set_CheckMarkIsVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PPHMLMHGOIJ_SET_CHECKMARKISVISIBLE_OFFSET))(this, a1);
		}

	};
