#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AAMGCDEBPBC.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class IACHPNGHDOJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KJCAELHKGFL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BA79B40)
#define KJCAELHKGFL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BA798C0)
#define KJCAELHKGFL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BA798D0)
#define KJCAELHKGFL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BA79990)
#define KJCAELHKGFL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BA79AC0)
#define KJCAELHKGFL_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1BA79C90)
#define KJCAELHKGFL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BA79EC0)
#define KJCAELHKGFL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BA79510)
#define KJCAELHKGFL_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BA79C70)
#define KJCAELHKGFL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BA794F0)
#define KJCAELHKGFL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BA797D0)
#define KJCAELHKGFL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA79C20)

inline static constexpr unsigned int KJCAELHKGFL_TypeDefinitionIndex = 10355;

class KJCAELHKGFL : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::AAMGCDEBPBC DHDJDGFNBOA; // 0x18
	::Il2CppArray<::IACHPNGHDOJ*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCAELHKGFL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCAELHKGFL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCAELHKGFL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCAELHKGFL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCAELHKGFL_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KJCAELHKGFL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KJCAELHKGFL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCAELHKGFL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCAELHKGFL_NAMKJOJBAOA_OFFSET))(this);
	}

	::IACHPNGHDOJ* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::IACHPNGHDOJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KJCAELHKGFL_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCAELHKGFL_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KJCAELHKGFL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
