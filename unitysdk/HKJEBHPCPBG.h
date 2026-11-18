#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/KLNMONAHJAN.h"
#include "unitysdk/System/Object.h"

class ANIPNHIIGCG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HKJEBHPCPBG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A4F2810)
#define HKJEBHPCPBG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A4F25D0)
#define HKJEBHPCPBG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A4F2750)
#define HKJEBHPCPBG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A4F28F0)
#define HKJEBHPCPBG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A4F25E0)
#define HKJEBHPCPBG_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A4F2A70)
#define HKJEBHPCPBG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A4F2220)
#define HKJEBHPCPBG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A4F2200)
#define HKJEBHPCPBG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A4F24E0)
#define HKJEBHPCPBG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4F2A20)

inline static constexpr unsigned int HKJEBHPCPBG_TypeDefinitionIndex = 15536;

class HKJEBHPCPBG : public ::System::Object
{
public:
	::KLNMONAHJAN DHDJDGFNBOA; // 0x10
	::Il2CppArray<::ANIPNHIIGCG*>* OJMBOGGMIKO; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKJEBHPCPBG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HKJEBHPCPBG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKJEBHPCPBG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HKJEBHPCPBG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HKJEBHPCPBG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKJEBHPCPBG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKJEBHPCPBG_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKJEBHPCPBG_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HKJEBHPCPBG_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKJEBHPCPBG_CHLEALKAOJO_OFFSET))(this);
	}
};
