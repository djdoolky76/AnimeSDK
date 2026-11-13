#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HJCHNOIBJCA;
class ILCBMMHOHMM;
class LLMNADLMHPJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MHOICJPNIML_BHDGOECMFDG_OFFSET UNITYSDK_OFFSET(0x1B36AA20)
#define MHOICJPNIML_CEHLAAJNLKG_OFFSET UNITYSDK_OFFSET(0x1B36A690)
#define MHOICJPNIML_CTOR_OFFSET UNITYSDK_OFFSET(0x1B36A5D0)
#define MHOICJPNIML_EIAPDCEIPPC_OFFSET UNITYSDK_OFFSET(0x1B36A730)
#define MHOICJPNIML_LNLCIKCFJFG_OFFSET UNITYSDK_OFFSET(0x1B36AA80)
#define MHOICJPNIML_NAKILKGGEDC_OFFSET UNITYSDK_OFFSET(0x1B36A7B0)

inline static constexpr unsigned int MHOICJPNIML_TypeDefinitionIndex = 68652;

	class MHOICJPNIML : public ::System::Object
	{
	public:
		::ILCBMMHOHMM* EDLDCGGEPFG; // 0x10
		::LLMNADLMHPJ* EEFMDEHLLFI; // 0x18
		::HJCHNOIBJCA* MEGLBLIJGCF; // 0x20
		::System::Void _ctor(::LLMNADLMHPJ* a1, ::HJCHNOIBJCA* a2, ::ILCBMMHOHMM* a3)
		{
			return ((::System::Void(*)(::PVOID, ::LLMNADLMHPJ*, ::HJCHNOIBJCA*, ::ILCBMMHOHMM*))((::PBYTE)hIl2Cpp + MHOICJPNIML_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CEHLAAJNLKG(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MHOICJPNIML_CEHLAAJNLKG_OFFSET))(this, a1);
		}

		::System::Void EIAPDCEIPPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHOICJPNIML_EIAPDCEIPPC_OFFSET))(this);
		}

		::System::Void NAKILKGGEDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHOICJPNIML_NAKILKGGEDC_OFFSET))(this);
		}

		::System::Boolean BHDGOECMFDG(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MHOICJPNIML_BHDGOECMFDG_OFFSET))(this, a1);
		}

		::System::Void LNLCIKCFJFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHOICJPNIML_LNLCIKCFJFG_OFFSET))(this);
		}

	};
