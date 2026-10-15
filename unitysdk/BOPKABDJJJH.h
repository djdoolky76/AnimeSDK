#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::IO::MemoryMappedFiles { class MemoryMappedFile; }
namespace System::IO::MemoryMappedFiles { class MemoryMappedViewAccessor; }

#define BOPKABDJJJH_AFADJMFGCGN_OFFSET UNITYSDK_OFFSET(0x1EBC8850)
#define BOPKABDJJJH_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBC0910)
#define BOPKABDJJJH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EBC0680)
#define BOPKABDJJJH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1EBC8860)
#define BOPKABDJJJH_IHPDHGJDNNL_OFFSET UNITYSDK_OFFSET(0x1EBC0670)
#define BOPKABDJJJH_IMEGFBFODLO_OFFSET UNITYSDK_OFFSET(0x1EBC0D70)
#define BOPKABDJJJH_JGEMGIMGHDM_OFFSET UNITYSDK_OFFSET(0x1EBC10C0)
#define BOPKABDJJJH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1EBC0700)
#define BOPKABDJJJH_OJMNGBMFLPF_OFFSET UNITYSDK_OFFSET(0x1EBC0920)

inline static constexpr unsigned int BOPKABDJJJH_TypeDefinitionIndex = 35179;

	class BOPKABDJJJH : public ::System::Object
	{
	public:
		::System::String* CEKHDBPOJHO; // 0x10
		::System::IO::MemoryMappedFiles::MemoryMappedFile* CIAECCNJEMN; // 0x18
		::System::IO::MemoryMappedFiles::MemoryMappedViewAccessor* FHKALMCNJGO; // 0x20
		::System::String* PFIEAFJIJIP; // 0x28
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
