#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BLLHELHMIJC_CTOR_OFFSET UNITYSDK_OFFSET(0xBA75910)
#define BLLHELHMIJC_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xBA758B0)
#define BLLHELHMIJC_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xBA758D0)
#define BLLHELHMIJC_GET_LITTLEGAMEENTITYID_OFFSET UNITYSDK_OFFSET(0xBA758F0)
#define BLLHELHMIJC_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xBA758C0)
#define BLLHELHMIJC_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xBA758E0)
#define BLLHELHMIJC_SET_LITTLEGAMEENTITYID_OFFSET UNITYSDK_OFFSET(0xBA75900)

inline static constexpr unsigned int BLLHELHMIJC_TypeDefinitionIndex = 74592;

	class BLLHELHMIJC : public ::System::Object
	{
	public:
		::System::UInt32 _InstanceID_k__BackingField; // 0x10
		::System::UInt32 _LittleGameEntityID_k__BackingField; // 0x14
		::System::UInt32 _GroupID_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLLHELHMIJC_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLLHELHMIJC_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLLHELHMIJC_SET_GROUPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_InstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLLHELHMIJC_GET_INSTANCEID_OFFSET))(this);
		}

		::System::Void set_InstanceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLLHELHMIJC_SET_INSTANCEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_LittleGameEntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLLHELHMIJC_GET_LITTLEGAMEENTITYID_OFFSET))(this);
		}

		::System::Void set_LittleGameEntityID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLLHELHMIJC_SET_LITTLEGAMEENTITYID_OFFSET))(this, a1);
		}

	};
