#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x907C00)
#define BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x907B20)
#define BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x907A70)
#define BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEINFO_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x907CC0)
#define BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEINFO_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x1E5E0F90)
#define BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEINFO_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x907D30)
#define BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9079C0)

namespace BinaryBundleLib::Runtime
{
	inline static constexpr unsigned int BinaryBundleFileInfo_TypeDefinitionIndex = 34111;

	struct alignas(8) BinaryBundleFileInfo
	{
		::System::String* path; // 0x10
		::System::Int64 offset; // 0x18
		::System::UInt64 _pathHash; // 0x20

		::System::Void _ctor(::System::String* CJBJONJDOLI, ::System::Int64 BOGPAHGJOJK)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEINFO__CTOR_OFFSET))(this, CJBJONJDOLI, BOGPAHGJOJK);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* EIFONLCJOPG)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEINFO_EQUALS_OFFSET))(this, EIFONLCJOPG);
		}

		/*
		::System::Boolean Equals_1(::BinaryBundleLib::Runtime::BinaryBundleFileInfo LIBPKNHDIGP)
		{
			return ((::System::Boolean(*)(::PVOID, ::BinaryBundleLib::Runtime::BinaryBundleFileInfo))((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEINFO_EQUALS_1_OFFSET))(this, LIBPKNHDIGP);
		}
		*/

		/*
		static ::System::Boolean INCFIJKMIGG(::BinaryBundleLib::Runtime::BinaryBundleFileInfo KILPCOMOCMD, ::BinaryBundleLib::Runtime::BinaryBundleFileInfo BBCODANAFGI)
		{
			return ((::System::Boolean(*)(::BinaryBundleLib::Runtime::BinaryBundleFileInfo, ::BinaryBundleLib::Runtime::BinaryBundleFileInfo))((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEINFO_INCFIJKMIGG_OFFSET))(KILPCOMOCMD, BBCODANAFGI);
		}
		*/

		::System::Int32 HLPHPBAODIF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEINFO_HLPHPBAODIF_OFFSET))(this);
		}

		::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_BINARYBUNDLEFILEINFO_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
