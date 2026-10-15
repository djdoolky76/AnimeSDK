#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGHEOOINJAK;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NLPGEOGDHKA_BABODMNHICM_OFFSET UNITYSDK_OFFSET(0xBC798F0)
#define NLPGEOGDHKA_BIHMKFMBLPD_OFFSET UNITYSDK_OFFSET(0xBC79600)
#define NLPGEOGDHKA_CTOR_OFFSET UNITYSDK_OFFSET(0xBC799C0)
#define NLPGEOGDHKA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC78EF0)
#define NLPGEOGDHKA_GOLDLOOIIGF_OFFSET UNITYSDK_OFFSET(0xBC79320)
#define NLPGEOGDHKA_LPPFEMHGCLH_OFFSET UNITYSDK_OFFSET(0xBC79010)

inline static constexpr unsigned int NLPGEOGDHKA_TypeDefinitionIndex = 75322;

	class NLPGEOGDHKA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* CJJAHIJOJMN; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* BDMJFJAHFGN; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* LDLIFOBHINC; // 0x20
		::System::Boolean HHGMFCMPCIK; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLPGEOGDHKA_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLPGEOGDHKA_DISPOSE_OFFSET))(this);
		}

		::System::Void LPPFEMHGCLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLPGEOGDHKA_LPPFEMHGCLH_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::HGHEOOINJAK*>* GOLDLOOIIGF(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Collections::Generic::List_1<::HGHEOOINJAK*>*(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + NLPGEOGDHKA_GOLDLOOIIGF_OFFSET))(this, a1, a2);
		}

		::System::Void BIHMKFMBLPD(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + NLPGEOGDHKA_BIHMKFMBLPD_OFFSET))(this, a1);
		}

		::System::Void BABODMNHICM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLPGEOGDHKA_BABODMNHICM_OFFSET))(this);
		}

	};
