#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APOGMBDIFCO.h"
#include "unitysdk/System/Object.h"

class AICPGKGMMEH;
class FBMAFHJODFP;
class HFHIMPFIHMA;
class MAEGCCMKDCA;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KEJJFKHICBC_APHLICBHFBO_OFFSET UNITYSDK_OFFSET(0x19946A70)
#define KEJJFKHICBC_GLABPNLAIKE_OFFSET UNITYSDK_OFFSET(0x19946C80)
#define KEJJFKHICBC_IACEFJOPBKB_OFFSET UNITYSDK_OFFSET(0x19946BD0)
#define KEJJFKHICBC_KKGPMFLPLCB_OFFSET UNITYSDK_OFFSET(0x19946C30)
#define KEJJFKHICBC_MANKAFOFJFJ_OFFSET UNITYSDK_OFFSET(0x19946B80)
#define KEJJFKHICBC_MLOMGMIKCJE_OFFSET UNITYSDK_OFFSET(0x19946CE0)
#define KEJJFKHICBC_PCKMFJAHGGD_OFFSET UNITYSDK_OFFSET(0x19946CD0)
#define KEJJFKHICBC__CTOR_OFFSET UNITYSDK_OFFSET(0x19946A80)

inline static constexpr unsigned int KEJJFKHICBC_TypeDefinitionIndex = 87864;

class KEJJFKHICBC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MAEGCCMKDCA*>* ANELILLCIFK; // 0x10
	::FBMAFHJODFP* _JFPHGADMAOD_k__BackingField; // 0x18
	::System::Collections::Generic::Dictionary_2<::AICPGKGMMEH*, ::System::Single>* MIDJAMIKIJH; // 0x20
	::APOGMBDIFCO _AJPLJNNOGNL_k__BackingField; // 0x28

	::System::Void _ctor(::FBMAFHJODFP* CENDLIKDNJA)
	{
		return ((::System::Void(*)(::PVOID, ::FBMAFHJODFP*))((::PBYTE)hIl2Cpp + KEJJFKHICBC__CTOR_OFFSET))(this, CENDLIKDNJA);
	}

	::APOGMBDIFCO APHLICBHFBO()
	{
		return ((::APOGMBDIFCO(*)(::PVOID))((::PBYTE)hIl2Cpp + KEJJFKHICBC_APHLICBHFBO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MAEGCCMKDCA*>* MANKAFOFJFJ(::HFHIMPFIHMA* DCMLMJJAKMI)
	{
		return ((::System::Collections::Generic::List_1<::MAEGCCMKDCA*>*(*)(::PVOID, ::HFHIMPFIHMA*))((::PBYTE)hIl2Cpp + KEJJFKHICBC_MANKAFOFJFJ_OFFSET))(this, DCMLMJJAKMI);
	}

	::System::Void IACEFJOPBKB(::HFHIMPFIHMA* DCMLMJJAKMI)
	{
		return ((::System::Void(*)(::PVOID, ::HFHIMPFIHMA*))((::PBYTE)hIl2Cpp + KEJJFKHICBC_IACEFJOPBKB_OFFSET))(this, DCMLMJJAKMI);
	}

	::MAEGCCMKDCA* KKGPMFLPLCB(::AICPGKGMMEH* JFDKIGGPONC)
	{
		return ((::MAEGCCMKDCA*(*)(::PVOID, ::AICPGKGMMEH*))((::PBYTE)hIl2Cpp + KEJJFKHICBC_KKGPMFLPLCB_OFFSET))(this, JFDKIGGPONC);
	}

	::MAEGCCMKDCA* GLABPNLAIKE(::System::Int32 GCHDFMGHPOF, ::System::Int32 BAJCHFHALOA)
	{
		return ((::MAEGCCMKDCA*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KEJJFKHICBC_GLABPNLAIKE_OFFSET))(this, GCHDFMGHPOF, BAJCHFHALOA);
	}

	::System::Void PCKMFJAHGGD(::FBMAFHJODFP* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FBMAFHJODFP*))((::PBYTE)hIl2Cpp + KEJJFKHICBC_PCKMFJAHGGD_OFFSET))(this, EGEGIMGMJHN);
	}

	::FBMAFHJODFP* MLOMGMIKCJE()
	{
		return ((::FBMAFHJODFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEJJFKHICBC_MLOMGMIKCJE_OFFSET))(this);
	}
};
