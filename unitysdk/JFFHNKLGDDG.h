#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLHELOMEIJB;
class JFFHNKLGDDG;
class KBLELMJDBEA;
class MFKLCJHKNBK;

#define JFFHNKLGDDG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1932C7D0)
#define JFFHNKLGDDG_CTOR_OFFSET UNITYSDK_OFFSET(0x1932C860)
#define JFFHNKLGDDG_DPJCPJCGBJL_OFFSET UNITYSDK_OFFSET(0x1932D5F0)
#define JFFHNKLGDDG_EKFBHPGKJIG_OFFSET UNITYSDK_OFFSET(0x1932C8C0)
#define JFFHNKLGDDG_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1932C870)
#define JFFHNKLGDDG_HDADKOAAJPI_OFFSET UNITYSDK_OFFSET(0x1932D510)
#define JFFHNKLGDDG_HPNKDJDJMLN_OFFSET UNITYSDK_OFFSET(0x1932D470)
#define JFFHNKLGDDG_ILFKKFEJIFN_OFFSET UNITYSDK_OFFSET(0x1932D570)
#define JFFHNKLGDDG_JJIGMLJBKFD_OFFSET UNITYSDK_OFFSET(0x1932D770)
#define JFFHNKLGDDG_JNIHLEFPIEG_OFFSET UNITYSDK_OFFSET(0x1932D640)
#define JFFHNKLGDDG_MACOKGJNJOC_OFFSET UNITYSDK_OFFSET(0x1932D910)

inline static constexpr unsigned int JFFHNKLGDDG_TypeDefinitionIndex = 78085;

	class JFFHNKLGDDG : public ::System::Object
	{
	public:
		::KBLELMJDBEA* PDENFEFCAGN; // 0x10
		::MFKLCJHKNBK* FKINCGODJEP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFHNKLGDDG_CTOR_OFFSET))(this);
		}

		static ::JFFHNKLGDDG* BPLPBPMEODA(::MFKLCJHKNBK* a1, ::KBLELMJDBEA* a2)
		{
			return ((::JFFHNKLGDDG*(*)(::MFKLCJHKNBK*, ::KBLELMJDBEA*))((::PBYTE)hIl2Cpp + JFFHNKLGDDG_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFHNKLGDDG_EXECUTE_OFFSET))(this);
		}

		::System::Void EKFBHPGKJIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFHNKLGDDG_EKFBHPGKJIG_OFFSET))(this);
		}

		::System::Void DPJCPJCGBJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFHNKLGDDG_DPJCPJCGBJL_OFFSET))(this);
		}

		::System::Void JJIGMLJBKFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFHNKLGDDG_JJIGMLJBKFD_OFFSET))(this);
		}

		::System::Boolean JNIHLEFPIEG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFHNKLGDDG_JNIHLEFPIEG_OFFSET))(this);
		}

		::System::Boolean MACOKGJNJOC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFHNKLGDDG_MACOKGJNJOC_OFFSET))(this);
		}

		::System::Boolean HDADKOAAJPI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFHNKLGDDG_HDADKOAAJPI_OFFSET))(this);
		}

		::System::Boolean ILFKKFEJIFN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFHNKLGDDG_ILFKKFEJIFN_OFFSET))(this);
		}

		::GLHELOMEIJB* HPNKDJDJMLN()
		{
			return ((::GLHELOMEIJB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFHNKLGDDG_HPNKDJDJMLN_OFFSET))(this);
		}

	};
