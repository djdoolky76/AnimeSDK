#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APMDPCOMLDA.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class EEEGJMPDCKB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define NBNPDIBFLJN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BAA15B0)
#define NBNPDIBFLJN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BAA1330)
#define NBNPDIBFLJN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BAA1340)
#define NBNPDIBFLJN_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1BAA16E0)
#define NBNPDIBFLJN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BAA1400)
#define NBNPDIBFLJN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BAA1530)
#define NBNPDIBFLJN_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1BAA17D0)
#define NBNPDIBFLJN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BAA19B0)
#define NBNPDIBFLJN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BAA0F90)
#define NBNPDIBFLJN_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BAA17B0)
#define NBNPDIBFLJN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BAA0F70)
#define NBNPDIBFLJN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BAA1250)
#define NBNPDIBFLJN__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAA1690)

inline static constexpr unsigned int NBNPDIBFLJN_TypeDefinitionIndex = 10300;

class NBNPDIBFLJN : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::Il2CppArray<::EEEGJMPDCKB*>* OJMBOGGMIKO; // 0x28
	::APMDPCOMLDA DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNPDIBFLJN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNPDIBFLJN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNPDIBFLJN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNPDIBFLJN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNPDIBFLJN_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NBNPDIBFLJN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NBNPDIBFLJN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNPDIBFLJN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::EEEGJMPDCKB*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::EEEGJMPDCKB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNPDIBFLJN_EJABHIAHIAN_OFFSET))(this);
	}

	::EEEGJMPDCKB* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::EEEGJMPDCKB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NBNPDIBFLJN_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNPDIBFLJN_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNPDIBFLJN_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NBNPDIBFLJN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
