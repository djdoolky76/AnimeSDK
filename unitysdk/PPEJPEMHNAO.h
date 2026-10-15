#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HJHMDGBLPMK;
class IIFHKNIBAFH;
class JNNPOLGAAHB;

#define PPEJPEMHNAO_CAALDEMCPPI_OFFSET UNITYSDK_OFFSET(0xC381350)
#define PPEJPEMHNAO_CTOR_OFFSET UNITYSDK_OFFSET(0xC3815D0)
#define PPEJPEMHNAO_DKJIOLNFBOP_OFFSET UNITYSDK_OFFSET(0xC380E30)
#define PPEJPEMHNAO_DPCJFBOODHE_OFFSET UNITYSDK_OFFSET(0xC381190)
#define PPEJPEMHNAO_FAEBJHJNAGJ_OFFSET UNITYSDK_OFFSET(0xC380D60)
#define PPEJPEMHNAO_GAHHOKHJDLO_OFFSET UNITYSDK_OFFSET(0xC3813C0)
#define PPEJPEMHNAO_GBNMEBIGGCD_OFFSET UNITYSDK_OFFSET(0xC3810D0)
#define PPEJPEMHNAO_GET_ACTIVITY_OFFSET UNITYSDK_OFFSET(0xC380D20)
#define PPEJPEMHNAO_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0xC380D40)
#define PPEJPEMHNAO_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xC381140)
#define PPEJPEMHNAO_LIEIKAKDLMF_OFFSET UNITYSDK_OFFSET(0xC381000)
#define PPEJPEMHNAO_NNEGENNMIAG_OFFSET UNITYSDK_OFFSET(0xC380DA0)
#define PPEJPEMHNAO_OPCNMCGAGPN_OFFSET UNITYSDK_OFFSET(0xC381550)
#define PPEJPEMHNAO_SET_ACTIVITY_OFFSET UNITYSDK_OFFSET(0xC380D30)
#define PPEJPEMHNAO_SET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0xC380D50)

	class PPEJPEMHNAO : public ::System::Object
	{
	public:
		::HJHMDGBLPMK* _Activity_k__BackingField; // 0x10
		::System::Boolean _IsInitialized_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPEJPEMHNAO_CTOR_OFFSET))(this);
		}

		::HJHMDGBLPMK* get_Activity()
		{
			return ((::HJHMDGBLPMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPEJPEMHNAO_GET_ACTIVITY_OFFSET))(this);
		}

		::System::Void set_Activity(::HJHMDGBLPMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJHMDGBLPMK*))((::PBYTE)hIl2Cpp + PPEJPEMHNAO_SET_ACTIVITY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PPEJPEMHNAO_GET_ISINITIALIZED_OFFSET))(this);
		}

		::System::Void set_IsInitialized(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PPEJPEMHNAO_SET_ISINITIALIZED_OFFSET))(this, a1);
		}

		::System::Boolean FAEBJHJNAGJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PPEJPEMHNAO_FAEBJHJNAGJ_OFFSET))(this);
		}

		::System::Boolean NNEGENNMIAG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PPEJPEMHNAO_NNEGENNMIAG_OFFSET))(this);
		}

		::System::Boolean DKJIOLNFBOP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PPEJPEMHNAO_DKJIOLNFBOP_OFFSET))(this);
		}

		::System::UInt32 GBNMEBIGGCD(::IIFHKNIBAFH* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::IIFHKNIBAFH*))((::PBYTE)hIl2Cpp + PPEJPEMHNAO_GBNMEBIGGCD_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPEJPEMHNAO_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void DPCJFBOODHE(::JNNPOLGAAHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JNNPOLGAAHB*))((::PBYTE)hIl2Cpp + PPEJPEMHNAO_DPCJFBOODHE_OFFSET))(this, a1);
		}

		::System::Void CAALDEMCPPI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PPEJPEMHNAO_CAALDEMCPPI_OFFSET))(this, a1);
		}

		::System::Void GAHHOKHJDLO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPEJPEMHNAO_GAHHOKHJDLO_OFFSET))(this);
		}

		::System::UInt32 LIEIKAKDLMF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPEJPEMHNAO_LIEIKAKDLMF_OFFSET))(this);
		}

		::System::Void OPCNMCGAGPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPEJPEMHNAO_OPCNMCGAGPN_OFFSET))(this);
		}

	};
