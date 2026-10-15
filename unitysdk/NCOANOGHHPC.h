#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NCOANOGHHPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1F6970)
#define NCOANOGHHPC_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0x1D1F6960)

	class NCOANOGHHPC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCOANOGHHPC_CTOR_OFFSET))(this);
		}

		::System::Void OINBDMGFFJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCOANOGHHPC_OINBDMGFFJL_OFFSET))(this);
		}

	};
