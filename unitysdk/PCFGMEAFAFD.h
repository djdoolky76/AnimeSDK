#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class HEBPDEBLECH;
class OPCJCLBGKOK;

#define PCFGMEAFAFD_CTOR_OFFSET UNITYSDK_OFFSET(0xBFFF5E0)
#define PCFGMEAFAFD_GET_CLAWBUTTON_OFFSET UNITYSDK_OFFSET(0xBFFF5C0)
#define PCFGMEAFAFD_GET_FIREBUTTON_OFFSET UNITYSDK_OFFSET(0xBFFF5A0)
#define PCFGMEAFAFD_SET_CLAWBUTTON_OFFSET UNITYSDK_OFFSET(0xBFFF5D0)
#define PCFGMEAFAFD_SET_FIREBUTTON_OFFSET UNITYSDK_OFFSET(0xBFFF5B0)
#define PCFGMEAFAFD__ONBIND_OFFSET UNITYSDK_OFFSET(0xBFFF150)

inline static constexpr unsigned int PCFGMEAFAFD_TypeDefinitionIndex = 71916;

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
