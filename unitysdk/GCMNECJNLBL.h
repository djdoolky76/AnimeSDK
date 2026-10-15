#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCMNECJNLBL_ONLOEMENPFG;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GCMNECJNLBL_CTOR_OFFSET UNITYSDK_OFFSET(0x1597A2E0)
#define GCMNECJNLBL_KHFHNDEBGDH_OFFSET UNITYSDK_OFFSET(0x15979F50)
#define GCMNECJNLBL_MKJIIKACPCH_OFFSET UNITYSDK_OFFSET(0x15979E70)
#define GCMNECJNLBL_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1597A140)

inline static constexpr unsigned int GCMNECJNLBL_TypeDefinitionIndex = 49213;

	class GCMNECJNLBL : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* CGMIBLKCOOF; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMNECJNLBL_CTOR_OFFSET))(this);
		}

		::System::Void MKJIIKACPCH(::GCMNECJNLBL_ONLOEMENPFG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCMNECJNLBL_ONLOEMENPFG*))((::PBYTE)hIl2Cpp + GCMNECJNLBL_MKJIIKACPCH_OFFSET))(this, a1);
		}

		::System::Void KHFHNDEBGDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMNECJNLBL_KHFHNDEBGDH_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMNECJNLBL_PAGKOAEOLKA_OFFSET))(this);
		}

	};
