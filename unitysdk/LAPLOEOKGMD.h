#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HJMLHIBDMAI.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class AKOKDDAFMGI;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define LAPLOEOKGMD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19DA20E0)
#define LAPLOEOKGMD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19DA1EA0)
#define LAPLOEOKGMD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19DA2020)
#define LAPLOEOKGMD_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x19DA2530)
#define LAPLOEOKGMD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19DA21C0)
#define LAPLOEOKGMD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19DA1EB0)
#define LAPLOEOKGMD_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x19DA2600)
#define LAPLOEOKGMD_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19DA2340)
#define LAPLOEOKGMD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19DA1AF0)
#define LAPLOEOKGMD_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19DA2510)
#define LAPLOEOKGMD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19DA1AD0)
#define LAPLOEOKGMD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19DA1DB0)
#define LAPLOEOKGMD__CTOR_OFFSET UNITYSDK_OFFSET(0x19DA22F0)

inline static constexpr unsigned int LAPLOEOKGMD_TypeDefinitionIndex = 13646;

class LAPLOEOKGMD : public ::System::Object
{
public:
	::HJMLHIBDMAI DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::Il2CppArray<::AKOKDDAFMGI*>* OJMBOGGMIKO; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPLOEOKGMD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPLOEOKGMD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPLOEOKGMD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LAPLOEOKGMD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LAPLOEOKGMD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPLOEOKGMD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPLOEOKGMD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPLOEOKGMD_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LAPLOEOKGMD_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPLOEOKGMD_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPLOEOKGMD_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::AKOKDDAFMGI*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::AKOKDDAFMGI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPLOEOKGMD_EJABHIAHIAN_OFFSET))(this);
	}

	::AKOKDDAFMGI* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::AKOKDDAFMGI*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LAPLOEOKGMD_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}
};
