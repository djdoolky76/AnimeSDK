#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CJMCICODFBN_PILBLDPFJIB.h"
#include "unitysdk/KECPLIFGOCJ.h"

class JLCLMJOCGHI;
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KLLPBIMCOPA_AALABFNDMDJ_OFFSET UNITYSDK_OFFSET(0x152218E0)
#define KLLPBIMCOPA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x15220FA0)
#define KLLPBIMCOPA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x15220D90)
#define KLLPBIMCOPA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x15220DE0)
#define KLLPBIMCOPA_FIHEJGKABEI_OFFSET UNITYSDK_OFFSET(0x15220CC0)
#define KLLPBIMCOPA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x15220EE0)
#define KLLPBIMCOPA_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x15221060)
#define KLLPBIMCOPA_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x15221660)
#define KLLPBIMCOPA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x152218F0)
#define KLLPBIMCOPA_LECBPLDEJOA_OFFSET UNITYSDK_OFFSET(0x152213B0)
#define KLLPBIMCOPA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x152209B0)
#define KLLPBIMCOPA__CTOR_OFFSET UNITYSDK_OFFSET(0x15221010)

inline static constexpr unsigned int KLLPBIMCOPA_TypeDefinitionIndex = 56488;

class KLLPBIMCOPA
{
public:
	::System::Action* PLDOELOOFLL; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Object*>*>* CALMGIGFOMA; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLPBIMCOPA__CTOR_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLPBIMCOPA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLPBIMCOPA_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KLLPBIMCOPA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KLLPBIMCOPA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLPBIMCOPA_BHLAEBMEOLO_OFFSET))(this);
	}

	::Il2CppArray<::JLCLMJOCGHI*>* FIHEJGKABEI()
	{
		return ((::Il2CppArray<::JLCLMJOCGHI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLPBIMCOPA_FIHEJGKABEI_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::JLCLMJOCGHI*>* LECBPLDEJOA(::System::Int32 KKKPHDNOCGN)
	{
		return ((::System::Collections::Generic::List_1<::JLCLMJOCGHI*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KLLPBIMCOPA_LECBPLDEJOA_OFFSET))(this, KKKPHDNOCGN);
	}

	::JLCLMJOCGHI* IFDPKDOFOJD(::System::Int32 KKKPHDNOCGN, ::CJMCICODFBN_PILBLDPFJIB KPOMCFMHBBC)
	{
		return ((::JLCLMJOCGHI*(*)(::PVOID, ::System::Int32, ::CJMCICODFBN_PILBLDPFJIB))((::PBYTE)hIl2Cpp + KLLPBIMCOPA_IFDPKDOFOJD_OFFSET))(this, KKKPHDNOCGN, KPOMCFMHBBC);
	}

	::System::Void AALABFNDMDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLPBIMCOPA_AALABFNDMDJ_OFFSET))(this);
	}

	::JLCLMJOCGHI* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::JLCLMJOCGHI*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KLLPBIMCOPA_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KLLPBIMCOPA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
