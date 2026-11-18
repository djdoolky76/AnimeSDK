#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

#define MOLEMOLE_CONFIG_CONFIGZIPLINE_CINTFLOATDIC_FINDBYRANGE_OFFSET UNITYSDK_OFFSET(0xFACB680)
#define MOLEMOLE_CONFIG_CONFIGZIPLINE_CINTFLOATDIC__CTOR_OFFSET UNITYSDK_OFFSET(0xFACBA40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_CIntFloatDic_TypeDefinitionIndex = 54266;

	class ConfigZipLine_CIntFloatDic
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE_CINTFLOATDIC__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single> FindByRange(::System::Single key)
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single>(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE_CINTFLOATDIC_FINDBYRANGE_OFFSET))(this, key);
		}
	};
}
