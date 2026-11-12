#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IngredientKind.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PPPJEIACOLG.h"
class HLJNBBHKKMI;
class IFKJDMIGAMG;
class JMHHBMNIJJB;
class LPHINGPIEAJ;
class NOEOAMBCKHB;
namespace Entitas { template <typename T> class IGroup_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ALMCMIDIKDD_ABELMKLFKAG_OFFSET UNITYSDK_OFFSET(0x163DF420)
#define ALMCMIDIKDD_CGLADJHGFGI_OFFSET UNITYSDK_OFFSET(0x163DF200)
#define ALMCMIDIKDD_CTOR_OFFSET UNITYSDK_OFFSET(0x163DE130)
#define ALMCMIDIKDD_DCMDPFDIDME_OFFSET UNITYSDK_OFFSET(0x163DF570)
#define ALMCMIDIKDD_DJIBINODJIN_OFFSET UNITYSDK_OFFSET(0x163DE320)
#define ALMCMIDIKDD_GKHMPHEIEKB_OFFSET UNITYSDK_OFFSET(0x163DF880)
#define ALMCMIDIKDD_JKAMKLFEBPK_OFFSET UNITYSDK_OFFSET(0x163DF3A0)
#define ALMCMIDIKDD_KEBIBMCGBPF_OFFSET UNITYSDK_OFFSET(0x163DE7A0)

inline static constexpr unsigned int ALMCMIDIKDD_TypeDefinitionIndex = 79894;

	class ALMCMIDIKDD : public ::System::Object
	{
	public:
		::IFKJDMIGAMG* FBAEKEOJFPG; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::IngredientKind>* FNBDKCMEGJI; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* BFMPAOODJHM; // 0x20
		::System::Collections::Generic::List_1<::LPHINGPIEAJ*>* IHLOOLAJDLF; // 0x28
		::Entitas::IGroup_1<::LPHINGPIEAJ*>* PLOIPCBJHKJ; // 0x30
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* MHLNAFJFFCD; // 0x40
		// static const ::System::Object HJMMDFPDGKA; // 0x0
		::System::Void _ctor(::JMHHBMNIJJB* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JMHHBMNIJJB*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + ALMCMIDIKDD_CTOR_OFFSET))(this, a1, a2);
		}

		::PPPJEIACOLG DJIBINODJIN()
		{
			return ((::PPPJEIACOLG(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMCMIDIKDD_DJIBINODJIN_OFFSET))(this);
		}

		::PPPJEIACOLG DCMDPFDIDME()
		{
			return ((::PPPJEIACOLG(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMCMIDIKDD_DCMDPFDIDME_OFFSET))(this);
		}

		::System::Boolean CGLADJHGFGI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMCMIDIKDD_CGLADJHGFGI_OFFSET))(this);
		}

		::LPHINGPIEAJ* JKAMKLFEBPK()
		{
			return ((::LPHINGPIEAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMCMIDIKDD_JKAMKLFEBPK_OFFSET))(this);
		}

		::IFKJDMIGAMG* ABELMKLFKAG(::NOEOAMBCKHB* a1, ::LPHINGPIEAJ* a2, ::System::Boolean a3)
		{
			return ((::IFKJDMIGAMG*(*)(::PVOID, ::NOEOAMBCKHB*, ::LPHINGPIEAJ*, ::System::Boolean))((::PBYTE)hIl2Cpp + ALMCMIDIKDD_ABELMKLFKAG_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* KEBIBMCGBPF()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMCMIDIKDD_KEBIBMCGBPF_OFFSET))(this);
		}

		::System::Void GKHMPHEIEKB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ALMCMIDIKDD_GKHMPHEIEKB_OFFSET))(this, a1);
		}

	};
