#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HedgehogTeam/EasyTouch/EasyTouch_EvtType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace RPG::Client { class VirtualCursor; }

#define COLGNFDOLID_BBKLBENFGKE_OFFSET UNITYSDK_OFFSET(0xDCB4200)
#define COLGNFDOLID_BIEIJKONODM_OFFSET UNITYSDK_OFFSET(0xDCB42D0)
#define COLGNFDOLID_BPNKJFNAOJK_OFFSET UNITYSDK_OFFSET(0xDCB41B0)
#define COLGNFDOLID_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xDCB4E10)
#define COLGNFDOLID_CKJFPOEBOFB_OFFSET UNITYSDK_OFFSET(0xDCB4740)
#define COLGNFDOLID_CTOR_OFFSET UNITYSDK_OFFSET(0xDCB5990)
#define COLGNFDOLID_DAFHJFOBHPM_OFFSET UNITYSDK_OFFSET(0xDCB5240)
#define COLGNFDOLID_FJDDOBPHBIG_OFFSET UNITYSDK_OFFSET(0xDCB4280)
#define COLGNFDOLID_GBJNMPHLCDC_OFFSET UNITYSDK_OFFSET(0xDCB4C00)
#define COLGNFDOLID_GET_CURSORPOS_OFFSET UNITYSDK_OFFSET(0xDCB54F0)
#define COLGNFDOLID_GET_ISPRESSJOYSTICK_OFFSET UNITYSDK_OFFSET(0xDCB5520)
#define COLGNFDOLID_GET_JOYSTICKINPUT_OFFSET UNITYSDK_OFFSET(0xDCB5540)
#define COLGNFDOLID_GET_TOUCHINPUT_OFFSET UNITYSDK_OFFSET(0xDCB5570)
#define COLGNFDOLID_HPNHBGEOGPO_OFFSET UNITYSDK_OFFSET(0xDCB56D0)
#define COLGNFDOLID_IMCHBAFIHPM_OFFSET UNITYSDK_OFFSET(0xDCB4160)
#define COLGNFDOLID_JBLODEELKJA_OFFSET UNITYSDK_OFFSET(0xDCB4E60)
#define COLGNFDOLID_JFOKGOHMCAI_OFFSET UNITYSDK_OFFSET(0xDCB5940)
#define COLGNFDOLID_JIIPNMPFEHN_OFFSET UNITYSDK_OFFSET(0xDCB4820)
#define COLGNFDOLID_JOACGNDEHOE_OFFSET UNITYSDK_OFFSET(0xDCB58A0)
#define COLGNFDOLID_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xDCB47D0)
#define COLGNFDOLID_LDEHFHCHOOO_OFFSET UNITYSDK_OFFSET(0xDCB45D0)
#define COLGNFDOLID_MEFCOGEKMOF_OFFSET UNITYSDK_OFFSET(0xDCB55A0)
#define COLGNFDOLID_MEMDLMIGAHP_OFFSET UNITYSDK_OFFSET(0xDCB58F0)
#define COLGNFDOLID_MJJPLCLFKMH_OFFSET UNITYSDK_OFFSET(0xDCB5670)
#define COLGNFDOLID_MNJDEPNLFHA_OFFSET UNITYSDK_OFFSET(0xDCB5380)
#define COLGNFDOLID_SET_CURSORPOS_OFFSET UNITYSDK_OFFSET(0xDCB5510)
#define COLGNFDOLID_SET_ISPRESSJOYSTICK_OFFSET UNITYSDK_OFFSET(0xDCB5530)
#define COLGNFDOLID_SET_JOYSTICKINPUT_OFFSET UNITYSDK_OFFSET(0xDCB5560)
#define COLGNFDOLID_SET_TOUCHINPUT_OFFSET UNITYSDK_OFFSET(0xDCB5590)

