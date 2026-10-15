#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIMNKMEFBKE;
class BPHJOOGJPKD;
class CJCHKDLALDN;
class IJFIHJJPHNA;
class JIHILNOBAPH;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GNEGKIBNHLD_BDFPECFMJAB_OFFSET UNITYSDK_OFFSET(0x1C647E00)
#define GNEGKIBNHLD_CHCHMLMONJO_OFFSET UNITYSDK_OFFSET(0x1C61C060)
#define GNEGKIBNHLD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C647D30)
#define GNEGKIBNHLD_PPCHPMFPHJA_OFFSET UNITYSDK_OFFSET(0x1C61B240)

inline static constexpr unsigned int GNEGKIBNHLD_TypeDefinitionIndex = 36492;

	class GNEGKIBNHLD : public ::System::Object
	{
	public:
		::BPHJOOGJPKD* FLMODBLFAGD; // 0x10
		::System::Collections::Generic::List_1<::IJFIHJJPHNA*>* HAEOILBDBLB; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::IJFIHJJPHNA*>* JCDFGOGAPCC; // 0x20
		::AIMNKMEFBKE* EEFMDEHLLFI; // 0x28
		::System::Void _ctor(::BPHJOOGJPKD* a1, ::AIMNKMEFBKE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BPHJOOGJPKD*, ::AIMNKMEFBKE*))((::PBYTE)hIl2Cpp + GNEGKIBNHLD_CTOR_OFFSET))(this, a1, a2);
		}

		::IJFIHJJPHNA* PPCHPMFPHJA(::System::UInt32 a1)
		{
			return ((::IJFIHJJPHNA*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GNEGKIBNHLD_PPCHPMFPHJA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::IJFIHJJPHNA*>* CHCHMLMONJO()
		{
			return ((::System::Collections::Generic::List_1<::IJFIHJJPHNA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNEGKIBNHLD_CHCHMLMONJO_OFFSET))(this);
		}

		::CJCHKDLALDN* BDFPECFMJAB(::JIHILNOBAPH* a1)
		{
			return ((::CJCHKDLALDN*(*)(::PVOID, ::JIHILNOBAPH*))((::PBYTE)hIl2Cpp + GNEGKIBNHLD_BDFPECFMJAB_OFFSET))(this, a1);
		}

	};
