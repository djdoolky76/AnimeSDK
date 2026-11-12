#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HEGMBHBNIHA_Operation.h"
#include "unitysdk/RPG/Client/PerformanceTools/CpuProfileModule.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DLEBPCGAJGJ.h"
#include "unitysdk/OOGCPOKADPN.h"
namespace System { class String; }

#define HEGMBHBNIHA_CKDECBHGMGC_OFFSET UNITYSDK_OFFSET(0x16B95550)
#define HEGMBHBNIHA_CONFIAMBBBC_OFFSET UNITYSDK_OFFSET(0x16B95240)
#define HEGMBHBNIHA_FKNECJAMGBB_OFFSET UNITYSDK_OFFSET(0x16B95110)
#define HEGMBHBNIHA_GFPAJCLILAO_OFFSET UNITYSDK_OFFSET(0x16B95790)
#define HEGMBHBNIHA_HBPFEFEMHAM_OFFSET UNITYSDK_OFFSET(0x16B95120)
#define HEGMBHBNIHA_NBGBENOHAEP_OFFSET UNITYSDK_OFFSET(0x16B95430)
#define HEGMBHBNIHA_NKJKGPECECK_OFFSET UNITYSDK_OFFSET(0x16B95880)
#define HEGMBHBNIHA_OAMGHMCMCBN_OFFSET UNITYSDK_OFFSET(0x16B95670)
#define HEGMBHBNIHA_OKGDEMFJKEF_OFFSET UNITYSDK_OFFSET(0x16B95310)

inline static constexpr unsigned int HEGMBHBNIHA_TypeDefinitionIndex = 76185;

	class HEGMBHBNIHA : public ::System::Object
	{
	public:
		static ::System::Boolean FKNECJAMGBB()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HEGMBHBNIHA_FKNECJAMGBB_OFFSET))();
		}

		static ::OOGCPOKADPN HBPFEFEMHAM(::RPG::Client::PerformanceTools::CpuProfileModule a1, ::System::Boolean a2)
		{
			return ((::OOGCPOKADPN(*)(::RPG::Client::PerformanceTools::CpuProfileModule, ::System::Boolean))((::PBYTE)hIl2Cpp + HEGMBHBNIHA_HBPFEFEMHAM_OFFSET))(a1, a2);
		}

		static ::OOGCPOKADPN OKGDEMFJKEF()
		{
			return ((::OOGCPOKADPN(*)())((::PBYTE)hIl2Cpp + HEGMBHBNIHA_OKGDEMFJKEF_OFFSET))();
		}

		static ::OOGCPOKADPN NBGBENOHAEP()
		{
			return ((::OOGCPOKADPN(*)())((::PBYTE)hIl2Cpp + HEGMBHBNIHA_NBGBENOHAEP_OFFSET))();
		}

		static ::OOGCPOKADPN CKDECBHGMGC()
		{
			return ((::OOGCPOKADPN(*)())((::PBYTE)hIl2Cpp + HEGMBHBNIHA_CKDECBHGMGC_OFFSET))();
		}

		static ::OOGCPOKADPN OAMGHMCMCBN()
		{
			return ((::OOGCPOKADPN(*)())((::PBYTE)hIl2Cpp + HEGMBHBNIHA_OAMGHMCMCBN_OFFSET))();
		}

		static ::OOGCPOKADPN CONFIAMBBBC(::HEGMBHBNIHA_Operation a1, ::RPG::Client::PerformanceTools::CpuProfileModule a2, ::System::Boolean a3)
		{
			return ((::OOGCPOKADPN(*)(::HEGMBHBNIHA_Operation, ::RPG::Client::PerformanceTools::CpuProfileModule, ::System::Boolean))((::PBYTE)hIl2Cpp + HEGMBHBNIHA_CONFIAMBBBC_OFFSET))(a1, a2, a3);
		}

		static ::DLEBPCGAJGJ GFPAJCLILAO()
		{
			return ((::DLEBPCGAJGJ(*)())((::PBYTE)hIl2Cpp + HEGMBHBNIHA_GFPAJCLILAO_OFFSET))();
		}

		static ::System::String* NKJKGPECECK()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + HEGMBHBNIHA_NKJKGPECECK_OFFSET))();
		}

	};
