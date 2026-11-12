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

#define JAANHJGOINJ_DBGHEJKBHCG_ANHGNMJJKJE_OFFSET UNITYSDK_OFFSET(0xB8714C0)
#define JAANHJGOINJ_DBGHEJKBHCG_CTOR_OFFSET UNITYSDK_OFFSET(0xB8700C0)
#define JAANHJGOINJ_DBGHEJKBHCG_DDKJIMBJBMH_OFFSET UNITYSDK_OFFSET(0xB8711D0)
#define JAANHJGOINJ_DBGHEJKBHCG_GEOHNBNJOBN_OFFSET UNITYSDK_OFFSET(0xB870C70)
#define JAANHJGOINJ_DBGHEJKBHCG_IKNCABBGGMJ_OFFSET UNITYSDK_OFFSET(0xB870AA0)
#define JAANHJGOINJ_DBGHEJKBHCG_KDOEKNFJFJD_OFFSET UNITYSDK_OFFSET(0xB8701C0)
#define JAANHJGOINJ_DBGHEJKBHCG_KJMHENOIEML_OFFSET UNITYSDK_OFFSET(0xB8706F0)

inline static constexpr unsigned int JAANHJGOINJ_DBGHEJKBHCG_TypeDefinitionIndex = 64005;

	class JAANHJGOINJ_DBGHEJKBHCG : public ::System::Object
	{
	public:
		::JAANHJGOINJ* LIOJKFIGGIJ; // 0x10
		::System::Collections::Generic::List_1<::EDCJCHHBCPC*>* JBGJNOGCOJC; // 0x18
		::System::Collections::Generic::List_1<::MHHCKCECJIM*>* DNJGNHOJGOC; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::NNLNAFIMCNO*>* OOFPEIIHBEK; // 0x28
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
