#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PerformanceTools/CpuProfileApiCode.h"
#include "unitysdk/RPG/Client/PerformanceTools/CpuProfileModule.h"
namespace System { class String; }

#define OOGCPOKADPN_CTOR_OFFSET UNITYSDK_OFFSET(0x3E39FD0)

inline static constexpr unsigned int OOGCPOKADPN_TypeDefinitionIndex = 76182;

	struct alignas(8) OOGCPOKADPN
	{
		::RPG::Client::PerformanceTools::CpuProfileApiCode JNOIGIDLFOL; // 0x10
		::RPG::Client::PerformanceTools::CpuProfileModule JBNBLJMFNDJ; // 0x14
		::RPG::Client::PerformanceTools::CpuProfileModule MGEMCNNAHPI; // 0x18
		::RPG::Client::PerformanceTools::CpuProfileModule KGBDEKNNNHP; // 0x1C
		::RPG::Client::PerformanceTools::CpuProfileModule JJIGDHECCDF; // 0x20
		::RPG::Client::PerformanceTools::CpuProfileModule IKCOHBNJOJA; // 0x24
		::System::String* CAJPAGKBBML; // 0x28
		::System::Void _ctor(::RPG::Client::PerformanceTools::CpuProfileApiCode a1, ::RPG::Client::PerformanceTools::CpuProfileModule a2, ::RPG::Client::PerformanceTools::CpuProfileModule a3, ::RPG::Client::PerformanceTools::CpuProfileModule a4, ::RPG::Client::PerformanceTools::CpuProfileModule a5, ::RPG::Client::PerformanceTools::CpuProfileModule a6, ::System::String* a7)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PerformanceTools::CpuProfileApiCode, ::RPG::Client::PerformanceTools::CpuProfileModule, ::RPG::Client::PerformanceTools::CpuProfileModule, ::RPG::Client::PerformanceTools::CpuProfileModule, ::RPG::Client::PerformanceTools::CpuProfileModule, ::RPG::Client::PerformanceTools::CpuProfileModule, ::System::String*))((::PBYTE)hIl2Cpp + OOGCPOKADPN_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

	};
