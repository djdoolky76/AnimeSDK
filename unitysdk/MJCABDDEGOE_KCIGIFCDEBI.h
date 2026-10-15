#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNLKJLFCLOI;

#define MJCABDDEGOE_KCIGIFCDEBI_CTOR_OFFSET UNITYSDK_OFFSET(0xB968380)
#define MJCABDDEGOE_KCIGIFCDEBI_GET_DRAWRATIO_OFFSET UNITYSDK_OFFSET(0xB9684E0)
#define MJCABDDEGOE_KCIGIFCDEBI_GET_ROLLBACKRATIO_OFFSET UNITYSDK_OFFSET(0xB968620)
#define MJCABDDEGOE_KCIGIFCDEBI_GET_STRAIGHTRATIO_OFFSET UNITYSDK_OFFSET(0xB968580)
#define MJCABDDEGOE_KCIGIFCDEBI_GET_TURNRATIO_OFFSET UNITYSDK_OFFSET(0xB9685D0)
#define MJCABDDEGOE_KCIGIFCDEBI_ODBFGCABKEJ_OFFSET UNITYSDK_OFFSET(0xB964280)

	class MJCABDDEGOE_KCIGIFCDEBI : public ::System::Object
	{
	public:
		::BNLKJLFCLOI* PLBDJHIFGOI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCABDDEGOE_KCIGIFCDEBI_CTOR_OFFSET))(this);
		}

		::System::Single get_DrawRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCABDDEGOE_KCIGIFCDEBI_GET_DRAWRATIO_OFFSET))(this);
		}

		::System::Single get_StraightRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCABDDEGOE_KCIGIFCDEBI_GET_STRAIGHTRATIO_OFFSET))(this);
		}

		::System::Single get_TurnRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCABDDEGOE_KCIGIFCDEBI_GET_TURNRATIO_OFFSET))(this);
		}

		::System::Single get_RollbackRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCABDDEGOE_KCIGIFCDEBI_GET_ROLLBACKRATIO_OFFSET))(this);
		}

		::System::Void ODBFGCABKEJ(::BNLKJLFCLOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNLKJLFCLOI*))((::PBYTE)hIl2Cpp + MJCABDDEGOE_KCIGIFCDEBI_ODBFGCABKEJ_OFFSET))(this, a1);
		}

	};
