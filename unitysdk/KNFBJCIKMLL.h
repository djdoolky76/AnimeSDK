#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDNBBPLEGHD.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class MLHNDHPAOFL;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define KNFBJCIKMLL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x18DEB5A0)
#define KNFBJCIKMLL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x18DEB370)
#define KNFBJCIKMLL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x18DEB4E0)
#define KNFBJCIKMLL_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x18DEB9F0)
#define KNFBJCIKMLL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18DEB680)
#define KNFBJCIKMLL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x18DEB380)
#define KNFBJCIKMLL_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x18DEBAC0)
#define KNFBJCIKMLL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x18DEB800)
#define KNFBJCIKMLL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x18DEAFD0)
#define KNFBJCIKMLL_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x18DEB9D0)
#define KNFBJCIKMLL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x18DEAFB0)
#define KNFBJCIKMLL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18DEB290)
#define KNFBJCIKMLL__CTOR_OFFSET UNITYSDK_OFFSET(0x18DEB7B0)

inline static constexpr unsigned int KNFBJCIKMLL_TypeDefinitionIndex = 15823;

class KNFBJCIKMLL : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::Il2CppArray<::MLHNDHPAOFL*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::System::Action* PLDOELOOFLL; // 0x28
	::HDNBBPLEGHD DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNFBJCIKMLL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KNFBJCIKMLL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNFBJCIKMLL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KNFBJCIKMLL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KNFBJCIKMLL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNFBJCIKMLL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNFBJCIKMLL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNFBJCIKMLL_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNFBJCIKMLL_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KNFBJCIKMLL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNFBJCIKMLL_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::MLHNDHPAOFL*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::MLHNDHPAOFL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNFBJCIKMLL_EJABHIAHIAN_OFFSET))(this);
	}

	::MLHNDHPAOFL* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::MLHNDHPAOFL*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KNFBJCIKMLL_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}
};
