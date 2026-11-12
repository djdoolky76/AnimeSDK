#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OBDPFOOAKBC_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xC63C460)
#define OBDPFOOAKBC_AODGNFHAPBL_OFFSET UNITYSDK_OFFSET(0xC63C4F0)
#define OBDPFOOAKBC_BGOMKDMBLKK_OFFSET UNITYSDK_OFFSET(0xC63C420)
#define OBDPFOOAKBC_CTOR_OFFSET UNITYSDK_OFFSET(0xC63C410)
#define OBDPFOOAKBC_KOJFPDHGLFB_OFFSET UNITYSDK_OFFSET(0xC63C550)
#define OBDPFOOAKBC_NPIIEBDOBAE_OFFSET UNITYSDK_OFFSET(0xC63C5D0)
#define OBDPFOOAKBC_OFMLLDLAOCC_OFFSET UNITYSDK_OFFSET(0xC63C590)
#define OBDPFOOAKBC_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xC63C4A0)

inline static constexpr unsigned int OBDPFOOAKBC_TypeDefinitionIndex = 65807;

	class OBDPFOOAKBC : public ::System::Object
	{
	public:
		::System::Boolean HCBIBJGLKPM; // 0x10
		::System::Boolean POBCBCKMGCE; // 0x11
		::System::Byte _padding0[0x2];
		::System::UInt32 FDDAHBBPDJN; // 0x14
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
