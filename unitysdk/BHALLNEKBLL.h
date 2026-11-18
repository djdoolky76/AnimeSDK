#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIGKLEMGPPA.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class KHPOOAGDCGG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define BHALLNEKBLL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1775AFC0)
#define BHALLNEKBLL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1775AD50)
#define BHALLNEKBLL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1775AF00)
#define BHALLNEKBLL_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1775B450)
#define BHALLNEKBLL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1775B0A0)
#define BHALLNEKBLL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1775AD60)
#define BHALLNEKBLL_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1775B220)
#define BHALLNEKBLL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1775A9A0)
#define BHALLNEKBLL_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1775B430)
#define BHALLNEKBLL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1775A980)
#define BHALLNEKBLL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1775AC60)
#define BHALLNEKBLL__CTOR_OFFSET UNITYSDK_OFFSET(0x1775B1D0)

inline static constexpr unsigned int BHALLNEKBLL_TypeDefinitionIndex = 10640;

class BHALLNEKBLL : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::AIGKLEMGPPA DHDJDGFNBOA; // 0x20
	::Il2CppArray<::KHPOOAGDCGG*>* OJMBOGGMIKO; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHALLNEKBLL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BHALLNEKBLL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHALLNEKBLL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BHALLNEKBLL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BHALLNEKBLL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHALLNEKBLL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHALLNEKBLL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHALLNEKBLL_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHALLNEKBLL_CHLEALKAOJO_OFFSET))(this);
	}

	::KHPOOAGDCGG* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::KHPOOAGDCGG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BHALLNEKBLL_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Collections::Generic::IReadOnlyList_1<::KHPOOAGDCGG*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::KHPOOAGDCGG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHALLNEKBLL_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHALLNEKBLL_NAMKJOJBAOA_OFFSET))(this);
	}
};
