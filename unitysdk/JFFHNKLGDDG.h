#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLHELOMEIJB;
class JFFHNKLGDDG;
class KBLELMJDBEA;
class MFKLCJHKNBK;

#define JFFHNKLGDDG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB993470)
#define JFFHNKLGDDG_CTOR_OFFSET UNITYSDK_OFFSET(0xB993500)
#define JFFHNKLGDDG_DPJCPJCGBJL_OFFSET UNITYSDK_OFFSET(0xB994290)
#define JFFHNKLGDDG_EKFBHPGKJIG_OFFSET UNITYSDK_OFFSET(0xB993560)
#define JFFHNKLGDDG_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB993510)
#define JFFHNKLGDDG_HDADKOAAJPI_OFFSET UNITYSDK_OFFSET(0xB9941B0)
#define JFFHNKLGDDG_HPNKDJDJMLN_OFFSET UNITYSDK_OFFSET(0xB994110)
#define JFFHNKLGDDG_ILFKKFEJIFN_OFFSET UNITYSDK_OFFSET(0xB994210)
#define JFFHNKLGDDG_JJIGMLJBKFD_OFFSET UNITYSDK_OFFSET(0xB994410)
#define JFFHNKLGDDG_JNIHLEFPIEG_OFFSET UNITYSDK_OFFSET(0xB9942E0)
#define JFFHNKLGDDG_MACOKGJNJOC_OFFSET UNITYSDK_OFFSET(0xB9945B0)

inline static constexpr unsigned int JFFHNKLGDDG_TypeDefinitionIndex = 78086;

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
