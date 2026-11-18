#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CEPFJIDDHLD.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class ODPDDKKPANC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define OHEMIAPFHHM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1CFFB820)
#define OHEMIAPFHHM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1CFFB5E0)
#define OHEMIAPFHHM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1CFFB760)
#define OHEMIAPFHHM_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1CFFBC70)
#define OHEMIAPFHHM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1CFFB900)
#define OHEMIAPFHHM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1CFFB5F0)
#define OHEMIAPFHHM_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1CFFBD40)
#define OHEMIAPFHHM_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1CFFBA80)
#define OHEMIAPFHHM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1CFFB230)
#define OHEMIAPFHHM_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1CFFBC50)
#define OHEMIAPFHHM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1CFFB210)
#define OHEMIAPFHHM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1CFFB4F0)
#define OHEMIAPFHHM__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFFBA30)

inline static constexpr unsigned int OHEMIAPFHHM_TypeDefinitionIndex = 11058;

class OHEMIAPFHHM : public ::System::Object
{
public:
	::Il2CppArray<::ODPDDKKPANC*>* OJMBOGGMIKO; // 0x10
	::CEPFJIDDHLD DHDJDGFNBOA; // 0x18
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEMIAPFHHM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEMIAPFHHM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEMIAPFHHM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OHEMIAPFHHM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + OHEMIAPFHHM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEMIAPFHHM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEMIAPFHHM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEMIAPFHHM_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OHEMIAPFHHM_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEMIAPFHHM_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEMIAPFHHM_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::ODPDDKKPANC*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::ODPDDKKPANC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEMIAPFHHM_EJABHIAHIAN_OFFSET))(this);
	}

	::ODPDDKKPANC* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::ODPDDKKPANC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OHEMIAPFHHM_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}
};
