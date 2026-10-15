#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OBDPFOOAKBC_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xBD316A0)
#define OBDPFOOAKBC_AODGNFHAPBL_OFFSET UNITYSDK_OFFSET(0xBD31730)
#define OBDPFOOAKBC_BGOMKDMBLKK_OFFSET UNITYSDK_OFFSET(0xBD31660)
#define OBDPFOOAKBC_CTOR_OFFSET UNITYSDK_OFFSET(0xBD31650)
#define OBDPFOOAKBC_KOJFPDHGLFB_OFFSET UNITYSDK_OFFSET(0xBD31790)
#define OBDPFOOAKBC_NPIIEBDOBAE_OFFSET UNITYSDK_OFFSET(0xBD31810)
#define OBDPFOOAKBC_OFMLLDLAOCC_OFFSET UNITYSDK_OFFSET(0xBD317D0)
#define OBDPFOOAKBC_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xBD316E0)

inline static constexpr unsigned int OBDPFOOAKBC_TypeDefinitionIndex = 64360;

	class OBDPFOOAKBC : public ::System::Object
	{
	public:
		::System::UInt32 FDDAHBBPDJN; // 0x10
		::System::Boolean POBCBCKMGCE; // 0x14
		::System::Boolean HCBIBJGLKPM; // 0x15
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OBDPFOOAKBC_CTOR_OFFSET))(this, a1);
		}

		::System::Void BGOMKDMBLKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBDPFOOAKBC_BGOMKDMBLKK_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBDPFOOAKBC_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBDPFOOAKBC_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Boolean AODGNFHAPBL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBDPFOOAKBC_AODGNFHAPBL_OFFSET))(this);
		}

		::System::UInt32 KOJFPDHGLFB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBDPFOOAKBC_KOJFPDHGLFB_OFFSET))(this);
		}

		::System::Void OFMLLDLAOCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBDPFOOAKBC_OFMLLDLAOCC_OFFSET))(this);
		}

		::System::Void NPIIEBDOBAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBDPFOOAKBC_NPIIEBDOBAE_OFFSET))(this);
		}

	};
