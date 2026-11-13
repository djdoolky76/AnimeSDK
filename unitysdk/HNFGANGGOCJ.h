#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HNFGANGGOCJ_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x1A3698F0)
#define HNFGANGGOCJ_AODGNFHAPBL_OFFSET UNITYSDK_OFFSET(0x1A369990)
#define HNFGANGGOCJ_BGOMKDMBLKK_OFFSET UNITYSDK_OFFSET(0x1A3698B0)
#define HNFGANGGOCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1A3698A0)
#define HNFGANGGOCJ_KOJFPDHGLFB_OFFSET UNITYSDK_OFFSET(0x1A3699F0)
#define HNFGANGGOCJ_NPIIEBDOBAE_OFFSET UNITYSDK_OFFSET(0x1A369A70)
#define HNFGANGGOCJ_OFMLLDLAOCC_OFFSET UNITYSDK_OFFSET(0x1A369A30)
#define HNFGANGGOCJ_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1A369940)

inline static constexpr unsigned int HNFGANGGOCJ_TypeDefinitionIndex = 65802;

	class HNFGANGGOCJ : public ::System::Object
	{
	public:
		::System::Int32 KHNNFPPOMCL; // 0x10
		::System::Boolean HCBIBJGLKPM; // 0x14
		::System::Byte _padding0[0x3];
		::System::UInt32 FDDAHBBPDJN; // 0x18
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HNFGANGGOCJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void BGOMKDMBLKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFGANGGOCJ_BGOMKDMBLKK_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFGANGGOCJ_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFGANGGOCJ_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Boolean AODGNFHAPBL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFGANGGOCJ_AODGNFHAPBL_OFFSET))(this);
		}

		::System::UInt32 KOJFPDHGLFB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFGANGGOCJ_KOJFPDHGLFB_OFFSET))(this);
		}

		::System::Void OFMLLDLAOCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFGANGGOCJ_OFMLLDLAOCC_OFFSET))(this);
		}

		::System::Void NPIIEBDOBAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFGANGGOCJ_NPIIEBDOBAE_OFFSET))(this);
		}

	};
