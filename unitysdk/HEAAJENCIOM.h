#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HEAAJENCIOM_ABKKJIBEBHA_OFFSET UNITYSDK_OFFSET(0x1CABDDB0)
#define HEAAJENCIOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CABDDA0)
#define HEAAJENCIOM_HGFBNBIDADP_OFFSET UNITYSDK_OFFSET(0x1CABDF30)
#define HEAAJENCIOM_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1CABDE30)
#define HEAAJENCIOM_LCKCABJFHEA_OFFSET UNITYSDK_OFFSET(0x1CABDDF0)
#define HEAAJENCIOM_PBAEKCNJOJF_OFFSET UNITYSDK_OFFSET(0x1CABDE90)

inline static constexpr unsigned int HEAAJENCIOM_TypeDefinitionIndex = 43010;

	class HEAAJENCIOM : public ::System::Object
	{
	public:
		::System::UInt32 DLNIGFGLPLJ; // 0x10
		::System::UInt32 MIJFCOJHHIL; // 0x14
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HEAAJENCIOM_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 ABKKJIBEBHA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAAJENCIOM_ABKKJIBEBHA_OFFSET))(this);
		}

		::System::UInt32 LCKCABJFHEA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAAJENCIOM_LCKCABJFHEA_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + HEAAJENCIOM_KHGIKBFDLFB_OFFSET))(this, a1, a2);
		}

		::System::UInt32 PBAEKCNJOJF(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HEAAJENCIOM_PBAEKCNJOJF_OFFSET))(this, a1);
		}

		::System::UInt32 HGFBNBIDADP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAAJENCIOM_HGFBNBIDADP_OFFSET))(this);
		}

	};
