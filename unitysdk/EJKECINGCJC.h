#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/OKFDHOAANFF.h"
#include "unitysdk/System/Object.h"

class LAKDHBPPCAO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define EJKECINGCJC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1ADD2AB0)
#define EJKECINGCJC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1ADD2880)
#define EJKECINGCJC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1ADD29F0)
#define EJKECINGCJC_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1ADD2EC0)
#define EJKECINGCJC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1ADD2B90)
#define EJKECINGCJC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1ADD2890)
#define EJKECINGCJC_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1ADD2F90)
#define EJKECINGCJC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1ADD2CF0)
#define EJKECINGCJC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1ADD24E0)
#define EJKECINGCJC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1ADD2CD0)
#define EJKECINGCJC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1ADD24C0)
#define EJKECINGCJC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1ADD27A0)
#define EJKECINGCJC__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADD2CC0)

inline static constexpr unsigned int EJKECINGCJC_TypeDefinitionIndex = 10119;

class EJKECINGCJC : public ::System::Object
{
public:
	::OKFDHOAANFF DHDJDGFNBOA; // 0x10
	::Il2CppArray<::LAKDHBPPCAO*>* OJMBOGGMIKO; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJKECINGCJC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJKECINGCJC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJKECINGCJC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EJKECINGCJC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + EJKECINGCJC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJKECINGCJC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJKECINGCJC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJKECINGCJC_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJKECINGCJC_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJKECINGCJC_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EJKECINGCJC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Collections::Generic::IReadOnlyList_1<::LAKDHBPPCAO*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::LAKDHBPPCAO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJKECINGCJC_EJABHIAHIAN_OFFSET))(this);
	}

	::LAKDHBPPCAO* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::LAKDHBPPCAO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EJKECINGCJC_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}
};
