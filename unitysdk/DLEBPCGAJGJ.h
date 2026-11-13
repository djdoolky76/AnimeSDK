#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PerformanceTools/CpuProfileApiCode.h"
#include "unitysdk/RPG/Client/PerformanceTools/CpuProfileModule.h"
#include "unitysdk/RPG/Client/PerformanceTools/CpuProfileUploadState.h"
namespace System { class String; }

#define DLEBPCGAJGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x3E05860)

inline static constexpr unsigned int DLEBPCGAJGJ_TypeDefinitionIndex = 76183;

	struct alignas(8) DLEBPCGAJGJ
	{
		::RPG::Client::PerformanceTools::CpuProfileApiCode JNOIGIDLFOL; // 0x10
		::System::Boolean CMNCAKLDBII; // 0x14
		::System::Boolean KMGIHDHMBJB; // 0x15
		::System::Boolean GEOPPFCKACN; // 0x16
		::System::Byte _padding0[0x1];
		::RPG::Client::PerformanceTools::CpuProfileModule IILHBBNFBJE; // 0x18
		::RPG::Client::PerformanceTools::CpuProfileModule NGIMBEJMNJH; // 0x1C
		::RPG::Client::PerformanceTools::CpuProfileModule OKBBEKDNHHO; // 0x20
		::System::Byte _padding1[0x4];
		::System::Double HBJHIAEMJFO; // 0x28
		::System::Boolean EEMOIEAFKNB; // 0x30
		::System::Byte _padding2[0x3];
		::RPG::Client::PerformanceTools::CpuProfileUploadState CBMLEFNIGEK; // 0x34
		::System::Int32 FDMBBPANBEF; // 0x38
		::System::Byte _padding3[0x4];
		::System::String* NJACOJKKCJO; // 0x40
		::System::String* PIHOOOBOPOB; // 0x48
		::System::String* FOPMKBHPCFH; // 0x50
		::System::String* GDLCPEFKKNI; // 0x58
		::System::Boolean CDPFGPBNOOJ; // 0x60
		::System::Void _ctor(::RPG::Client::PerformanceTools::CpuProfileApiCode a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::RPG::Client::PerformanceTools::CpuProfileModule a5, ::RPG::Client::PerformanceTools::CpuProfileModule a6, ::RPG::Client::PerformanceTools::CpuProfileModule a7, ::System::Double a8, ::System::Boolean a9, ::RPG::Client::PerformanceTools::CpuProfileUploadState a10, ::System::Int32 a11, ::System::String* a12, ::System::String* a13, ::System::String* a14, ::System::String* a15, ::System::Boolean a16)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PerformanceTools::CpuProfileApiCode, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::RPG::Client::PerformanceTools::CpuProfileModule, ::RPG::Client::PerformanceTools::CpuProfileModule, ::RPG::Client::PerformanceTools::CpuProfileModule, ::System::Double, ::System::Boolean, ::RPG::Client::PerformanceTools::CpuProfileUploadState, ::System::Int32, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + DLEBPCGAJGJ_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
		}

	};
