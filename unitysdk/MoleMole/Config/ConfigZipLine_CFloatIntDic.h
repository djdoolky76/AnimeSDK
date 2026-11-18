#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

#define MOLEMOLE_CONFIG_CONFIGZIPLINE_CFLOATINTDIC_FINDBYRANGE_OFFSET UNITYSDK_OFFSET(0x190ACFF0)
#define MOLEMOLE_CONFIG_CONFIGZIPLINE_CFLOATINTDIC__CTOR_OFFSET UNITYSDK_OFFSET(0x190AD410)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_CFloatIntDic_TypeDefinitionIndex = 54261;

	class ConfigZipLine_CFloatIntDic
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE_CFLOATINTDIC__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::KeyValuePair_2<::System::Single, ::System::Int32> FindByRange(::System::Single key)
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::Single, ::System::Int32>(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE_CFLOATINTDIC_FINDBYRANGE_OFFSET))(this, key);
		}
	};
}
