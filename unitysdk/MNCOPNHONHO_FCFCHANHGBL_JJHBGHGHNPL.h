#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MNCOPNHONHO_FCFCHANHGBL_JJHBGHGHNPL_CTOR_OFFSET UNITYSDK_OFFSET(0xC2C2450)
#define MNCOPNHONHO_FCFCHANHGBL_JJHBGHGHNPL_FDNKPDJKMAL_OFFSET UNITYSDK_OFFSET(0xC2C2130)
#define MNCOPNHONHO_FCFCHANHGBL_JJHBGHGHNPL_GET_REASON_OFFSET UNITYSDK_OFFSET(0xC2C2470)
#define MNCOPNHONHO_FCFCHANHGBL_JJHBGHGHNPL_GET_SETCOLLIDERFLAG_OFFSET UNITYSDK_OFFSET(0xC2C24A0)
#define MNCOPNHONHO_FCFCHANHGBL_JJHBGHGHNPL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xC2C2480)
#define MNCOPNHONHO_FCFCHANHGBL_JJHBGHGHNPL_HPKIIJEGDLP_OFFSET UNITYSDK_OFFSET(0xC2C2370)
#define MNCOPNHONHO_FCFCHANHGBL_JJHBGHGHNPL_NBLADDNNAGJ_OFFSET UNITYSDK_OFFSET(0xC2C22B0)
#define MNCOPNHONHO_FCFCHANHGBL_JJHBGHGHNPL_SET_SETCOLLIDERFLAG_OFFSET UNITYSDK_OFFSET(0xC2C24B0)
#define MNCOPNHONHO_FCFCHANHGBL_JJHBGHGHNPL_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xC2C2490)

inline static constexpr unsigned int MNCOPNHONHO_FCFCHANHGBL_JJHBGHGHNPL_TypeDefinitionIndex = 79017;

	class MNCOPNHONHO_FCFCHANHGBL_JJHBGHGHNPL : public ::System::Object
	{
	public:
		::System::UInt32 _Reason_k__BackingField; // 0x10
		::System::Single ELEGHCFHEMA; // 0x14
		::System::Boolean _SetColliderFlag_k__BackingField; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single JDFDHGPENJD; // 0x1C
		::System::Single _Value_k__BackingField; // 0x20
		::System::Single JLLLCKMMNED; // 0x24
		::System::Single MJCIPPMIDBE; // 0x28
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MNCOPNHONHO_FCFCHANHGBL_JJHBGHGHNPL_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_Reason()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCOPNHONHO_FCFCHANHGBL_JJHBGHGHNPL_GET_REASON_OFFSET))(this);
		}

		::System::Single get_Value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCOPNHONHO_FCFCHANHGBL_JJHBGHGHNPL_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MNCOPNHONHO_FCFCHANHGBL_JJHBGHGHNPL_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Boolean get_SetColliderFlag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCOPNHONHO_FCFCHANHGBL_JJHBGHGHNPL_GET_SETCOLLIDERFLAG_OFFSET))(this);
		}

		::System::Void set_SetColliderFlag(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MNCOPNHONHO_FCFCHANHGBL_JJHBGHGHNPL_SET_SETCOLLIDERFLAG_OFFSET))(this, a1);
		}

		::System::Boolean FDNKPDJKMAL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCOPNHONHO_FCFCHANHGBL_JJHBGHGHNPL_FDNKPDJKMAL_OFFSET))(this);
		}

		::System::Void NBLADDNNAGJ(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MNCOPNHONHO_FCFCHANHGBL_JJHBGHGHNPL_NBLADDNNAGJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HPKIIJEGDLP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MNCOPNHONHO_FCFCHANHGBL_JJHBGHGHNPL_HPKIIJEGDLP_OFFSET))(this, a1);
		}

	};
