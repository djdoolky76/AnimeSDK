#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JMHHBMNIJJB;

#define CAPBFPJCOFI_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xCE02C00)
#define CAPBFPJCOFI_CTOR_OFFSET UNITYSDK_OFFSET(0xCE02650)
#define CAPBFPJCOFI_GGCGPDALAHJ_OFFSET UNITYSDK_OFFSET(0xCE02780)
#define CAPBFPJCOFI_KCFLNGHMPLN_OFFSET UNITYSDK_OFFSET(0xCE02A20)
#define CAPBFPJCOFI_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0xCE029E0)
#define CAPBFPJCOFI_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xCE02660)

inline static constexpr unsigned int CAPBFPJCOFI_TypeDefinitionIndex = 79960;

	class CAPBFPJCOFI : public ::System::Object
	{
	public:
		::JMHHBMNIJJB* EEFMDEHLLFI; // 0x10
		::System::Void _ctor(::JMHHBMNIJJB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMHHBMNIJJB*))((::PBYTE)hIl2Cpp + CAPBFPJCOFI_CTOR_OFFSET))(this, a1);
		}

		::System::Void OINBDMGFFJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAPBFPJCOFI_OINBDMGFFJL_OFFSET))(this);
		}

		::System::Boolean GGCGPDALAHJ(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CAPBFPJCOFI_GGCGPDALAHJ_OFFSET))(this, a1);
		}

		::System::Void KCFLNGHMPLN(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CAPBFPJCOFI_KCFLNGHMPLN_OFFSET))(this, a1);
		}

		::System::Void ABKBOGIGAEH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CAPBFPJCOFI_ABKBOGIGAEH_OFFSET))(this, a1);
		}

		static ::System::Boolean KKKIONIDKFA(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CAPBFPJCOFI_KKKIONIDKFA_OFFSET))(a1);
		}

	};
