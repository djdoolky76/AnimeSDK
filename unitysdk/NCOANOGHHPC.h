#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NCOANOGHHPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1C8CA0)
#define NCOANOGHHPC_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0x1D1C8C90)

inline static constexpr unsigned int NCOANOGHHPC_TypeDefinitionIndex = 25003;

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
