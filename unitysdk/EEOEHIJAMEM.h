#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPNPHHIBPEK.h"
class MDJOFODHIMD;

#define EEOEHIJAMEM_AGHABIKPPNO_OFFSET UNITYSDK_OFFSET(0x13A41530)
#define EEOEHIJAMEM_CHECKCANSKIP_OFFSET UNITYSDK_OFFSET(0x13A419D0)
#define EEOEHIJAMEM_CTOR_OFFSET UNITYSDK_OFFSET(0x13A41460)
#define EEOEHIJAMEM_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x13A41470)
#define EEOEHIJAMEM_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0x13A41670)
#define EEOEHIJAMEM_FNACALDOOIF_OFFSET UNITYSDK_OFFSET(0x13A416D0)
#define EEOEHIJAMEM_KPAOCJEJCNA_OFFSET UNITYSDK_OFFSET(0x13A41770)
#define EEOEHIJAMEM_NPOFEKBLAIH_OFFSET UNITYSDK_OFFSET(0x13A414D0)

	class EEOEHIJAMEM : public ::JPNPHHIBPEK
	{
	public:
		::MDJOFODHIMD* GLNMMIEPAIO; // 0x20
		::System::Single NNNLKJLPJCD; // 0x28
		::System::Single OCONDDLOJAD; // 0x2C
		::System::Void _ctor(::System::Single a1, ::MDJOFODHIMD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::MDJOFODHIMD*))((::PBYTE)hIl2Cpp + EEOEHIJAMEM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOEHIJAMEM_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void NPOFEKBLAIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOEHIJAMEM_NPOFEKBLAIH_OFFSET))(this);
		}

		::System::Void AGHABIKPPNO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EEOEHIJAMEM_AGHABIKPPNO_OFFSET))(this, a1);
		}

		::System::Void EPJFIHHDMAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOEHIJAMEM_EPJFIHHDMAK_OFFSET))(this);
		}

		::System::Void FNACALDOOIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOEHIJAMEM_FNACALDOOIF_OFFSET))(this);
		}

		::System::Void KPAOCJEJCNA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EEOEHIJAMEM_KPAOCJEJCNA_OFFSET))(this, a1);
		}

		::System::Boolean CheckCanSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOEHIJAMEM_CHECKCANSKIP_OFFSET))(this);
		}

	};
