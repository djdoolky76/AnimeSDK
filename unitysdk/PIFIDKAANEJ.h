#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFBLNMHNFPF.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class HCBNMEFGDEA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PIFIDKAANEJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19DDF100)
#define PIFIDKAANEJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19DDEEC0)
#define PIFIDKAANEJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19DDF040)
#define PIFIDKAANEJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19DDF1E0)
#define PIFIDKAANEJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19DDEED0)
#define PIFIDKAANEJ_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19DDF360)
#define PIFIDKAANEJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19DDF5B0)
#define PIFIDKAANEJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19DDEB10)
#define PIFIDKAANEJ_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19DDF590)
#define PIFIDKAANEJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19DDEAF0)
#define PIFIDKAANEJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19DDEDD0)
#define PIFIDKAANEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19DDF310)

inline static constexpr unsigned int PIFIDKAANEJ_TypeDefinitionIndex = 13992;

class PIFIDKAANEJ : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::Il2CppArray<::HCBNMEFGDEA*>* OJMBOGGMIKO; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::IFBLNMHNFPF DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFIDKAANEJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFIDKAANEJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFIDKAANEJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PIFIDKAANEJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PIFIDKAANEJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFIDKAANEJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFIDKAANEJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFIDKAANEJ_FINALIZE_OFFSET))(this);
	}

	::HCBNMEFGDEA* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::HCBNMEFGDEA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PIFIDKAANEJ_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PIFIDKAANEJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFIDKAANEJ_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFIDKAANEJ_NAMKJOJBAOA_OFFSET))(this);
	}
};
