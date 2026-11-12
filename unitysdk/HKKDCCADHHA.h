#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDOPLFDBBGD;
class MINAKLCBJMO;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HKKDCCADHHA_AKJDHPLMFEG_OFFSET UNITYSDK_OFFSET(0x16CA1430)
#define HKKDCCADHHA_ALKNABCADHI_OFFSET UNITYSDK_OFFSET(0x16CA0D60)
#define HKKDCCADHHA_CTOR_OFFSET UNITYSDK_OFFSET(0x16CA0400)
#define HKKDCCADHHA_FLNENANCDOL_OFFSET UNITYSDK_OFFSET(0x16CA13D0)
#define HKKDCCADHHA_KNEPMHINNFH_OFFSET UNITYSDK_OFFSET(0x16CA04B0)

inline static constexpr unsigned int HKKDCCADHHA_TypeDefinitionIndex = 84876;

	class HKKDCCADHHA : public ::System::Object
	{
	public:
		::KDOPLFDBBGD* CGFKNIOKJAH; // 0x10
		::MINAKLCBJMO* JDGBDKHIEGG; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* FNPKJMALILE; // 0x20
		::System::Void _ctor(::MINAKLCBJMO* a1, ::KDOPLFDBBGD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MINAKLCBJMO*, ::KDOPLFDBBGD*))((::PBYTE)hIl2Cpp + HKKDCCADHHA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* KNEPMHINNFH()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKDCCADHHA_KNEPMHINNFH_OFFSET))(this);
		}

		::System::Boolean ALKNABCADHI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKDCCADHHA_ALKNABCADHI_OFFSET))(this);
		}

		::System::Boolean FLNENANCDOL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKDCCADHHA_FLNENANCDOL_OFFSET))(this);
		}

		::System::Void AKJDHPLMFEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKDCCADHHA_AKJDHPLMFEG_OFFSET))(this);
		}

	};
