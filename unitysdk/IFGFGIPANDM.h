#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOAEIKKFKNL.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class IFNOBLLKGON;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define IFGFGIPANDM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1934A4B0)
#define IFGFGIPANDM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1934A280)
#define IFGFGIPANDM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1934A3F0)
#define IFGFGIPANDM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1934A590)
#define IFGFGIPANDM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1934A290)
#define IFGFGIPANDM_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1934A900)
#define IFGFGIPANDM_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1934A730)
#define IFGFGIPANDM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19349EE0)
#define IFGFGIPANDM_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1934A710)
#define IFGFGIPANDM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19349EC0)
#define IFGFGIPANDM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1934A1A0)
#define IFGFGIPANDM__CTOR_OFFSET UNITYSDK_OFFSET(0x1934A6C0)

inline static constexpr unsigned int IFGFGIPANDM_TypeDefinitionIndex = 13788;

class IFGFGIPANDM : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::IFNOBLLKGON*>* OJMBOGGMIKO; // 0x18
	::FOAEIKKFKNL DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGFGIPANDM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGFGIPANDM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGFGIPANDM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IFGFGIPANDM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + IFGFGIPANDM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGFGIPANDM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGFGIPANDM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGFGIPANDM_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGFGIPANDM_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGFGIPANDM_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IFGFGIPANDM_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::IFNOBLLKGON* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::IFNOBLLKGON*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFGFGIPANDM_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
