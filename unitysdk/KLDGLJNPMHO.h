#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPJHKCDGGIK.h"
#include "unitysdk/KIFCLJJAOFJ.h"
class BFBIICACCMB;
class MNBNFBAMKKI;
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KLDGLJNPMHO_CTOR_OFFSET UNITYSDK_OFFSET(0xB4EE490)
#define KLDGLJNPMHO_DMEMNMNHCFE_OFFSET UNITYSDK_OFFSET(0xB4EE050)
#define KLDGLJNPMHO_HCDPIBFLAME_OFFSET UNITYSDK_OFFSET(0xB4EDBA0)
#define KLDGLJNPMHO_JFJANJDEICB_OFFSET UNITYSDK_OFFSET(0xB4EE3B0)
#define KLDGLJNPMHO_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0xB4EDAC0)

inline static constexpr unsigned int KLDGLJNPMHO_TypeDefinitionIndex = 53727;

	class KLDGLJNPMHO : public ::KIFCLJJAOFJ
	{
	public:
		::System::Collections::Generic::List_1<::JPJHKCDGGIK>* HNAJLHOLGEK; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::JPJHKCDGGIK>*>* KKGOHAFJPJI; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDGLJNPMHO_CTOR_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDGLJNPMHO_NLBNJGKAMII_OFFSET))(this);
		}

		::System::Void HCDPIBFLAME(::BFBIICACCMB* a1, ::RPG::GameCore::TaskContext* a2, ::MNBNFBAMKKI* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BFBIICACCMB*, ::RPG::GameCore::TaskContext*, ::MNBNFBAMKKI*))((::PBYTE)hIl2Cpp + KLDGLJNPMHO_HCDPIBFLAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DMEMNMNHCFE(::MNBNFBAMKKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNBNFBAMKKI*))((::PBYTE)hIl2Cpp + KLDGLJNPMHO_DMEMNMNHCFE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::JPJHKCDGGIK>* JFJANJDEICB(::System::String* a1)
		{
			return ((::System::Collections::Generic::List_1<::JPJHKCDGGIK>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KLDGLJNPMHO_JFJANJDEICB_OFFSET))(this, a1);
		}

	};
