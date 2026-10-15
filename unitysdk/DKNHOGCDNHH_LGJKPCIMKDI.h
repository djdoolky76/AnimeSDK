#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define DKNHOGCDNHH_LGJKPCIMKDI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C42C730)
#define DKNHOGCDNHH_LGJKPCIMKDI_GET_ASSETSHORTPATHHASH_OFFSET UNITYSDK_OFFSET(0x1C430560)
#define DKNHOGCDNHH_LGJKPCIMKDI_GET_ASSETSHORTPATH_OFFSET UNITYSDK_OFFSET(0x1C430540)
#define DKNHOGCDNHH_LGJKPCIMKDI_GET_BUNDLEINDEX_OFFSET UNITYSDK_OFFSET(0x1C430580)
#define DKNHOGCDNHH_LGJKPCIMKDI_GET_CACHEDEEPSIZE_OFFSET UNITYSDK_OFFSET(0x1C4305A0)
#define DKNHOGCDNHH_LGJKPCIMKDI_SET_ASSETSHORTPATHHASH_OFFSET UNITYSDK_OFFSET(0x1C430570)
#define DKNHOGCDNHH_LGJKPCIMKDI_SET_ASSETSHORTPATH_OFFSET UNITYSDK_OFFSET(0x1C430550)
#define DKNHOGCDNHH_LGJKPCIMKDI_SET_BUNDLEINDEX_OFFSET UNITYSDK_OFFSET(0x1C430590)
#define DKNHOGCDNHH_LGJKPCIMKDI_SET_CACHEDEEPSIZE_OFFSET UNITYSDK_OFFSET(0x1C4305B0)
#define DKNHOGCDNHH_LGJKPCIMKDI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C4305C0)

inline static constexpr unsigned int DKNHOGCDNHH_LGJKPCIMKDI_TypeDefinitionIndex = 41445;

	class DKNHOGCDNHH_LGJKPCIMKDI : public ::System::Object
	{
	public:
		::System::String* _AssetShortPath_k__BackingField; // 0x10
		::System::Int64 _CacheDeepSize_k__BackingField; // 0x18
		::System::Int32 _BundleIndex_k__BackingField; // 0x20
		::System::Byte _padding0[0x4];
		::System::UInt64 _AssetShortPathHash_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNHOGCDNHH_LGJKPCIMKDI_CTOR_OFFSET))(this);
		}

		::System::String* get_AssetShortPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNHOGCDNHH_LGJKPCIMKDI_GET_ASSETSHORTPATH_OFFSET))(this);
		}

		::System::Void set_AssetShortPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DKNHOGCDNHH_LGJKPCIMKDI_SET_ASSETSHORTPATH_OFFSET))(this, a1);
		}

		::System::UInt64 get_AssetShortPathHash()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNHOGCDNHH_LGJKPCIMKDI_GET_ASSETSHORTPATHHASH_OFFSET))(this);
		}

		::System::Void set_AssetShortPathHash(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + DKNHOGCDNHH_LGJKPCIMKDI_SET_ASSETSHORTPATHHASH_OFFSET))(this, a1);
		}

		::System::Int32 get_BundleIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNHOGCDNHH_LGJKPCIMKDI_GET_BUNDLEINDEX_OFFSET))(this);
		}

		::System::Void set_BundleIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DKNHOGCDNHH_LGJKPCIMKDI_SET_BUNDLEINDEX_OFFSET))(this, a1);
		}

		::System::Int64 get_CacheDeepSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNHOGCDNHH_LGJKPCIMKDI_GET_CACHEDEEPSIZE_OFFSET))(this);
		}

		::System::Void set_CacheDeepSize(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + DKNHOGCDNHH_LGJKPCIMKDI_SET_CACHEDEEPSIZE_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNHOGCDNHH_LGJKPCIMKDI_TOSTRING_OFFSET))(this);
		}

	};
