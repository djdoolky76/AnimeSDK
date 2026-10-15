#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define POBGEFOCLJG_CTOR_OFFSET UNITYSDK_OFFSET(0xC357A50)
#define POBGEFOCLJG_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xC357A00)

	class POBGEFOCLJG : public ::System::Object
	{
	public:
		::System::Boolean GFMOLKAPGOK; // 0x10
		::System::Boolean KPFICILBNPH; // 0x11
		::System::Boolean LKIMABCIODP; // 0x12
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POBGEFOCLJG_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POBGEFOCLJG_KHGIKBFDLFB_OFFSET))(this);
		}

	};
