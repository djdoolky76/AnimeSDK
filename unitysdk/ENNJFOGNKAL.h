#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"

#define ENNJFOGNKAL_CTOR_OFFSET UNITYSDK_OFFSET(0x155B4230)
#define ENNJFOGNKAL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x155B43F0)
#define ENNJFOGNKAL__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x155B42A0)
#define ENNJFOGNKAL__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x155B43A0)

	class ENNJFOGNKAL : public ::RPG::Client::UIController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENNJFOGNKAL_CTOR_OFFSET))(this);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENNJFOGNKAL__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _UnBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENNJFOGNKAL__UNBINDVIEW_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENNJFOGNKAL_KPJGDHLENIP_OFFSET))(this);
		}

	};
