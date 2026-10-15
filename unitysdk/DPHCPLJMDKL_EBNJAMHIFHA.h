#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPHCPLJMDKL_FileLoadMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
namespace System { class String; }

#define DPHCPLJMDKL_EBNJAMHIFHA_BFHCJEBDOBP_OFFSET UNITYSDK_OFFSET(0x120013C0)
#define DPHCPLJMDKL_EBNJAMHIFHA_CTOR_OFFSET UNITYSDK_OFFSET(0x11FFEC90)
#define DPHCPLJMDKL_EBNJAMHIFHA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12002010)
#define DPHCPLJMDKL_EBNJAMHIFHA_GET_FILEPATH_OFFSET UNITYSDK_OFFSET(0x120013A0)
#define DPHCPLJMDKL_EBNJAMHIFHA_GET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x120013D0)
#define DPHCPLJMDKL_EBNJAMHIFHA_HKEPJLDBGIG_OFFSET UNITYSDK_OFFSET(0x120013F0)
#define DPHCPLJMDKL_EBNJAMHIFHA_HNDELHIOMBB_OFFSET UNITYSDK_OFFSET(0x12001F70)
#define DPHCPLJMDKL_EBNJAMHIFHA_LGGBGBGJGIM_OFFSET UNITYSDK_OFFSET(0x12001F00)
#define DPHCPLJMDKL_EBNJAMHIFHA_SET_FILEPATH_OFFSET UNITYSDK_OFFSET(0x120013B0)
#define DPHCPLJMDKL_EBNJAMHIFHA_SET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x120013E0)

inline static constexpr unsigned int DPHCPLJMDKL_EBNJAMHIFHA_TypeDefinitionIndex = 60028;

	class DPHCPLJMDKL_EBNJAMHIFHA : public ::System::Object
	{
	public:
		::System::String* _FilePath_k__BackingField; // 0x10
		::System::Boolean _IsDisposed_k__BackingField; // 0x18
		::System::Byte _padding0[0x7];
		::Unity::Collections::NativeArray_1<::System::Byte> DPLBBPEDAME; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_EBNJAMHIFHA_CTOR_OFFSET))(this);
		}

		::System::String* get_FilePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_EBNJAMHIFHA_GET_FILEPATH_OFFSET))(this);
		}

		::System::Void set_FilePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_EBNJAMHIFHA_SET_FILEPATH_OFFSET))(this, a1);
		}

		::DPHCPLJMDKL_FileLoadMode BFHCJEBDOBP()
		{
			return ((::DPHCPLJMDKL_FileLoadMode(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_EBNJAMHIFHA_BFHCJEBDOBP_OFFSET))(this);
		}

		::System::Boolean get_IsDisposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_EBNJAMHIFHA_GET_ISDISPOSED_OFFSET))(this);
		}

		::System::Void set_IsDisposed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_EBNJAMHIFHA_SET_ISDISPOSED_OFFSET))(this, a1);
		}

		::System::Void HKEPJLDBGIG(::System::String* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_EBNJAMHIFHA_HKEPJLDBGIG_OFFSET))(this, a1, a2, a3);
		}

		::PVOID LGGBGBGJGIM()
		{
			return ((::PVOID(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_EBNJAMHIFHA_LGGBGBGJGIM_OFFSET))(this);
		}

		::System::UInt32 HNDELHIOMBB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_EBNJAMHIFHA_HNDELHIOMBB_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_EBNJAMHIFHA_DISPOSE_OFFSET))(this);
		}

	};
