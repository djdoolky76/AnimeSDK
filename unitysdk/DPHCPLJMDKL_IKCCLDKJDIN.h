#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPHCPLJMDKL_FileLoadMode.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::IO::MemoryMappedFiles { class MemoryMappedFile; }
namespace System::IO::MemoryMappedFiles { class MemoryMappedViewAccessor; }

#define DPHCPLJMDKL_IKCCLDKJDIN_BFHCJEBDOBP_OFFSET UNITYSDK_OFFSET(0x1263D8C0)
#define DPHCPLJMDKL_IKCCLDKJDIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1263DF40)
#define DPHCPLJMDKL_IKCCLDKJDIN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1263DDF0)
#define DPHCPLJMDKL_IKCCLDKJDIN_GET_FILEPATH_OFFSET UNITYSDK_OFFSET(0x1263D8A0)
#define DPHCPLJMDKL_IKCCLDKJDIN_GET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x1263D8D0)
#define DPHCPLJMDKL_IKCCLDKJDIN_HKEPJLDBGIG_OFFSET UNITYSDK_OFFSET(0x1263D8F0)
#define DPHCPLJMDKL_IKCCLDKJDIN_HNDELHIOMBB_OFFSET UNITYSDK_OFFSET(0x1263DD70)
#define DPHCPLJMDKL_IKCCLDKJDIN_LGGBGBGJGIM_OFFSET UNITYSDK_OFFSET(0x1263DD20)
#define DPHCPLJMDKL_IKCCLDKJDIN_SET_FILEPATH_OFFSET UNITYSDK_OFFSET(0x1263D8B0)
#define DPHCPLJMDKL_IKCCLDKJDIN_SET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x1263D8E0)

	class DPHCPLJMDKL_IKCCLDKJDIN : public ::System::Object
	{
	public:
		::System::String* _FilePath_k__BackingField; // 0x10
		::System::IO::MemoryMappedFiles::MemoryMappedFile* LLMADDAGPNA; // 0x18
		::System::IO::MemoryMappedFiles::MemoryMappedViewAccessor* IOHKCOMMMGM; // 0x20
		::System::Boolean _IsDisposed_k__BackingField; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 MDMMGECODKL; // 0x2C
		::PVOID AIKJHNAMLFA; // 0x30
		// static const ::System::Object PCJHLMDGDKO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_IKCCLDKJDIN_CTOR_OFFSET))(this);
		}

		::System::String* get_FilePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_IKCCLDKJDIN_GET_FILEPATH_OFFSET))(this);
		}

		::System::Void set_FilePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_IKCCLDKJDIN_SET_FILEPATH_OFFSET))(this, a1);
		}

		::DPHCPLJMDKL_FileLoadMode BFHCJEBDOBP()
		{
			return ((::DPHCPLJMDKL_FileLoadMode(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_IKCCLDKJDIN_BFHCJEBDOBP_OFFSET))(this);
		}

		::System::Boolean get_IsDisposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_IKCCLDKJDIN_GET_ISDISPOSED_OFFSET))(this);
		}

		::System::Void set_IsDisposed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_IKCCLDKJDIN_SET_ISDISPOSED_OFFSET))(this, a1);
		}

		::System::Void HKEPJLDBGIG(::System::String* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_IKCCLDKJDIN_HKEPJLDBGIG_OFFSET))(this, a1, a2, a3);
		}

		::PVOID LGGBGBGJGIM()
		{
			return ((::PVOID(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_IKCCLDKJDIN_LGGBGBGJGIM_OFFSET))(this);
		}

		::System::UInt32 HNDELHIOMBB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_IKCCLDKJDIN_HNDELHIOMBB_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_IKCCLDKJDIN_DISPOSE_OFFSET))(this);
		}

	};