inline static constexpr unsigned int COLGNFDOLID_TypeDefinitionIndex = 74117;

	class COLGNFDOLID : public ::System::Object
	{
	public:
		::System::Single KIDFELNBJHD; // 0x10
		::System::Int32 GHEJJFBOICD; // 0x14
		::UnityEngine::Vector3 _TouchInput_k__BackingField; // 0x18
		::System::Single ALHEDEDHKNE; // 0x24
		::UnityEngine::Vector3 _CursorPos_k__BackingField; // 0x28
		::UnityEngine::Vector3 _JoyStickInput_k__BackingField; // 0x34
		::System::Int32 JIBJKHCJFBJ; // 0x40
		::HedgehogTeam::EasyTouch::EasyTouch_EvtType IANMNDGHPML; // 0x44
		::System::Boolean _IsPressJoyStick_k__BackingField; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLGNFDOLID_CTOR_OFFSET))(this);
		}

		::System::Boolean IMCHBAFIHPM(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + COLGNFDOLID_IMCHBAFIHPM_OFFSET))(this, a1);
		}

		::System::Boolean BPNKJFNAOJK(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + COLGNFDOLID_BPNKJFNAOJK_OFFSET))(this, a1);
		}

		::System::Boolean BBKLBENFGKE(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + COLGNFDOLID_BBKLBENFGKE_OFFSET))(this, a1);
		}

		::System::Void FJDDOBPHBIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLGNFDOLID_FJDDOBPHBIG_OFFSET))(this);
		}

		::System::Boolean BIEIJKONODM(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COLGNFDOLID_BIEIJKONODM_OFFSET))(this, a1);
		}

		::System::Void LDEHFHCHOOO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + COLGNFDOLID_LDEHFHCHOOO_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLGNFDOLID_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLGNFDOLID_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void MNJDEPNLFHA(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COLGNFDOLID_MNJDEPNLFHA_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_CursorPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + COLGNFDOLID_GET_CURSORPOS_OFFSET))(this);
		}

		::System::Void set_CursorPos(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COLGNFDOLID_SET_CURSORPOS_OFFSET))(this, a1);
		}

		::RPG::Client::VirtualCursor* CKJFPOEBOFB()
		{
			return ((::RPG::Client::VirtualCursor*(*)(::PVOID))((::PBYTE)hIl2Cpp + COLGNFDOLID_CKJFPOEBOFB_OFFSET))(this);
		}

		::System::Boolean get_IsPressJoyStick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COLGNFDOLID_GET_ISPRESSJOYSTICK_OFFSET))(this);
		}

		::System::Void set_IsPressJoyStick(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + COLGNFDOLID_SET_ISPRESSJOYSTICK_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_JoyStickInput()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + COLGNFDOLID_GET_JOYSTICKINPUT_OFFSET))(this);
		}

		::System::Void set_JoyStickInput(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COLGNFDOLID_SET_JOYSTICKINPUT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_TouchInput()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + COLGNFDOLID_GET_TOUCHINPUT_OFFSET))(this);
		}

		::System::Void set_TouchInput(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COLGNFDOLID_SET_TOUCHINPUT_OFFSET))(this, a1);
		}

		::System::Void GBJNMPHLCDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLGNFDOLID_GBJNMPHLCDC_OFFSET))(this);
		}

		::System::Void DAFHJFOBHPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLGNFDOLID_DAFHJFOBHPM_OFFSET))(this);
		}

		::System::Void MEFCOGEKMOF(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + COLGNFDOLID_MEFCOGEKMOF_OFFSET))(this, a1, a2);
		}

		::System::Void MJJPLCLFKMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLGNFDOLID_MJJPLCLFKMH_OFFSET))(this);
		}

		::System::Void JIIPNMPFEHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLGNFDOLID_JIIPNMPFEHN_OFFSET))(this);
		}

		::System::Void JBLODEELKJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLGNFDOLID_JBLODEELKJA_OFFSET))(this);
		}

		::System::Void HPNHBGEOGPO(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + COLGNFDOLID_HPNHBGEOGPO_OFFSET))(this, a1);
		}

		::System::Void JOACGNDEHOE(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + COLGNFDOLID_JOACGNDEHOE_OFFSET))(this, a1);
		}

		::System::Void MEMDLMIGAHP(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + COLGNFDOLID_MEMDLMIGAHP_OFFSET))(this, a1);
		}

		::System::Void JFOKGOHMCAI(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + COLGNFDOLID_JFOKGOHMCAI_OFFSET))(this, a1);
		}

	};
