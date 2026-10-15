#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EIFBMCGPNMG;
class FFKHFDJFAGM;
class HGNAHHFBMMN;
class IMAGFGIHLJC;
class LMKBLDKPGFB;
namespace RPG::Client::PixAir { class PixAirGameProgressNodeViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JIAPCHALLMF_ALJIOCDBMKO_OFFSET UNITYSDK_OFFSET(0xB1EBE50)
#define JIAPCHALLMF_CAAKLAPKOJO_OFFSET UNITYSDK_OFFSET(0xB1EBFE0)
#define JIAPCHALLMF_CKAMDKPBGDA_OFFSET UNITYSDK_OFFSET(0xB1EC1C0)
#define JIAPCHALLMF_CTOR_OFFSET UNITYSDK_OFFSET(0xB1EC8F0)
#define JIAPCHALLMF_JCFEOLCNCAF_OFFSET UNITYSDK_OFFSET(0xB1EC110)
#define JIAPCHALLMF_JCPKBCHOEGJ_OFFSET UNITYSDK_OFFSET(0xB1EC640)
#define JIAPCHALLMF_OPBJDFIMEJN_OFFSET UNITYSDK_OFFSET(0xB1EC8B0)
#define JIAPCHALLMF_POINBCPKLLB_OFFSET UNITYSDK_OFFSET(0xB1EC080)
#define JIAPCHALLMF_START_OFFSET UNITYSDK_OFFSET(0xB1EBD90)
#define JIAPCHALLMF_STOP_OFFSET UNITYSDK_OFFSET(0xB1EBDD0)

	class JIAPCHALLMF : public ::System::Object
	{
	public:
		::LMKBLDKPGFB* LHFKNEFGKEM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAPCHALLMF_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAPCHALLMF_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAPCHALLMF_STOP_OFFSET))(this);
		}

		::System::Void ALJIOCDBMKO(::HGNAHHFBMMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGNAHHFBMMN*))((::PBYTE)hIl2Cpp + JIAPCHALLMF_ALJIOCDBMKO_OFFSET))(this, a1);
		}

		::System::Void CAAKLAPKOJO(::FFKHFDJFAGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FFKHFDJFAGM*))((::PBYTE)hIl2Cpp + JIAPCHALLMF_CAAKLAPKOJO_OFFSET))(this, a1);
		}

		::System::Void POINBCPKLLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JIAPCHALLMF_POINBCPKLLB_OFFSET))(this, a1);
		}

		::System::Void JCFEOLCNCAF(::IMAGFGIHLJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IMAGFGIHLJC*))((::PBYTE)hIl2Cpp + JIAPCHALLMF_JCFEOLCNCAF_OFFSET))(this, a1);
		}

		::System::Void CKAMDKPBGDA(::EIFBMCGPNMG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EIFBMCGPNMG*))((::PBYTE)hIl2Cpp + JIAPCHALLMF_CKAMDKPBGDA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirGameProgressNodeViewModel*>* JCPKBCHOEGJ(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirGameProgressNodeViewModel*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JIAPCHALLMF_JCPKBCHOEGJ_OFFSET))(this, a1);
		}

		::LMKBLDKPGFB* OPBJDFIMEJN()
		{
			return ((::LMKBLDKPGFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAPCHALLMF_OPBJDFIMEJN_OFFSET))(this);
		}

	};
