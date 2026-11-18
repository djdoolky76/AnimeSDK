#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNHODMJFP.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class BIOEMCMJGAO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JBMEPDNIIJF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x15A9F370)
#define JBMEPDNIIJF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x15A9F130)
#define JBMEPDNIIJF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x15A9F2B0)
#define JBMEPDNIIJF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x15A9F450)
#define JBMEPDNIIJF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x15A9F140)
#define JBMEPDNIIJF_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x15A9F5F0)
#define JBMEPDNIIJF_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x15A9F820)
#define JBMEPDNIIJF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x15A9ED80)
#define JBMEPDNIIJF_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x15A9F5D0)
#define JBMEPDNIIJF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x15A9ED60)
#define JBMEPDNIIJF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x15A9F040)
#define JBMEPDNIIJF__CTOR_OFFSET UNITYSDK_OFFSET(0x15A9F580)

inline static constexpr unsigned int JBMEPDNIIJF_TypeDefinitionIndex = 16616;

class JBMEPDNIIJF : public ::System::Object
{
public:
	::BAPNHODMJFP DHDJDGFNBOA; // 0x10
	::System::Action* PLDOELOOFLL; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::Il2CppArray<::BIOEMCMJGAO*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBMEPDNIIJF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JBMEPDNIIJF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBMEPDNIIJF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JBMEPDNIIJF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JBMEPDNIIJF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBMEPDNIIJF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBMEPDNIIJF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBMEPDNIIJF_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBMEPDNIIJF_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBMEPDNIIJF_NAMKJOJBAOA_OFFSET))(this);
	}

	::BIOEMCMJGAO* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::BIOEMCMJGAO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JBMEPDNIIJF_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JBMEPDNIIJF_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
