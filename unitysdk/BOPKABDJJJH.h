#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::IO::MemoryMappedFiles { class MemoryMappedFile; }
namespace System::IO::MemoryMappedFiles { class MemoryMappedViewAccessor; }

#define BOPKABDJJJH_AFADJMFGCGN_OFFSET UNITYSDK_OFFSET(0x1CAD4B60)
#define BOPKABDJJJH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CACCBE0)
#define BOPKABDJJJH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CACC950)
#define BOPKABDJJJH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1CAD4B70)
#define BOPKABDJJJH_IHPDHGJDNNL_OFFSET UNITYSDK_OFFSET(0x1CACC940)
#define BOPKABDJJJH_IMEGFBFODLO_OFFSET UNITYSDK_OFFSET(0x1CACD040)
#define BOPKABDJJJH_JGEMGIMGHDM_OFFSET UNITYSDK_OFFSET(0x1CACD390)
#define BOPKABDJJJH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1CACC9D0)
#define BOPKABDJJJH_OJMNGBMFLPF_OFFSET UNITYSDK_OFFSET(0x1CACCBF0)

inline static constexpr unsigned int BOPKABDJJJH_TypeDefinitionIndex = 36107;

	class BOPKABDJJJH : public ::System::Object
	{
	public:
		::System::IO::MemoryMappedFiles::MemoryMappedViewAccessor* FHKALMCNJGO; // 0x10
		::System::String* CEKHDBPOJHO; // 0x18
		::System::String* PFIEAFJIJIP; // 0x20
		::System::IO::MemoryMappedFiles::MemoryMappedFile* CIAECCNJEMN; // 0x28
		::System::UInt16 IAGAMAOEKGJ; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPKABDJJJH_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::String* a1, ::System::String* a2, ::System::Int64 a3, ::System::Int64 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + BOPKABDJJJH_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPKABDJJJH_DISPOSE_OFFSET))(this);
		}

		::System::IO::MemoryMappedFiles::MemoryMappedViewAccessor* IMEGFBFODLO()
		{
			return ((::System::IO::MemoryMappedFiles::MemoryMappedViewAccessor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPKABDJJJH_IMEGFBFODLO_OFFSET))(this);
		}

		::System::Void OJMNGBMFLPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPKABDJJJH_OJMNGBMFLPF_OFFSET))(this);
		}

		::System::Void JGEMGIMGHDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPKABDJJJH_JGEMGIMGHDM_OFFSET))(this);
		}

		::System::Boolean IHPDHGJDNNL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPKABDJJJH_IHPDHGJDNNL_OFFSET))(this);
		}

		::System::String* AFADJMFGCGN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPKABDJJJH_AFADJMFGCGN_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPKABDJJJH_FINALIZE_OFFSET))(this);
		}

	};
