#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPNCHDKHMHE.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class DKOHOKNJAKP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FEDDIFPJKAD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19AEEB40)
#define FEDDIFPJKAD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19AEE900)
#define FEDDIFPJKAD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19AEEA80)
#define FEDDIFPJKAD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19AEEC20)
#define FEDDIFPJKAD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19AEE910)
#define FEDDIFPJKAD_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19AEEF90)
#define FEDDIFPJKAD_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19AEEDC0)
#define FEDDIFPJKAD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19AEE550)
#define FEDDIFPJKAD_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19AEEDA0)
#define FEDDIFPJKAD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19AEE530)
#define FEDDIFPJKAD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19AEE810)
#define FEDDIFPJKAD__CTOR_OFFSET UNITYSDK_OFFSET(0x19AEED50)

inline static constexpr unsigned int FEDDIFPJKAD_TypeDefinitionIndex = 11713;

class FEDDIFPJKAD : public ::System::Object
{
public:
	::Il2CppArray<::DKOHOKNJAKP*>* OJMBOGGMIKO; // 0x10
	::DPNCHDKHMHE DHDJDGFNBOA; // 0x18
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDDIFPJKAD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDDIFPJKAD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDDIFPJKAD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FEDDIFPJKAD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FEDDIFPJKAD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDDIFPJKAD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDDIFPJKAD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDDIFPJKAD_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDDIFPJKAD_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FEDDIFPJKAD_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDDIFPJKAD_CHLEALKAOJO_OFFSET))(this);
	}

	::DKOHOKNJAKP* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::DKOHOKNJAKP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FEDDIFPJKAD_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
