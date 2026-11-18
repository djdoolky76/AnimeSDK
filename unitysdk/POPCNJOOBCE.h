#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/NDLHGEDPCLC.h"
#include "unitysdk/System/Object.h"

class PANPKBFDDPO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define POPCNJOOBCE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1EE0C310)
#define POPCNJOOBCE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1EE0C0D0)
#define POPCNJOOBCE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1EE0C250)
#define POPCNJOOBCE_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1EE0C940)
#define POPCNJOOBCE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1EE0C3F0)
#define POPCNJOOBCE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1EE0C0E0)
#define POPCNJOOBCE_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1EE0C760)
#define POPCNJOOBCE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1EE0C590)
#define POPCNJOOBCE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1EE0BD20)
#define POPCNJOOBCE_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1EE0C570)
#define POPCNJOOBCE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1EE0BD00)
#define POPCNJOOBCE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1EE0BFE0)
#define POPCNJOOBCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE0C520)

inline static constexpr unsigned int POPCNJOOBCE_TypeDefinitionIndex = 13407;

class POPCNJOOBCE : public ::System::Object
{
public:
	::Il2CppArray<::PANPKBFDDPO*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::NDLHGEDPCLC DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPCNJOOBCE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POPCNJOOBCE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPCNJOOBCE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + POPCNJOOBCE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + POPCNJOOBCE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPCNJOOBCE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPCNJOOBCE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPCNJOOBCE_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPCNJOOBCE_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPCNJOOBCE_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + POPCNJOOBCE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::PANPKBFDDPO* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::PANPKBFDDPO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + POPCNJOOBCE_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Collections::Generic::IReadOnlyList_1<::PANPKBFDDPO*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::PANPKBFDDPO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + POPCNJOOBCE_EJABHIAHIAN_OFFSET))(this);
	}
};
