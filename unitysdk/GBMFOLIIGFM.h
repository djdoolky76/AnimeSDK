#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LFBBIECPOLF.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MCKCKBEGCCM.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GBMFOLIIGFM_ADOHDHDCHKB_OFFSET UNITYSDK_OFFSET(0x116DE300)
#define GBMFOLIIGFM_HOBAGOGGHOE_OFFSET UNITYSDK_OFFSET(0x116DE330)
#define GBMFOLIIGFM_KKFNPONHGEM_OFFSET UNITYSDK_OFFSET(0x116DDFF0)
#define GBMFOLIIGFM_LDGKJBIGHNC_OFFSET UNITYSDK_OFFSET(0x116DDF90)
#define GBMFOLIIGFM_OJJKNNBCPCG_OFFSET UNITYSDK_OFFSET(0x116DE360)
#define GBMFOLIIGFM_OJNICOIPOFP_OFFSET UNITYSDK_OFFSET(0x116DDFC0)
#define GBMFOLIIGFM_OMPFLKCBFHF_OFFSET UNITYSDK_OFFSET(0x116DDE50)
#define GBMFOLIIGFM__CCTOR_OFFSET UNITYSDK_OFFSET(0x116DDD40)
#define GBMFOLIIGFM__CTOR_OFFSET UNITYSDK_OFFSET(0x116DDD30)

inline static constexpr unsigned int GBMFOLIIGFM_TypeDefinitionIndex = 90133;

class GBMFOLIIGFM : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::GBMFOLIIGFM*>** StaticGet_HBKJGDFOPCC()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::GBMFOLIIGFM*>**)Il2CppClass::FromTypeDefinitionIndex(GBMFOLIIGFM_TypeDefinitionIndex)->GetStaticField(0x409E0);
	}
	static ::System::Collections::Generic::List_1<::GBMFOLIIGFM*>** StaticGet_CKNJFOPNBDP()
	{
		return (::System::Collections::Generic::List_1<::GBMFOLIIGFM*>**)Il2CppClass::FromTypeDefinitionIndex(GBMFOLIIGFM_TypeDefinitionIndex)->GetStaticField(0x409E8);
	}
	::LFBBIECPOLF HBCLCOFAHOH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMFOLIIGFM__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBMFOLIIGFM__CCTOR_OFFSET))();
	}

	static ::GBMFOLIIGFM* OMPFLKCBFHF(::System::Object* EHIOEBAEBKG)
	{
		return ((::GBMFOLIIGFM*(*)(::System::Object*))((::PBYTE)hIl2Cpp + GBMFOLIIGFM_OMPFLKCBFHF_OFFSET))(EHIOEBAEBKG);
	}

	::MCKCKBEGCCM LDGKJBIGHNC()
	{
		return ((::MCKCKBEGCCM(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMFOLIIGFM_LDGKJBIGHNC_OFFSET))(this);
	}

	::MCKCKBEGCCM OJNICOIPOFP()
	{
		return ((::MCKCKBEGCCM(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMFOLIIGFM_OJNICOIPOFP_OFFSET))(this);
	}

	static ::GBMFOLIIGFM* KKFNPONHGEM(::System::Object* EHIOEBAEBKG, ::LFBBIECPOLF NOMCLDGPNAF)
	{
		return ((::GBMFOLIIGFM*(*)(::System::Object*, ::LFBBIECPOLF))((::PBYTE)hIl2Cpp + GBMFOLIIGFM_KKFNPONHGEM_OFFSET))(EHIOEBAEBKG, NOMCLDGPNAF);
	}

	::MCKCKBEGCCM ADOHDHDCHKB()
	{
		return ((::MCKCKBEGCCM(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMFOLIIGFM_ADOHDHDCHKB_OFFSET))(this);
	}

	::MCKCKBEGCCM HOBAGOGGHOE()
	{
		return ((::MCKCKBEGCCM(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMFOLIIGFM_HOBAGOGGHOE_OFFSET))(this);
	}

	::MCKCKBEGCCM OJJKNNBCPCG()
	{
		return ((::MCKCKBEGCCM(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMFOLIIGFM_OJJKNNBCPCG_OFFSET))(this);
	}
};
