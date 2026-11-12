#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPDGNJCCOFO;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BLEKFPKOEOF_BCHEMANKAFP_OFFSET UNITYSDK_OFFSET(0x1FEA5DB0)
#define BLEKFPKOEOF_BFGJIANIBJB_OFFSET UNITYSDK_OFFSET(0x1FEA6270)
#define BLEKFPKOEOF_CTOR_OFFSET UNITYSDK_OFFSET(0x1FEA5610)
#define BLEKFPKOEOF_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1FEA5C30)
#define BLEKFPKOEOF_KHFHNDEBGDH_OFFSET UNITYSDK_OFFSET(0x1FEA63F0)
#define BLEKFPKOEOF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1FEA5AF0)
#define BLEKFPKOEOF_LJJBPKAMKHA_OFFSET UNITYSDK_OFFSET(0x1FEA5DA0)

inline static constexpr unsigned int BLEKFPKOEOF_TypeDefinitionIndex = 36199;

	class BLEKFPKOEOF : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::String*>* BPLDPPGMHHA; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* EBCHMKHAOOJ; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* HDENIHCMNHA; // 0x20
		::BPDGNJCCOFO* GPKKOJMEDLF; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEKFPKOEOF_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEKFPKOEOF_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEKFPKOEOF_HADOHLNHHGB_OFFSET))(this);
		}

		::BPDGNJCCOFO* LJJBPKAMKHA()
		{
			return ((::BPDGNJCCOFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEKFPKOEOF_LJJBPKAMKHA_OFFSET))(this);
		}

		::System::Void BCHEMANKAFP(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + BLEKFPKOEOF_BCHEMANKAFP_OFFSET))(this, a1, a2);
		}

		::System::Void BFGJIANIBJB(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + BLEKFPKOEOF_BFGJIANIBJB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KHFHNDEBGDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLEKFPKOEOF_KHFHNDEBGDH_OFFSET))(this);
		}

	};
