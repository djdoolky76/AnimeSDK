#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BAMIOFOKCEB.h"
#include "unitysdk/OCKCNOOHILK.h"
#include "unitysdk/OOFGNEDEFCF.h"
class ACOLIBAMGLK;
class BABBBKKDBIN;
class KJLGHJCHJFJ;
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }

#define PENGKCAHHAE_ACFPGJJDPOM_OFFSET UNITYSDK_OFFSET(0x14540CA0)
#define PENGKCAHHAE_CFDEHJBEFKN_OFFSET UNITYSDK_OFFSET(0x14540D10)
#define PENGKCAHHAE_CFHNPJBFOCD_OFFSET UNITYSDK_OFFSET(0x14540E30)
#define PENGKCAHHAE_CTOR_OFFSET UNITYSDK_OFFSET(0x14540AC0)
#define PENGKCAHHAE_ECMDHBGGPFJ_OFFSET UNITYSDK_OFFSET(0x14540C30)
#define PENGKCAHHAE_EIBHHOPHJCK_OFFSET UNITYSDK_OFFSET(0x14540DB0)
#define PENGKCAHHAE_GCCPIHBMFBM_OFFSET UNITYSDK_OFFSET(0x14541520)
#define PENGKCAHHAE_GKIAMBCFCFF_OFFSET UNITYSDK_OFFSET(0x14540BD0)
#define PENGKCAHHAE_IKGICBPMHJJ_OFFSET UNITYSDK_OFFSET(0x14540B80)
#define PENGKCAHHAE_LLHLOLOBEBC_OFFSET UNITYSDK_OFFSET(0x14540AD0)
#define PENGKCAHHAE_PDHOOKDBHDF_OFFSET UNITYSDK_OFFSET(0x145414C0)

inline static constexpr unsigned int PENGKCAHHAE_TypeDefinitionIndex = 77025;

	class PENGKCAHHAE : public ::System::Object
	{
	public:
		::BABBBKKDBIN* LKBKDNAMNEG; // 0x10
		::ACOLIBAMGLK* JLLAEIGKNMC; // 0x18
		::System::Void _ctor(::BABBBKKDBIN* a1, ::ACOLIBAMGLK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BABBBKKDBIN*, ::ACOLIBAMGLK*))((::PBYTE)hIl2Cpp + PENGKCAHHAE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean LLHLOLOBEBC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PENGKCAHHAE_LLHLOLOBEBC_OFFSET))(this);
		}

		::BAMIOFOKCEB IKGICBPMHJJ()
		{
			return ((::BAMIOFOKCEB(*)(::PVOID))((::PBYTE)hIl2Cpp + PENGKCAHHAE_IKGICBPMHJJ_OFFSET))(this);
		}

		::OCKCNOOHILK GKIAMBCFCFF()
		{
			return ((::OCKCNOOHILK(*)(::PVOID))((::PBYTE)hIl2Cpp + PENGKCAHHAE_GKIAMBCFCFF_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyCollection_1<::OCKCNOOHILK>* ECMDHBGGPFJ()
		{
			return ((::System::Collections::Generic::IReadOnlyCollection_1<::OCKCNOOHILK>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PENGKCAHHAE_ECMDHBGGPFJ_OFFSET))(this);
		}

		::System::Boolean ACFPGJJDPOM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PENGKCAHHAE_ACFPGJJDPOM_OFFSET))(this);
		}

		::OOFGNEDEFCF CFDEHJBEFKN()
		{
			return ((::OOFGNEDEFCF(*)(::PVOID))((::PBYTE)hIl2Cpp + PENGKCAHHAE_CFDEHJBEFKN_OFFSET))(this);
		}

		::System::Boolean EIBHHOPHJCK(::KJLGHJCHJFJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KJLGHJCHJFJ*))((::PBYTE)hIl2Cpp + PENGKCAHHAE_EIBHHOPHJCK_OFFSET))(this, a1);
		}

		::System::Boolean PDHOOKDBHDF(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PENGKCAHHAE_PDHOOKDBHDF_OFFSET))(this, a1);
		}

		::System::Boolean GCCPIHBMFBM(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PENGKCAHHAE_GCCPIHBMFBM_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::IReadOnlyCollection_1<::OCKCNOOHILK>* CFHNPJBFOCD(::System::Collections::Generic::IReadOnlyCollection_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::IReadOnlyCollection_1<::OCKCNOOHILK>*(*)(::System::Collections::Generic::IReadOnlyCollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + PENGKCAHHAE_CFHNPJBFOCD_OFFSET))(a1);
		}

	};
