#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAGPPDDBBIM;
class FKFGNAHIOPO;
class GDCBKFDNOCL;
class HLJNBBHKKMI;
class MDEJKAOFFBO;
class NOEOAMBCKHB;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MDEJKAOFFBO_LNMEFLBNPPC_CTOR_OFFSET UNITYSDK_OFFSET(0xC152440)
#define MDEJKAOFFBO_LNMEFLBNPPC_ELCIEFMELFL_OFFSET UNITYSDK_OFFSET(0xC152E00)
#define MDEJKAOFFBO_LNMEFLBNPPC_HNKIKMOAPJC_OFFSET UNITYSDK_OFFSET(0xC152F00)
#define MDEJKAOFFBO_LNMEFLBNPPC_ODINOMPCBCC_OFFSET UNITYSDK_OFFSET(0xC152D60)

inline static constexpr unsigned int MDEJKAOFFBO_LNMEFLBNPPC_TypeDefinitionIndex = 79881;

	class MDEJKAOFFBO_LNMEFLBNPPC : public ::System::Object
	{
	public:
		::MDEJKAOFFBO* CFKHNPGEAJA; // 0x10
		::EAGPPDDBBIM* EFCOEOGMHPO; // 0x18
		::System::Collections::Generic::List_1<::GDCBKFDNOCL*>* JAHJGGCIFMH; // 0x20
		::NOEOAMBCKHB* BPALDGBLHPH; // 0x28
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x30
		::FKFGNAHIOPO* HOMJBACGGJB; // 0x38
		::System::Void _ctor(::MDEJKAOFFBO* a1, ::HLJNBBHKKMI* a2, ::EAGPPDDBBIM* a3, ::FKFGNAHIOPO* a4, ::NOEOAMBCKHB* a5, ::System::Collections::Generic::List_1<::GDCBKFDNOCL*>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::MDEJKAOFFBO*, ::HLJNBBHKKMI*, ::EAGPPDDBBIM*, ::FKFGNAHIOPO*, ::NOEOAMBCKHB*, ::System::Collections::Generic::List_1<::GDCBKFDNOCL*>*))((::PBYTE)hIl2Cpp + MDEJKAOFFBO_LNMEFLBNPPC_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void ODINOMPCBCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEJKAOFFBO_LNMEFLBNPPC_ODINOMPCBCC_OFFSET))(this);
		}

		::System::Void ELCIEFMELFL(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MDEJKAOFFBO_LNMEFLBNPPC_ELCIEFMELFL_OFFSET))(this, a1);
		}

		::System::Void HNKIKMOAPJC(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MDEJKAOFFBO_LNMEFLBNPPC_HNKIKMOAPJC_OFFSET))(this, a1);
		}

	};
