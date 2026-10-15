#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HNFGANGGOCJ_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x15D92F20)
#define HNFGANGGOCJ_AODGNFHAPBL_OFFSET UNITYSDK_OFFSET(0x15D92FC0)
#define HNFGANGGOCJ_BGOMKDMBLKK_OFFSET UNITYSDK_OFFSET(0x15D92EE0)
#define HNFGANGGOCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15D92ED0)
#define HNFGANGGOCJ_KOJFPDHGLFB_OFFSET UNITYSDK_OFFSET(0x15D93020)
#define HNFGANGGOCJ_NPIIEBDOBAE_OFFSET UNITYSDK_OFFSET(0x15D930A0)
#define HNFGANGGOCJ_OFMLLDLAOCC_OFFSET UNITYSDK_OFFSET(0x15D93060)
#define HNFGANGGOCJ_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x15D92F70)

inline static constexpr unsigned int HNFGANGGOCJ_TypeDefinitionIndex = 64355;

	class HNFGANGGOCJ : public ::System::Object
	{
	public:
		::System::UInt32 FDDAHBBPDJN; // 0x10
		::System::Int32 KHNNFPPOMCL; // 0x14
		::System::Boolean HCBIBJGLKPM; // 0x18
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
