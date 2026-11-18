#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/LPJJFKNCDDM.h"
#include "unitysdk/System/Object.h"

class HONDPKLOLNB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define BFIEDIKAOOO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19F1A500)
#define BFIEDIKAOOO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19F1A2A0)
#define BFIEDIKAOOO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19F1A440)
#define BFIEDIKAOOO_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x19F1A760)
#define BFIEDIKAOOO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19F1A5E0)
#define BFIEDIKAOOO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19F1A2B0)
#define BFIEDIKAOOO_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x19F1A850)
#define BFIEDIKAOOO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19F19F00)
#define BFIEDIKAOOO_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19F1A830)
#define BFIEDIKAOOO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19F19EE0)
#define BFIEDIKAOOO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19F1A1C0)
#define BFIEDIKAOOO__CTOR_OFFSET UNITYSDK_OFFSET(0x19F1A710)

inline static constexpr unsigned int BFIEDIKAOOO_TypeDefinitionIndex = 14133;

class BFIEDIKAOOO : public ::System::Object
{
public:
	::LPJJFKNCDDM DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::Il2CppArray<::HONDPKLOLNB*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFIEDIKAOOO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BFIEDIKAOOO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFIEDIKAOOO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BFIEDIKAOOO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BFIEDIKAOOO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFIEDIKAOOO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFIEDIKAOOO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFIEDIKAOOO_FINALIZE_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::HONDPKLOLNB*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::HONDPKLOLNB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFIEDIKAOOO_EJABHIAHIAN_OFFSET))(this);
	}

	::HONDPKLOLNB* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::HONDPKLOLNB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BFIEDIKAOOO_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFIEDIKAOOO_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFIEDIKAOOO_CHLEALKAOJO_OFFSET))(this);
	}
};
