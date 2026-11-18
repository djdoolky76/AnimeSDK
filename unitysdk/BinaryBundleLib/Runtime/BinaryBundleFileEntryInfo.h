#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BinaryBundleLib/Runtime/BinaryBundleFileInfo.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEENTRYINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x907750)
#define BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEENTRYINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x907740)
#define BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEENTRYINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x907730)
#define BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEENTRYINFO_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x907950)
#define BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEENTRYINFO_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x9078D0)
#define BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEENTRYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x42D9A0)

namespace BinaryBundleLib::Runtime
{
	inline static constexpr unsigned int BinaryBundleFileEntryInfo_TypeDefinitionIndex = 34084;

	struct alignas(4) BinaryBundleFileEntryInfo
	{
		::BinaryBundleLib::Runtime::BinaryBundleFileInfo bundleFileInfo; // 0x10
		::Foundation::AssetPath assetPath; // 0x28

		::System::Void _ctor(::BinaryBundleLib::Runtime::BinaryBundleFileInfo EPMFEPOEBDC, ::Foundation::AssetPath OIIHCACKLHD)
		{
			return ((::System::Void(*)(::PVOID, ::BinaryBundleLib::Runtime::BinaryBundleFileInfo, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEENTRYINFO__CTOR_OFFSET))(this, EPMFEPOEBDC, OIIHCACKLHD);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEENTRYINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* EIFONLCJOPG)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEENTRYINFO_EQUALS_OFFSET))(this, EIFONLCJOPG);
		}

		/*
		::System::Boolean Equals_1(::BinaryBundleLib::Runtime::BinaryBundleFileEntryInfo LIBPKNHDIGP)
		{
			return ((::System::Boolean(*)(::PVOID, ::BinaryBundleLib::Runtime::BinaryBundleFileEntryInfo))((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEENTRYINFO_EQUALS_1_OFFSET))(this, LIBPKNHDIGP);
		}
		*/

		::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEENTRYINFO_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Int32 HLPHPBAODIF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEENTRYINFO_HLPHPBAODIF_OFFSET))(this);
		}
	};
}
