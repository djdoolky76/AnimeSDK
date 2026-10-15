#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LPCANKBCPBD_LuaDataInvokeType.h"
#include "unitysdk/RPG/Client/BaseModule.h"
class LOKBAGIKJHB;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace XLua { class LuaFunction; }

#define LPCANKBCPBD_CTOR_OFFSET UNITYSDK_OFFSET(0xB8167D0)
#define LPCANKBCPBD_ENJFHPHJMMK_OFFSET UNITYSDK_OFFSET(0xB817520)
#define LPCANKBCPBD_EPGHHDPDFFE_OFFSET UNITYSDK_OFFSET(0xB818480)
#define LPCANKBCPBD_GET_ISLUARUNENABLE_OFFSET UNITYSDK_OFFSET(0xB8184C0)
#define LPCANKBCPBD_GLFAJANNNCF_OFFSET UNITYSDK_OFFSET(0xB8169E0)
#define LPCANKBCPBD_HNFDPFJOKKL_OFFSET UNITYSDK_OFFSET(0xB8181A0)
#define LPCANKBCPBD_INIT_OFFSET UNITYSDK_OFFSET(0xB816870)
#define LPCANKBCPBD_KDKFBMIINHP_OFFSET UNITYSDK_OFFSET(0xB818370)
#define LPCANKBCPBD_LKDBMKACOFE_OFFSET UNITYSDK_OFFSET(0xB816BB0)
#define LPCANKBCPBD_MHCMPMILKIH_OFFSET UNITYSDK_OFFSET(0xB816A60)
#define LPCANKBCPBD_OFCNAGOFOKB_OFFSET UNITYSDK_OFFSET(0xB818310)
#define LPCANKBCPBD_PAGNEKKCHML_OFFSET UNITYSDK_OFFSET(0xB8183B0)
#define LPCANKBCPBD_PHMEJCNENGB_OFFSET UNITYSDK_OFFSET(0xB817F80)
#define LPCANKBCPBD_SET_ISLUARUNENABLE_OFFSET UNITYSDK_OFFSET(0xB8184D0)
#define LPCANKBCPBD__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB8168C0)
#define LPCANKBCPBD__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB816900)

	class LPCANKBCPBD : public ::RPG::Client::BaseModule
	{
	public:
		::XLua::LuaFunction* AFDEHLAAFKB; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::XLua::LuaFunction*>* PNFIHKCPGPH; // 0x18
		::Il2CppArray<::System::Byte>* IBHJFFNMKKD; // 0x20
		::System::Single PBONMMFLBCP; // 0x28
		::System::Boolean _IsLuaRunEnable_k__BackingField; // 0x2C
		::System::Byte _padding0[0x3];
		::System::UInt32 EHEPCDFLBMH; // 0x30
		::System::UInt32 LLICGDGPMJL; // 0x34
		::System::Single OOCKPBFDCLK; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCANKBCPBD_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCANKBCPBD_INIT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCANKBCPBD__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCANKBCPBD__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void GLFAJANNNCF(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + LPCANKBCPBD_GLFAJANNNCF_OFFSET))(this, a1, a2);
		}

		::System::Void LKDBMKACOFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCANKBCPBD_LKDBMKACOFE_OFFSET))(this);
		}

		::System::Void MHCMPMILKIH(::LOKBAGIKJHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LOKBAGIKJHB*))((::PBYTE)hIl2Cpp + LPCANKBCPBD_MHCMPMILKIH_OFFSET))(this, a1);
		}

		::System::Void PHMEJCNENGB(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + LPCANKBCPBD_PHMEJCNENGB_OFFSET))(this, a1, a2);
		}

		::System::Void HNFDPFJOKKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCANKBCPBD_HNFDPFJOKKL_OFFSET))(this);
		}

		::System::Void OFCNAGOFOKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCANKBCPBD_OFCNAGOFOKB_OFFSET))(this);
		}

		::System::Void KDKFBMIINHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCANKBCPBD_KDKFBMIINHP_OFFSET))(this);
		}

		::System::Boolean ENJFHPHJMMK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCANKBCPBD_ENJFHPHJMMK_OFFSET))(this);
		}

		::System::Void PAGNEKKCHML(::LPCANKBCPBD_LuaDataInvokeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPCANKBCPBD_LuaDataInvokeType))((::PBYTE)hIl2Cpp + LPCANKBCPBD_PAGNEKKCHML_OFFSET))(this, a1);
		}

		::System::UInt32 EPGHHDPDFFE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCANKBCPBD_EPGHHDPDFFE_OFFSET))(this);
		}

		::System::Boolean get_IsLuaRunEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCANKBCPBD_GET_ISLUARUNENABLE_OFFSET))(this);
		}

		::System::Void set_IsLuaRunEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LPCANKBCPBD_SET_ISLUARUNENABLE_OFFSET))(this, a1);
		}

	};
