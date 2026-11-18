#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENOOFGOEKJJ.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class CFPJKCLFEHC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HHEOOBNFPEP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19342A50)
#define HHEOOBNFPEP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19342810)
#define HHEOOBNFPEP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19342990)
#define HHEOOBNFPEP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19342B30)
#define HHEOOBNFPEP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19342820)
#define HHEOOBNFPEP_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19342CD0)
#define HHEOOBNFPEP_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19342F00)
#define HHEOOBNFPEP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19342460)
#define HHEOOBNFPEP_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19342CB0)
#define HHEOOBNFPEP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19342440)
#define HHEOOBNFPEP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19342720)
#define HHEOOBNFPEP__CTOR_OFFSET UNITYSDK_OFFSET(0x19342C60)

inline static constexpr unsigned int HHEOOBNFPEP_TypeDefinitionIndex = 16776;

class HHEOOBNFPEP : public ::System::Object
{
public:
	::ENOOFGOEKJJ DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::Il2CppArray<::CFPJKCLFEHC*>* OJMBOGGMIKO; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHEOOBNFPEP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HHEOOBNFPEP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHEOOBNFPEP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HHEOOBNFPEP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HHEOOBNFPEP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHEOOBNFPEP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHEOOBNFPEP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHEOOBNFPEP_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHEOOBNFPEP_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHEOOBNFPEP_CHLEALKAOJO_OFFSET))(this);
	}

	::CFPJKCLFEHC* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::CFPJKCLFEHC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HHEOOBNFPEP_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HHEOOBNFPEP_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
