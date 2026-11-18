#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBLBLBOELNH.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class DMFKGFMMNPP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define AIPDMHHMAPN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x15723810)
#define AIPDMHHMAPN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x157235D0)
#define AIPDMHHMAPN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x15723750)
#define AIPDMHHMAPN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x157238F0)
#define AIPDMHHMAPN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x157235E0)
#define AIPDMHHMAPN_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x15723A70)
#define AIPDMHHMAPN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x15723CC0)
#define AIPDMHHMAPN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x15723220)
#define AIPDMHHMAPN_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x15723CA0)
#define AIPDMHHMAPN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x15723200)
#define AIPDMHHMAPN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x157234E0)
#define AIPDMHHMAPN__CTOR_OFFSET UNITYSDK_OFFSET(0x15723A20)

inline static constexpr unsigned int AIPDMHHMAPN_TypeDefinitionIndex = 15319;

class AIPDMHHMAPN : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::BBLBLBOELNH DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::Il2CppArray<::DMFKGFMMNPP*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPDMHHMAPN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPDMHHMAPN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPDMHHMAPN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AIPDMHHMAPN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + AIPDMHHMAPN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPDMHHMAPN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPDMHHMAPN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPDMHHMAPN_FINALIZE_OFFSET))(this);
	}

	::DMFKGFMMNPP* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::DMFKGFMMNPP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AIPDMHHMAPN_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPDMHHMAPN_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPDMHHMAPN_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + AIPDMHHMAPN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
