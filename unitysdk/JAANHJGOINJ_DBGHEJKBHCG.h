#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDCJCHHBCPC;
class JAANHJGOINJ;
class JAANHJGOINJ_DBGHEJKBHCG;
class MHHCKCECJIM;
class NNLNAFIMCNO;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JAANHJGOINJ_DBGHEJKBHCG_ANHGNMJJKJE_OFFSET UNITYSDK_OFFSET(0x1652D480)
#define JAANHJGOINJ_DBGHEJKBHCG_CTOR_OFFSET UNITYSDK_OFFSET(0x1652C080)
#define JAANHJGOINJ_DBGHEJKBHCG_DDKJIMBJBMH_OFFSET UNITYSDK_OFFSET(0x1652D190)
#define JAANHJGOINJ_DBGHEJKBHCG_GEOHNBNJOBN_OFFSET UNITYSDK_OFFSET(0x1652CC30)
#define JAANHJGOINJ_DBGHEJKBHCG_IKNCABBGGMJ_OFFSET UNITYSDK_OFFSET(0x1652CA60)
#define JAANHJGOINJ_DBGHEJKBHCG_KDOEKNFJFJD_OFFSET UNITYSDK_OFFSET(0x1652C180)
#define JAANHJGOINJ_DBGHEJKBHCG_KJMHENOIEML_OFFSET UNITYSDK_OFFSET(0x1652C6B0)

inline static constexpr unsigned int JAANHJGOINJ_DBGHEJKBHCG_TypeDefinitionIndex = 62584;

	class JAANHJGOINJ_DBGHEJKBHCG : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::NNLNAFIMCNO*>* OOFPEIIHBEK; // 0x10
		::JAANHJGOINJ* LIOJKFIGGIJ; // 0x18
		::System::Collections::Generic::List_1<::EDCJCHHBCPC*>* JBGJNOGCOJC; // 0x20
		::System::Collections::Generic::List_1<::MHHCKCECJIM*>* DNJGNHOJGOC; // 0x28
		::System::Void _ctor(::JAANHJGOINJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAANHJGOINJ*))((::PBYTE)hIl2Cpp + JAANHJGOINJ_DBGHEJKBHCG_CTOR_OFFSET))(this, a1);
		}

		::JAANHJGOINJ_DBGHEJKBHCG* KDOEKNFJFJD(::NNLNAFIMCNO* a1)
		{
			return ((::JAANHJGOINJ_DBGHEJKBHCG*(*)(::PVOID, ::NNLNAFIMCNO*))((::PBYTE)hIl2Cpp + JAANHJGOINJ_DBGHEJKBHCG_KDOEKNFJFJD_OFFSET))(this, a1);
		}

		::JAANHJGOINJ_DBGHEJKBHCG* KJMHENOIEML(::NNLNAFIMCNO* a1)
		{
			return ((::JAANHJGOINJ_DBGHEJKBHCG*(*)(::PVOID, ::NNLNAFIMCNO*))((::PBYTE)hIl2Cpp + JAANHJGOINJ_DBGHEJKBHCG_KJMHENOIEML_OFFSET))(this, a1);
		}

		::JAANHJGOINJ_DBGHEJKBHCG* IKNCABBGGMJ(::MHHCKCECJIM* a1)
		{
			return ((::JAANHJGOINJ_DBGHEJKBHCG*(*)(::PVOID, ::MHHCKCECJIM*))((::PBYTE)hIl2Cpp + JAANHJGOINJ_DBGHEJKBHCG_IKNCABBGGMJ_OFFSET))(this, a1);
		}

		::JAANHJGOINJ_DBGHEJKBHCG* GEOHNBNJOBN(::EDCJCHHBCPC* a1)
		{
			return ((::JAANHJGOINJ_DBGHEJKBHCG*(*)(::PVOID, ::EDCJCHHBCPC*))((::PBYTE)hIl2Cpp + JAANHJGOINJ_DBGHEJKBHCG_GEOHNBNJOBN_OFFSET))(this, a1);
		}

		::System::Void DDKJIMBJBMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAANHJGOINJ_DBGHEJKBHCG_DDKJIMBJBMH_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::NNLNAFIMCNO*>* ANHGNMJJKJE(::System::Collections::Generic::Dictionary_2<::System::Type*, ::NNLNAFIMCNO*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::NNLNAFIMCNO*>*(*)(::System::Collections::Generic::Dictionary_2<::System::Type*, ::NNLNAFIMCNO*>*))((::PBYTE)hIl2Cpp + JAANHJGOINJ_DBGHEJKBHCG_ANHGNMJJKJE_OFFSET))(a1);
		}

	};
