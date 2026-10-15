#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPNPHHIBPEK.h"
class MDJOFODHIMD;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GFLKBGPGHCC_CHECKCANSKIP_OFFSET UNITYSDK_OFFSET(0x159F0930)
#define GFLKBGPGHCC_CTOR_OFFSET UNITYSDK_OFFSET(0x159F03C0)
#define GFLKBGPGHCC_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x159F03D0)
#define GFLKBGPGHCC_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0x159F0480)
#define GFLKBGPGHCC_FNACALDOOIF_OFFSET UNITYSDK_OFFSET(0x159F0530)
#define GFLKBGPGHCC_KPAOCJEJCNA_OFFSET UNITYSDK_OFFSET(0x159F05E0)

inline static constexpr unsigned int GFLKBGPGHCC_TypeDefinitionIndex = 72421;

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
