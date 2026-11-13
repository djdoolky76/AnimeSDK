#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class HEBPDEBLECH;
class OPCJCLBGKOK;

#define PCFGMEAFAFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1AACE6E0)
#define PCFGMEAFAFD_GET_CLAWBUTTON_OFFSET UNITYSDK_OFFSET(0x1AACE6C0)
#define PCFGMEAFAFD_GET_FIREBUTTON_OFFSET UNITYSDK_OFFSET(0x1AACE6A0)
#define PCFGMEAFAFD_SET_CLAWBUTTON_OFFSET UNITYSDK_OFFSET(0x1AACE6D0)
#define PCFGMEAFAFD_SET_FIREBUTTON_OFFSET UNITYSDK_OFFSET(0x1AACE6B0)
#define PCFGMEAFAFD__ONBIND_OFFSET UNITYSDK_OFFSET(0x1AACE250)

inline static constexpr unsigned int PCFGMEAFAFD_TypeDefinitionIndex = 73936;

	class PCFGMEAFAFD : public ::FMPCODLIOLG
	{
	public:
		::OPCJCLBGKOK* _FireButton_k__BackingField; // 0x60
		::HEBPDEBLECH* _ClawButton_k__BackingField; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCFGMEAFAFD_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCFGMEAFAFD__ONBIND_OFFSET))(this);
		}

		::OPCJCLBGKOK* get_FireButton()
		{
			return ((::OPCJCLBGKOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCFGMEAFAFD_GET_FIREBUTTON_OFFSET))(this);
		}

		::System::Void set_FireButton(::OPCJCLBGKOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OPCJCLBGKOK*))((::PBYTE)hIl2Cpp + PCFGMEAFAFD_SET_FIREBUTTON_OFFSET))(this, a1);
		}

		::HEBPDEBLECH* get_ClawButton()
		{
			return ((::HEBPDEBLECH*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCFGMEAFAFD_GET_CLAWBUTTON_OFFSET))(this);
		}

		::System::Void set_ClawButton(::HEBPDEBLECH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEBPDEBLECH*))((::PBYTE)hIl2Cpp + PCFGMEAFAFD_SET_CLAWBUTTON_OFFSET))(this, a1);
		}

	};
