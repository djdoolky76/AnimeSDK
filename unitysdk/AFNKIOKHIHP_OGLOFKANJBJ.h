#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LGCNEDCMPKM.h"

class AFNKIOKHIHP;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;

#define AFNKIOKHIHP_OGLOFKANJBJ_EFMGKMGEDCA_OFFSET UNITYSDK_OFFSET(0x181F0E40)
#define AFNKIOKHIHP_OGLOFKANJBJ_EMHJMOCBJHC_OFFSET UNITYSDK_OFFSET(0x181F0DC0)
#define AFNKIOKHIHP_OGLOFKANJBJ_GBIDALDJDKG_OFFSET UNITYSDK_OFFSET(0x181F0C20)
#define AFNKIOKHIHP_OGLOFKANJBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x181F0960)

inline static constexpr unsigned int AFNKIOKHIHP_OGLOFKANJBJ_TypeDefinitionIndex = 79097;

class AFNKIOKHIHP_OGLOFKANJBJ : public ::System::Object
{
public:
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Int32>*>* MJHNLHBMMDN; // 0x10
	::HOCDHMEPPEG CEHMGNCBJCF; // 0x18
	::HOCDHMEPPEG HEJGJFHJDMI; // 0x48
	::System::Collections::Generic::List_1<::System::Int32>* BMCJFONCNGA; // 0x78
	::HOCDHMEPPEG PFLKIHOAJNM; // 0x80
	::HOCDHMEPPEG PHKLNOCKJCB; // 0xB0
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* MHBJNGBICKD; // 0xE0
	::System::Int32 OOGPJIKNGKE; // 0xE8
	::System::Boolean JPJHAJKJOHN; // 0xEC

	::System::Void _ctor(::LGCNEDCMPKM& BKBGPKNGNMF, ::AFNKIOKHIHP* AMNIHACKELI, ::Cysharp::Threading::Tasks::UniTaskCompletionSource* KIAGKPDIDDH)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::AFNKIOKHIHP*, ::Cysharp::Threading::Tasks::UniTaskCompletionSource*))((::PBYTE)hIl2Cpp + AFNKIOKHIHP_OGLOFKANJBJ__CTOR_OFFSET))(this, BKBGPKNGNMF, AMNIHACKELI, KIAGKPDIDDH);
	}

	::System::Void GBIDALDJDKG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFNKIOKHIHP_OGLOFKANJBJ_GBIDALDJDKG_OFFSET))(this);
	}

	::System::Void EMHJMOCBJHC(::System::Boolean DOFCLPCLHOJ, ::System::Collections::Generic::List_1<::System::Int32>* OFCKJMMOLMP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + AFNKIOKHIHP_OGLOFKANJBJ_EMHJMOCBJHC_OFFSET))(this, DOFCLPCLHOJ, OFCKJMMOLMP);
	}

	::System::Void EFMGKMGEDCA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFNKIOKHIHP_OGLOFKANJBJ_EFMGKMGEDCA_OFFSET))(this);
	}
};
