#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HJBOALEBFGK.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class ENIBJBBBBIA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define KKBIFAOPENL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x15302A00)
#define KKBIFAOPENL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x15302780)
#define KKBIFAOPENL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x15302790)
#define KKBIFAOPENL_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x15302D30)
#define KKBIFAOPENL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x15302850)
#define KKBIFAOPENL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x15302980)
#define KKBIFAOPENL_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x15302B30)
#define KKBIFAOPENL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x15302E00)
#define KKBIFAOPENL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x153023D0)
#define KKBIFAOPENL_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x15302D10)
#define KKBIFAOPENL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x153023B0)
#define KKBIFAOPENL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x15302690)
#define KKBIFAOPENL__CTOR_OFFSET UNITYSDK_OFFSET(0x15302AE0)

inline static constexpr unsigned int KKBIFAOPENL_TypeDefinitionIndex = 17559;

class KKBIFAOPENL : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::Il2CppArray<::ENIBJBBBBIA*>* OJMBOGGMIKO; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::HJBOALEBFGK DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBIFAOPENL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBIFAOPENL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBIFAOPENL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBIFAOPENL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBIFAOPENL_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KKBIFAOPENL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KKBIFAOPENL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBIFAOPENL_BHLAEBMEOLO_OFFSET))(this);
	}

	::ENIBJBBBBIA* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::ENIBJBBBBIA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KKBIFAOPENL_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Collections::Generic::IReadOnlyList_1<::ENIBJBBBBIA*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::ENIBJBBBBIA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBIFAOPENL_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KKBIFAOPENL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBIFAOPENL_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBIFAOPENL_NAMKJOJBAOA_OFFSET))(this);
	}
};
