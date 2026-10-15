#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JENIFGNJEPE.h"
namespace System { class String; }

#define LIDLDEMMIKD_CTOR_OFFSET UNITYSDK_OFFSET(0xB6C82F0)
#define LIDLDEMMIKD_FIAFKJOKGIP_OFFSET UNITYSDK_OFFSET(0xB6C8030)
#define LIDLDEMMIKD_GET_ISADD_OFFSET UNITYSDK_OFFSET(0xB6C83D0)
#define LIDLDEMMIKD_GET_MODIFIERNAME_OFFSET UNITYSDK_OFFSET(0xB6C8390)
#define LIDLDEMMIKD_GET_MODIFIERTARGET_OFFSET UNITYSDK_OFFSET(0xB6C83B0)
#define LIDLDEMMIKD_SET_ISADD_OFFSET UNITYSDK_OFFSET(0xB6C83E0)
#define LIDLDEMMIKD_SET_MODIFIERNAME_OFFSET UNITYSDK_OFFSET(0xB6C83A0)
#define LIDLDEMMIKD_SET_MODIFIERTARGET_OFFSET UNITYSDK_OFFSET(0xB6C83C0)

	class LIDLDEMMIKD : public ::JENIFGNJEPE
	{
	public:
		::System::String* _ModifierName_k__BackingField; // 0x10
		::System::String* _ModifierTarget_k__BackingField; // 0x18
		::System::Boolean _IsAdd_k__BackingField; // 0x20
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LIDLDEMMIKD_CTOR_OFFSET))(this, a1);
		}

		static ::System::String* FIAFKJOKGIP(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + LIDLDEMMIKD_FIAFKJOKGIP_OFFSET))(a1, a2, a3);
		}

		::System::String* get_ModifierName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIDLDEMMIKD_GET_MODIFIERNAME_OFFSET))(this);
		}

		::System::Void set_ModifierName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LIDLDEMMIKD_SET_MODIFIERNAME_OFFSET))(this, a1);
		}

		::System::String* get_ModifierTarget()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIDLDEMMIKD_GET_MODIFIERTARGET_OFFSET))(this);
		}

		::System::Void set_ModifierTarget(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LIDLDEMMIKD_SET_MODIFIERTARGET_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAdd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LIDLDEMMIKD_GET_ISADD_OFFSET))(this);
		}

		::System::Void set_IsAdd(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LIDLDEMMIKD_SET_ISADD_OFFSET))(this, a1);
		}

	};
