#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AAIGJIGACNM.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class ALAFHBOENMO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OLCBELFEMHH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BAB8040)
#define OLCBELFEMHH_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BAB7CD0)
#define OLCBELFEMHH_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BAB7DD0)
#define OLCBELFEMHH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BAB7E90)
#define OLCBELFEMHH_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BAB7FC0)
#define OLCBELFEMHH_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1BAB8190)
#define OLCBELFEMHH_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BAB83C0)
#define OLCBELFEMHH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BAB7AE0)
#define OLCBELFEMHH_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BAB8170)
#define OLCBELFEMHH_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BAB7AC0)
#define OLCBELFEMHH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BAB7CE0)
#define OLCBELFEMHH__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAB8120)

inline static constexpr unsigned int OLCBELFEMHH_TypeDefinitionIndex = 17426;

class OLCBELFEMHH : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::AAIGJIGACNM DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::Il2CppArray<::ALAFHBOENMO*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLCBELFEMHH__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OLCBELFEMHH_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLCBELFEMHH_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLCBELFEMHH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLCBELFEMHH_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OLCBELFEMHH_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + OLCBELFEMHH_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLCBELFEMHH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLCBELFEMHH_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLCBELFEMHH_CHLEALKAOJO_OFFSET))(this);
	}

	::ALAFHBOENMO* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::ALAFHBOENMO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OLCBELFEMHH_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OLCBELFEMHH_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
