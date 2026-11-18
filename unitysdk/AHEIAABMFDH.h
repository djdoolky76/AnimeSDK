#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/KLDDDJMJLCH.h"
#include "unitysdk/System/Object.h"

class KOJEBJFPBAC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define AHEIAABMFDH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19BD6810)
#define AHEIAABMFDH_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19BD6590)
#define AHEIAABMFDH_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19BD65A0)
#define AHEIAABMFDH_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x19BD6DF0)
#define AHEIAABMFDH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19BD6660)
#define AHEIAABMFDH_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19BD6790)
#define AHEIAABMFDH_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x19BD6BF0)
#define AHEIAABMFDH_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19BD6940)
#define AHEIAABMFDH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19BD61F0)
#define AHEIAABMFDH_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19BD6DD0)
#define AHEIAABMFDH_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19BD61D0)
#define AHEIAABMFDH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19BD64B0)
#define AHEIAABMFDH__CTOR_OFFSET UNITYSDK_OFFSET(0x19BD68F0)

inline static constexpr unsigned int AHEIAABMFDH_TypeDefinitionIndex = 16562;

class AHEIAABMFDH : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::Il2CppArray<::KOJEBJFPBAC*>* OJMBOGGMIKO; // 0x20
	::KLDDDJMJLCH DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHEIAABMFDH__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AHEIAABMFDH_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHEIAABMFDH_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHEIAABMFDH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHEIAABMFDH_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AHEIAABMFDH_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + AHEIAABMFDH_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHEIAABMFDH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + AHEIAABMFDH_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHEIAABMFDH_CHLEALKAOJO_OFFSET))(this);
	}

	::KOJEBJFPBAC* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::KOJEBJFPBAC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AHEIAABMFDH_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Collections::Generic::IReadOnlyList_1<::KOJEBJFPBAC*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::KOJEBJFPBAC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHEIAABMFDH_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHEIAABMFDH_NAMKJOJBAOA_OFFSET))(this);
	}
};
