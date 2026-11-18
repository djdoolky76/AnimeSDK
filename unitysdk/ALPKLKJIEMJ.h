#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/LFMACJFHOPM.h"
#include "unitysdk/System/Object.h"

class ICDANIMJKIG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define ALPKLKJIEMJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19ABE2F0)
#define ALPKLKJIEMJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19ABDF80)
#define ALPKLKJIEMJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19ABE100)
#define ALPKLKJIEMJ_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x19ABE440)
#define ALPKLKJIEMJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19ABE1C0)
#define ALPKLKJIEMJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19ABDF90)
#define ALPKLKJIEMJ_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x19ABE510)
#define ALPKLKJIEMJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19ABE6F0)
#define ALPKLKJIEMJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19ABDBD0)
#define ALPKLKJIEMJ_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19ABE420)
#define ALPKLKJIEMJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19ABDBB0)
#define ALPKLKJIEMJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19ABDE90)
#define ALPKLKJIEMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19ABE3D0)

inline static constexpr unsigned int ALPKLKJIEMJ_TypeDefinitionIndex = 15283;

class ALPKLKJIEMJ : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::LFMACJFHOPM DHDJDGFNBOA; // 0x28
	::Il2CppArray<::ICDANIMJKIG*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALPKLKJIEMJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ALPKLKJIEMJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALPKLKJIEMJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ALPKLKJIEMJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALPKLKJIEMJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALPKLKJIEMJ_FINALIZE_OFFSET))(this);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + ALPKLKJIEMJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALPKLKJIEMJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALPKLKJIEMJ_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::ICDANIMJKIG*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::ICDANIMJKIG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALPKLKJIEMJ_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALPKLKJIEMJ_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ALPKLKJIEMJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::ICDANIMJKIG* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::ICDANIMJKIG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ALPKLKJIEMJ_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}
};
