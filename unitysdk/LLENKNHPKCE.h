#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/NCIGHJNOFHB.h"
#include "unitysdk/System/Object.h"

class OHGPIPIFKCI;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define LLENKNHPKCE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x195923C0)
#define LLENKNHPKCE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19592140)
#define LLENKNHPKCE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19592150)
#define LLENKNHPKCE_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x195927A0)
#define LLENKNHPKCE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19592210)
#define LLENKNHPKCE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19592340)
#define LLENKNHPKCE_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x19592890)
#define LLENKNHPKCE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x195924F0)
#define LLENKNHPKCE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19591DA0)
#define LLENKNHPKCE_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19592870)
#define LLENKNHPKCE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19591D80)
#define LLENKNHPKCE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19592060)
#define LLENKNHPKCE__CTOR_OFFSET UNITYSDK_OFFSET(0x195924A0)

inline static constexpr unsigned int LLENKNHPKCE_TypeDefinitionIndex = 16571;

class LLENKNHPKCE : public ::System::Object
{
public:
	::NCIGHJNOFHB DHDJDGFNBOA; // 0x10
	::System::Action* PLDOELOOFLL; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::Il2CppArray<::OHGPIPIFKCI*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLENKNHPKCE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LLENKNHPKCE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLENKNHPKCE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLENKNHPKCE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLENKNHPKCE_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LLENKNHPKCE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LLENKNHPKCE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLENKNHPKCE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LLENKNHPKCE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLENKNHPKCE_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::OHGPIPIFKCI*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::OHGPIPIFKCI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLENKNHPKCE_EJABHIAHIAN_OFFSET))(this);
	}

	::OHGPIPIFKCI* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::OHGPIPIFKCI*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LLENKNHPKCE_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLENKNHPKCE_NAMKJOJBAOA_OFFSET))(this);
	}
};
