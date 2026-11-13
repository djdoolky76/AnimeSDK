#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIELGJIPJDM.h"
namespace RPG::Client { class UIStateCtrl; }

#define DPJPBNMHEAA_CTOR_OFFSET UNITYSDK_OFFSET(0x181AA0F0)
#define DPJPBNMHEAA_EEAOKNGHCOG_OFFSET UNITYSDK_OFFSET(0x181A9E30)
#define DPJPBNMHEAA__ONBIND_OFFSET UNITYSDK_OFFSET(0x181A9CF0)
#define DPJPBNMHEAA__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x181A9DB0)

inline static constexpr unsigned int DPJPBNMHEAA_TypeDefinitionIndex = 73752;

	class DPJPBNMHEAA : public ::DIELGJIPJDM
	{
	public:
		::RPG::Client::UIStateCtrl* GIMAEGBDOBL; // 0x150
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJPBNMHEAA_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJPBNMHEAA__ONBIND_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJPBNMHEAA__SETUPVIEW_OFFSET))(this);
		}

		::System::Void EEAOKNGHCOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJPBNMHEAA_EEAOKNGHCOG_OFFSET))(this);
		}

	};
