#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMPGJHGMOBJ_CNPJPIMNANK.h"
#include "unitysdk/Foundation/ViewObject/Subsystem/GroupStateChangeListenEntry.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"

class EPJAODADCEA;
class HJHIDKJAFOB;
class IFLPGOKHDJI;
class LCDNBAKJFKF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BMPGJHGMOBJ_AMEGHCHMIOD_1_OFFSET UNITYSDK_OFFSET(0x1508EB70)
#define BMPGJHGMOBJ_AMEGHCHMIOD_OFFSET UNITYSDK_OFFSET(0x1508DA00)
#define BMPGJHGMOBJ_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x1508D9F0)
#define BMPGJHGMOBJ_BPOFAFFDHOP_OFFSET UNITYSDK_OFFSET(0x1508D950)
#define BMPGJHGMOBJ_EPHMABPINPM_OFFSET UNITYSDK_OFFSET(0x1508DD90)
#define BMPGJHGMOBJ_GAPBKCOOBHJ_OFFSET UNITYSDK_OFFSET(0x1508DEA0)
#define BMPGJHGMOBJ_GBOEEAJOGON_OFFSET UNITYSDK_OFFSET(0x1508D4C0)
#define BMPGJHGMOBJ_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x1508EF00)
#define BMPGJHGMOBJ_JNNOHDLOKGO_OFFSET UNITYSDK_OFFSET(0x1508D510)
#define BMPGJHGMOBJ_NLAMGANDDFN_OFFSET UNITYSDK_OFFSET(0x1508C480)
#define BMPGJHGMOBJ_ODLOLOKLPGH_OFFSET UNITYSDK_OFFSET(0x1508E000)
#define BMPGJHGMOBJ_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1508C010)
#define BMPGJHGMOBJ_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1508C230)
#define BMPGJHGMOBJ_PCFFJMDHCFN_OFFSET UNITYSDK_OFFSET(0x1508C060)
#define BMPGJHGMOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1508C380)

inline static constexpr unsigned int BMPGJHGMOBJ_TypeDefinitionIndex = 58010;

class BMPGJHGMOBJ
{
public:
	::System::Collections::Generic::List_1<::Foundation::ViewObject::Subsystem::GroupStateChangeListenEntry>* CBPGHKNEBOF; // 0x28
	::System::Collections::Generic::List_1<::IFLPGOKHDJI*>* ECEEDGCFMKP; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* MMHMPLDIENA; // 0x38
	::BMPGJHGMOBJ_CNPJPIMNANK KGCFFIFHMKE; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMPGJHGMOBJ__CTOR_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMPGJHGMOBJ_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMPGJHGMOBJ_ONRECYCLE_OFFSET))(this);
	}

	::System::Void NLAMGANDDFN(::System::Collections::Generic::IList_1<::HJHIDKJAFOB*>* PNDJAGDECOP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::HJHIDKJAFOB*>*))((::PBYTE)hIl2Cpp + BMPGJHGMOBJ_NLAMGANDDFN_OFFSET))(this, PNDJAGDECOP);
	}

	::System::Boolean GBOEEAJOGON()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMPGJHGMOBJ_GBOEEAJOGON_OFFSET))(this);
	}

	::System::Void PCFFJMDHCFN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMPGJHGMOBJ_PCFFJMDHCFN_OFFSET))(this);
	}

	::System::Void JNNOHDLOKGO(::IFLPGOKHDJI* HODAIDNDKHD)
	{
		return ((::System::Void(*)(::PVOID, ::IFLPGOKHDJI*))((::PBYTE)hIl2Cpp + BMPGJHGMOBJ_JNNOHDLOKGO_OFFSET))(this, HODAIDNDKHD);
	}

	::Cysharp::Threading::Tasks::UniTask BPOFAFFDHOP()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + BMPGJHGMOBJ_BPOFAFFDHOP_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMPGJHGMOBJ_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void AMEGHCHMIOD(::LCDNBAKJFKF* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LCDNBAKJFKF*))((::PBYTE)hIl2Cpp + BMPGJHGMOBJ_AMEGHCHMIOD_OFFSET))(this, NKMKJFCBBCK);
	}

	::System::Boolean EPHMABPINPM(::System::String* EGNIEIAHPFH, ::System::Int32& JKBLDFBGBPK)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + BMPGJHGMOBJ_EPHMABPINPM_OFFSET))(this, EGNIEIAHPFH, JKBLDFBGBPK);
	}

	::System::Void GAPBKCOOBHJ(::IFLPGOKHDJI* GPJPMOGCDBK, ::System::Int32 NJEMNLDCHNN, ::System::UInt32 KMMGKJPAOMF, ::System::String* EGNIEIAHPFH, ::System::Int32 PLIPBGBFHGF)
	{
		return ((::System::Void(*)(::PVOID, ::IFLPGOKHDJI*, ::System::Int32, ::System::UInt32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + BMPGJHGMOBJ_GAPBKCOOBHJ_OFFSET))(this, GPJPMOGCDBK, NJEMNLDCHNN, KMMGKJPAOMF, EGNIEIAHPFH, PLIPBGBFHGF);
	}

	::System::Boolean ODLOLOKLPGH(::System::String* EGNIEIAHPFH, ::System::Int32 JKBLDFBGBPK)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + BMPGJHGMOBJ_ODLOLOKLPGH_OFFSET))(this, EGNIEIAHPFH, JKBLDFBGBPK);
	}

	::System::Void AMEGHCHMIOD_1(::EPJAODADCEA* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EPJAODADCEA*))((::PBYTE)hIl2Cpp + BMPGJHGMOBJ_AMEGHCHMIOD_1_OFFSET))(this, NKMKJFCBBCK);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMPGJHGMOBJ_ILHIIDBCNEC_OFFSET))(this);
	}
};
