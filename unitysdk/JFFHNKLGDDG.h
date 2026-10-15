#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLHELOMEIJB;
class JFFHNKLGDDG;
class KBLELMJDBEA;
class MFKLCJHKNBK;

#define JFFHNKLGDDG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x16636160)
#define JFFHNKLGDDG_CTOR_OFFSET UNITYSDK_OFFSET(0x166361F0)
#define JFFHNKLGDDG_DPJCPJCGBJL_OFFSET UNITYSDK_OFFSET(0x16636F80)
#define JFFHNKLGDDG_EKFBHPGKJIG_OFFSET UNITYSDK_OFFSET(0x16636250)
#define JFFHNKLGDDG_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16636200)
#define JFFHNKLGDDG_HDADKOAAJPI_OFFSET UNITYSDK_OFFSET(0x16636EA0)
#define JFFHNKLGDDG_HPNKDJDJMLN_OFFSET UNITYSDK_OFFSET(0x16636E00)
#define JFFHNKLGDDG_ILFKKFEJIFN_OFFSET UNITYSDK_OFFSET(0x16636F00)
#define JFFHNKLGDDG_JJIGMLJBKFD_OFFSET UNITYSDK_OFFSET(0x16637100)
#define JFFHNKLGDDG_JNIHLEFPIEG_OFFSET UNITYSDK_OFFSET(0x16636FD0)
#define JFFHNKLGDDG_MACOKGJNJOC_OFFSET UNITYSDK_OFFSET(0x166372A0)

inline static constexpr unsigned int JFFHNKLGDDG_TypeDefinitionIndex = 75758;

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
