#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FFPFEGNEJDA;

#define FFPFEGNEJDA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x18A76670)
#define FFPFEGNEJDA_CTOR_OFFSET UNITYSDK_OFFSET(0x18A76750)
#define FFPFEGNEJDA_GET_EQUIPID_OFFSET UNITYSDK_OFFSET(0x18A76890)
#define FFPFEGNEJDA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x18A768B0)
#define FFPFEGNEJDA_GET_POS_OFFSET UNITYSDK_OFFSET(0x18A76870)
#define FFPFEGNEJDA_GET_UID_OFFSET UNITYSDK_OFFSET(0x18A76850)
#define FFPFEGNEJDA_HGGABIEGFJB_OFFSET UNITYSDK_OFFSET(0x18A76760)
#define FFPFEGNEJDA_ONFNDLAJNGO_OFFSET UNITYSDK_OFFSET(0x18A767C0)
#define FFPFEGNEJDA_SET_EQUIPID_OFFSET UNITYSDK_OFFSET(0x18A768A0)
#define FFPFEGNEJDA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x18A768C0)
#define FFPFEGNEJDA_SET_POS_OFFSET UNITYSDK_OFFSET(0x18A76880)
#define FFPFEGNEJDA_SET_UID_OFFSET UNITYSDK_OFFSET(0x18A76860)

inline static constexpr unsigned int FFPFEGNEJDA_TypeDefinitionIndex = 81992;

	class FFPFEGNEJDA : public ::System::Object
	{
	public:
		::System::UInt32 _UID_k__BackingField; // 0x10
		::System::UInt32 _Level_k__BackingField; // 0x14
		::System::UInt32 _EquipID_k__BackingField; // 0x18
		::System::UInt32 _Pos_k__BackingField; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPFEGNEJDA_CTOR_OFFSET))(this);
		}

		static ::FFPFEGNEJDA* BPLPBPMEODA(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::FFPFEGNEJDA*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FFPFEGNEJDA_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

		static ::FFPFEGNEJDA* ONFNDLAJNGO(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::FFPFEGNEJDA*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FFPFEGNEJDA_ONFNDLAJNGO_OFFSET))(a1, a2);
		}

		::System::Void HGGABIEGFJB(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FFPFEGNEJDA_HGGABIEGFJB_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPFEGNEJDA_GET_UID_OFFSET))(this);
		}

		::System::Void set_UID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FFPFEGNEJDA_SET_UID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Pos()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPFEGNEJDA_GET_POS_OFFSET))(this);
		}

		::System::Void set_Pos(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FFPFEGNEJDA_SET_POS_OFFSET))(this, a1);
		}

		::System::UInt32 get_EquipID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPFEGNEJDA_GET_EQUIPID_OFFSET))(this);
		}

		::System::Void set_EquipID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FFPFEGNEJDA_SET_EQUIPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPFEGNEJDA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FFPFEGNEJDA_SET_LEVEL_OFFSET))(this, a1);
		}

	};
