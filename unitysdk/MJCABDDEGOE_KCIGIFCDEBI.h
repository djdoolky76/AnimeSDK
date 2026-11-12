#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNLKJLFCLOI;

#define MJCABDDEGOE_KCIGIFCDEBI_CTOR_OFFSET UNITYSDK_OFFSET(0xC21E210)
#define MJCABDDEGOE_KCIGIFCDEBI_GET_DRAWRATIO_OFFSET UNITYSDK_OFFSET(0xC21E370)
#define MJCABDDEGOE_KCIGIFCDEBI_GET_ROLLBACKRATIO_OFFSET UNITYSDK_OFFSET(0xC21E4B0)
#define MJCABDDEGOE_KCIGIFCDEBI_GET_STRAIGHTRATIO_OFFSET UNITYSDK_OFFSET(0xC21E410)
#define MJCABDDEGOE_KCIGIFCDEBI_GET_TURNRATIO_OFFSET UNITYSDK_OFFSET(0xC21E460)
#define MJCABDDEGOE_KCIGIFCDEBI_ODBFGCABKEJ_OFFSET UNITYSDK_OFFSET(0xC21A100)

inline static constexpr unsigned int MJCABDDEGOE_KCIGIFCDEBI_TypeDefinitionIndex = 63774;

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
