#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GKPMPLBJNPJ.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class MKMNHNOLOAF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JLHGOIEFJJB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x193605A0)
#define JLHGOIEFJJB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19360320)
#define JLHGOIEFJJB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19360330)
#define JLHGOIEFJJB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x193603F0)
#define JLHGOIEFJJB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19360520)
#define JLHGOIEFJJB_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x193606D0)
#define JLHGOIEFJJB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19360920)
#define JLHGOIEFJJB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1935FF70)
#define JLHGOIEFJJB_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19360900)
#define JLHGOIEFJJB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1935FF50)
#define JLHGOIEFJJB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19360230)
#define JLHGOIEFJJB__CTOR_OFFSET UNITYSDK_OFFSET(0x19360680)

inline static constexpr unsigned int JLHGOIEFJJB_TypeDefinitionIndex = 10563;

class JLHGOIEFJJB : public ::System::Object
{
public:
	::GKPMPLBJNPJ DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::Il2CppArray<::MKMNHNOLOAF*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHGOIEFJJB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHGOIEFJJB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHGOIEFJJB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHGOIEFJJB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHGOIEFJJB_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JLHGOIEFJJB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JLHGOIEFJJB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHGOIEFJJB_BHLAEBMEOLO_OFFSET))(this);
	}

	::MKMNHNOLOAF* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::MKMNHNOLOAF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JLHGOIEFJJB_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JLHGOIEFJJB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHGOIEFJJB_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHGOIEFJJB_NAMKJOJBAOA_OFFSET))(this);
	}
};
