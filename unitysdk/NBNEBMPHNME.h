#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBENAPDGJOA.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class CHAEPALGHAM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define NBNEBMPHNME_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BF68690)
#define NBNEBMPHNME_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BF68460)
#define NBNEBMPHNME_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BF685D0)
#define NBNEBMPHNME_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1BF68AF0)
#define NBNEBMPHNME_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BF68770)
#define NBNEBMPHNME_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BF68470)
#define NBNEBMPHNME_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1BF688F0)
#define NBNEBMPHNME_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BF68BC0)
#define NBNEBMPHNME_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BF680C0)
#define NBNEBMPHNME_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BF68AD0)
#define NBNEBMPHNME_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BF680A0)
#define NBNEBMPHNME_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BF68380)
#define NBNEBMPHNME__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF688A0)

inline static constexpr unsigned int NBNEBMPHNME_TypeDefinitionIndex = 9699;

class NBNEBMPHNME : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::Il2CppArray<::CHAEPALGHAM*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::HBENAPDGJOA DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNEBMPHNME__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNEBMPHNME_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNEBMPHNME_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NBNEBMPHNME_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NBNEBMPHNME_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNEBMPHNME_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNEBMPHNME_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNEBMPHNME_FINALIZE_OFFSET))(this);
	}

	::CHAEPALGHAM* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::CHAEPALGHAM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NBNEBMPHNME_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNEBMPHNME_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::CHAEPALGHAM*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::CHAEPALGHAM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNEBMPHNME_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NBNEBMPHNME_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNEBMPHNME_NAMKJOJBAOA_OFFSET))(this);
	}
};
