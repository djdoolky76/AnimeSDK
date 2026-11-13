#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightFinancing; }

#define OHKMAIEKGED_CADGOKPEGNG_OFFSET UNITYSDK_OFFSET(0x18E194C0)
#define OHKMAIEKGED_CTOR_OFFSET UNITYSDK_OFFSET(0x18E19200)
#define OHKMAIEKGED_DJKCKOEBPLF_OFFSET UNITYSDK_OFFSET(0x18E19210)
#define OHKMAIEKGED_MFDALPKHHMK_OFFSET UNITYSDK_OFFSET(0x18E196A0)
#define OHKMAIEKGED___GETSPECIALPARAMBYFINANCEMDF_B__3_0_OFFSET UNITYSDK_OFFSET(0x18E19A70)

inline static constexpr unsigned int OHKMAIEKGED_TypeDefinitionIndex = 66559;

	class OHKMAIEKGED : public ::System::Object
	{
	public:
		::System::UInt32 BNCPBBHOOKB; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OHKMAIEKGED_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 DJKCKOEBPLF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKMAIEKGED_DJKCKOEBPLF_OFFSET))(this);
		}

		::System::UInt32 CADGOKPEGNG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKMAIEKGED_CADGOKPEGNG_OFFSET))(this);
		}

		::System::UInt32 MFDALPKHHMK(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + OHKMAIEKGED_MFDALPKHHMK_OFFSET))(this, a1);
		}

		::System::Boolean __GetSpecialParamByFinanceMdf_b__3_0(::RPG::Client::GridFightFinancing* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightFinancing*))((::PBYTE)hIl2Cpp + OHKMAIEKGED___GETSPECIALPARAMBYFINANCEMDF_B__3_0_OFFSET))(this, a1);
		}

	};
