#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MultiVer.h"
#include "unitysdk/System/Attribute.h"

#define FOUNDATION_MULTIVERSIONINFO_ASSETPATHATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3A6810)

namespace Foundation
{
	inline static constexpr unsigned int MultiVersionInfo_AssetPathAttribute_TypeDefinitionIndex = 8292;

	class MultiVersionInfo_AssetPathAttribute : public ::System::Attribute
	{
	public:
		::Foundation::MultiVer MultiVerType; // 0x10

		::System::Void _ctor(::Foundation::MultiVer multiVerType)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::MultiVer))((::PBYTE)hIl2Cpp + FOUNDATION_MULTIVERSIONINFO_ASSETPATHATTRIBUTE__CTOR_OFFSET))(this, multiVerType);
		}
	};
}
