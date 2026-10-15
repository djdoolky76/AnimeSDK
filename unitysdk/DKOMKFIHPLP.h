#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFLILCJMKDB.h"
#include "unitysdk/DHNOLGFHFEB.h"
class AIFHJBBDKDC;
class AJEAHAODOHJ;
class DEOOCBMMENB;
class FACKCCJFLKM;
class MAOPBKPKCEK;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DKOMKFIHPLP_ACBJNHPGCAI_OFFSET UNITYSDK_OFFSET(0xF887530)
#define DKOMKFIHPLP_AEOKIMBOGKM_OFFSET UNITYSDK_OFFSET(0xF888300)
#define DKOMKFIHPLP_BIHAMIDCKKA_OFFSET UNITYSDK_OFFSET(0xF8879B0)
#define DKOMKFIHPLP_CTOR_OFFSET UNITYSDK_OFFSET(0xF888CB0)
#define DKOMKFIHPLP_DIKBPOLKLBM_OFFSET UNITYSDK_OFFSET(0xF887FF0)
#define DKOMKFIHPLP_JOBFMHJOJHD_OFFSET UNITYSDK_OFFSET(0xF887110)
#define DKOMKFIHPLP_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xF886F70)
#define DKOMKFIHPLP_OHPCLEHGCKK_OFFSET UNITYSDK_OFFSET(0xF888530)

inline static constexpr unsigned int DKOMKFIHPLP_TypeDefinitionIndex = 62044;

	class DKOMKFIHPLP : public ::BFLILCJMKDB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKOMKFIHPLP_CTOR_OFFSET))(this);
		}

		::System::Void LJBCDJNNBJH(::AIFHJBBDKDC* a1, ::DEOOCBMMENB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AIFHJBBDKDC*, ::DEOOCBMMENB*))((::PBYTE)hIl2Cpp + DKOMKFIHPLP_LJBCDJNNBJH_OFFSET))(this, a1, a2);
		}

		::System::Void JOBFMHJOJHD(::AIFHJBBDKDC* a1, ::AJEAHAODOHJ* a2, ::FACKCCJFLKM* a3)
		{
			return ((::System::Void(*)(::PVOID, ::AIFHJBBDKDC*, ::AJEAHAODOHJ*, ::FACKCCJFLKM*))((::PBYTE)hIl2Cpp + DKOMKFIHPLP_JOBFMHJOJHD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ACBJNHPGCAI(::AIFHJBBDKDC* a1, ::FACKCCJFLKM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AIFHJBBDKDC*, ::FACKCCJFLKM*))((::PBYTE)hIl2Cpp + DKOMKFIHPLP_ACBJNHPGCAI_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::Dictionary_2<::MAOPBKPKCEK*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* BIHAMIDCKKA(::System::Collections::Generic::List_1<::MAOPBKPKCEK*>* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::MAOPBKPKCEK*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MAOPBKPKCEK*>*))((::PBYTE)hIl2Cpp + DKOMKFIHPLP_BIHAMIDCKKA_OFFSET))(this, a1);
		}

		static ::System::UInt32 DIKBPOLKLBM(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
		{
			return ((::System::UInt32(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + DKOMKFIHPLP_DIKBPOLKLBM_OFFSET))(a1, a2);
		}

		::DHNOLGFHFEB AEOKIMBOGKM(::MAOPBKPKCEK* a1, ::System::Collections::Generic::Dictionary_2<::MAOPBKPKCEK*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* a2, ::System::Collections::Generic::List_1<::MAOPBKPKCEK*>* a3)
		{
			return ((::DHNOLGFHFEB(*)(::PVOID, ::MAOPBKPKCEK*, ::System::Collections::Generic::Dictionary_2<::MAOPBKPKCEK*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>*, ::System::Collections::Generic::List_1<::MAOPBKPKCEK*>*))((::PBYTE)hIl2Cpp + DKOMKFIHPLP_AEOKIMBOGKM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OHPCLEHGCKK(::AIFHJBBDKDC* a1, ::FACKCCJFLKM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AIFHJBBDKDC*, ::FACKCCJFLKM*))((::PBYTE)hIl2Cpp + DKOMKFIHPLP_OHPCLEHGCKK_OFFSET))(this, a1, a2);
		}

	};
