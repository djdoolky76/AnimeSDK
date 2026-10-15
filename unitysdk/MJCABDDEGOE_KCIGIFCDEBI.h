#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNLKJLFCLOI;

#define MJCABDDEGOE_KCIGIFCDEBI_CTOR_OFFSET UNITYSDK_OFFSET(0xB9622E0)
#define MJCABDDEGOE_KCIGIFCDEBI_GET_DRAWRATIO_OFFSET UNITYSDK_OFFSET(0xB962440)
#define MJCABDDEGOE_KCIGIFCDEBI_GET_ROLLBACKRATIO_OFFSET UNITYSDK_OFFSET(0xB962580)
#define MJCABDDEGOE_KCIGIFCDEBI_GET_STRAIGHTRATIO_OFFSET UNITYSDK_OFFSET(0xB9624E0)
#define MJCABDDEGOE_KCIGIFCDEBI_GET_TURNRATIO_OFFSET UNITYSDK_OFFSET(0xB962530)
#define MJCABDDEGOE_KCIGIFCDEBI_ODBFGCABKEJ_OFFSET UNITYSDK_OFFSET(0xB95E1E0)

inline static constexpr unsigned int MJCABDDEGOE_KCIGIFCDEBI_TypeDefinitionIndex = 62361;

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
