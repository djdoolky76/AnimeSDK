#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPNPHHIBPEK.h"
class MDJOFODHIMD;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GFLKBGPGHCC_CHECKCANSKIP_OFFSET UNITYSDK_OFFSET(0x169367A0)
#define GFLKBGPGHCC_CTOR_OFFSET UNITYSDK_OFFSET(0x16936230)
#define GFLKBGPGHCC_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x16936240)
#define GFLKBGPGHCC_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0x169362F0)
#define GFLKBGPGHCC_FNACALDOOIF_OFFSET UNITYSDK_OFFSET(0x169363A0)
#define GFLKBGPGHCC_KPAOCJEJCNA_OFFSET UNITYSDK_OFFSET(0x16936450)

inline static constexpr unsigned int GFLKBGPGHCC_TypeDefinitionIndex = 74501;

	class GFLKBGPGHCC : public ::JPNPHHIBPEK
	{
	public:
		::System::Collections::Generic::List_1<::MDJOFODHIMD*>* GFFAGJOELCH; // 0x20
		::System::Void _ctor(::System::Collections::Generic::List_1<::MDJOFODHIMD*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MDJOFODHIMD*>*))((::PBYTE)hIl2Cpp + GFLKBGPGHCC_CTOR_OFFSET))(this, a1);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFLKBGPGHCC_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void EPJFIHHDMAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFLKBGPGHCC_EPJFIHHDMAK_OFFSET))(this);
		}

		::System::Void FNACALDOOIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFLKBGPGHCC_FNACALDOOIF_OFFSET))(this);
		}

		::System::Void KPAOCJEJCNA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GFLKBGPGHCC_KPAOCJEJCNA_OFFSET))(this, a1);
		}

		::System::Boolean CheckCanSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFLKBGPGHCC_CHECKCANSKIP_OFFSET))(this);
		}

	};
