#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhoneMessagePlayMode.h"

#define RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x3E34870)
#define RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO_GET_ENABLEUIDOF_OFFSET UNITYSDK_OFFSET(0x3DDA6C0)
#define RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x7CED80)
#define RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO_GET_PLAYMODE_OFFSET UNITYSDK_OFFSET(0xC8F0)
#define RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO_GET_WITHNOTICE_OFFSET UNITYSDK_OFFSET(0x3E0FB00)
#define RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO_SET_ENABLEUIDOF_OFFSET UNITYSDK_OFFSET(0x3E34860)
#define RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xADCE20)
#define RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO_SET_PLAYMODE_OFFSET UNITYSDK_OFFSET(0x3D73BE0)
#define RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO_SET_WITHNOTICE_OFFSET UNITYSDK_OFFSET(0x3E0FB10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhoneNoticeShowAdaptiveInfo_TypeDefinitionIndex = 53428;

	struct alignas(4) PhoneNoticeShowAdaptiveInfo
	{
		::System::UInt32 _GroupID; // 0x10
		::System::Boolean _WithNotice; // 0x14
		::System::Byte _padding0[0x3];
		::RPG::GameCore::PhoneMessagePlayMode _PlayMode; // 0x18
		::System::Boolean _EnableUIDOF; // 0x1C
		::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2, ::RPG::GameCore::PhoneMessagePlayMode a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::RPG::GameCore::PhoneMessagePlayMode, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO_SET_GROUPID_OFFSET))(this, a1);
		}

		::System::Boolean get_WithNotice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO_GET_WITHNOTICE_OFFSET))(this);
		}

		::System::Void set_WithNotice(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO_SET_WITHNOTICE_OFFSET))(this, a1);
		}

		::RPG::GameCore::PhoneMessagePlayMode get_PlayMode()
		{
			return ((::RPG::GameCore::PhoneMessagePlayMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO_GET_PLAYMODE_OFFSET))(this);
		}

		::System::Void set_PlayMode(::RPG::GameCore::PhoneMessagePlayMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhoneMessagePlayMode))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO_SET_PLAYMODE_OFFSET))(this, a1);
		}

		::System::Boolean get_EnableUIDOF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO_GET_ENABLEUIDOF_OFFSET))(this);
		}

		::System::Void set_EnableUIDOF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONENOTICESHOWADAPTIVEINFO_SET_ENABLEUIDOF_OFFSET))(this, a1);
		}

	};
}
