#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_GLOBALPADDINGDATA_IOABIBMDCDI_OFFSET UNITYSDK_OFFSET(0x1466D4F0)
#define MOLEMOLE_GLOBALPADDINGDATA_JFPJBMODONJ_OFFSET UNITYSDK_OFFSET(0x1466D640)
#define MOLEMOLE_GLOBALPADDINGDATA_JGBPMAAPOGP_OFFSET UNITYSDK_OFFSET(0x1466D590)
#define MOLEMOLE_GLOBALPADDINGDATA_JKMOJJDGJKF_OFFSET UNITYSDK_OFFSET(0x1466D6F0)
#define MOLEMOLE_GLOBALPADDINGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1466D4E0)

namespace MoleMole
{
	inline static constexpr unsigned int GlobalPaddingData_TypeDefinitionIndex = 72677;

	class GlobalPaddingData : public ::System::Object
	{
	public:
		::System::Int32 top; // 0x10
		::System::Int32 bottom; // 0x14
		::System::Int32 left; // 0x18
		::System::Int32 right; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GLOBALPADDINGDATA__CTOR_OFFSET))(this);
		}

		::System::Single IOABIBMDCDI(::System::Int32 NGIAEEBHCOC, ::System::Int32 EHEGJCCCJCA)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GLOBALPADDINGDATA_IOABIBMDCDI_OFFSET))(this, NGIAEEBHCOC, EHEGJCCCJCA);
		}

		::System::Single JGBPMAAPOGP(::System::Int32 NGIAEEBHCOC, ::System::Int32 EHEGJCCCJCA)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GLOBALPADDINGDATA_JGBPMAAPOGP_OFFSET))(this, NGIAEEBHCOC, EHEGJCCCJCA);
		}

		::System::Single JFPJBMODONJ(::System::Int32 NGIAEEBHCOC, ::System::Int32 EHEGJCCCJCA)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GLOBALPADDINGDATA_JFPJBMODONJ_OFFSET))(this, NGIAEEBHCOC, EHEGJCCCJCA);
		}

		::System::Single JKMOJJDGJKF(::System::Int32 NGIAEEBHCOC, ::System::Int32 EHEGJCCCJCA)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GLOBALPADDINGDATA_JKMOJJDGJKF_OFFSET))(this, NGIAEEBHCOC, EHEGJCCCJCA);
		}
	};
}
