#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PHLHNGJGOHK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9BB270)

inline static constexpr unsigned int PHLHNGJGOHK_TypeDefinitionIndex = 41933;

	class PHLHNGJGOHK : public ::System::Object
	{
	public:
		::System::Int32 OMGGBIEPJJE; // 0x10
		::System::Int32 OPNPNOPKKNF; // 0x14
		::System::Int32 GFBNEGMKDPB; // 0x18
		::System::Int32 POJIJMMGAFB; // 0x1C
		::System::Int32 DFICEGNKJIA; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHLHNGJGOHK_CTOR_OFFSET))(this);
		}

	};
