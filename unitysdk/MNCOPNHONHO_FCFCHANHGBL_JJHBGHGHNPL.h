#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MNCOPNHONHO_FCFCHANHGBL_JJHBGHGHNPL_CTOR_OFFSET UNITYSDK_OFFSET(0xBA04E20)
#define MNCOPNHONHO_FCFCHANHGBL_JJHBGHGHNPL_FDNKPDJKMAL_OFFSET UNITYSDK_OFFSET(0xBA04B10)
#define MNCOPNHONHO_FCFCHANHGBL_JJHBGHGHNPL_GET_REASON_OFFSET UNITYSDK_OFFSET(0xBA04E40)
#define MNCOPNHONHO_FCFCHANHGBL_JJHBGHGHNPL_GET_SETCOLLIDERFLAG_OFFSET UNITYSDK_OFFSET(0xBA04E70)
#define MNCOPNHONHO_FCFCHANHGBL_JJHBGHGHNPL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xBA04E50)
#define MNCOPNHONHO_FCFCHANHGBL_JJHBGHGHNPL_HPKIIJEGDLP_OFFSET UNITYSDK_OFFSET(0xBA04D40)
#define MNCOPNHONHO_FCFCHANHGBL_JJHBGHGHNPL_NBLADDNNAGJ_OFFSET UNITYSDK_OFFSET(0xBA04C90)
#define MNCOPNHONHO_FCFCHANHGBL_JJHBGHGHNPL_SET_SETCOLLIDERFLAG_OFFSET UNITYSDK_OFFSET(0xBA04E80)
#define MNCOPNHONHO_FCFCHANHGBL_JJHBGHGHNPL_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xBA04E60)

inline static constexpr unsigned int MNCOPNHONHO_FCFCHANHGBL_JJHBGHGHNPL_TypeDefinitionIndex = 76686;

	class MNCOPNHONHO_FCFCHANHGBL_JJHBGHGHNPL : public ::System::Object
	{
	public:
		::System::Boolean _SetColliderFlag_k__BackingField; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single JDFDHGPENJD; // 0x14
		::System::Single _Value_k__BackingField; // 0x18
		::System::Single MJCIPPMIDBE; // 0x1C
		::System::UInt32 _Reason_k__BackingField; // 0x20
		::System::Single JLLLCKMMNED; // 0x24
		::System::Single ELEGHCFHEMA; // 0x28
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
