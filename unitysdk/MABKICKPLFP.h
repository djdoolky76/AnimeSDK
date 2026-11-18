#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AEGPAJBBGFH.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class CCKIIKAOBDF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MABKICKPLFP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17FBF840)
#define MABKICKPLFP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17FBF600)
#define MABKICKPLFP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17FBF780)
#define MABKICKPLFP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17FBF920)
#define MABKICKPLFP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17FBF610)
#define MABKICKPLFP_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17FBFA60)
#define MABKICKPLFP_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17FBFC70)
#define MABKICKPLFP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17FBF250)
#define MABKICKPLFP_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17FBFC50)
#define MABKICKPLFP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17FBF230)
#define MABKICKPLFP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17FBF510)
#define MABKICKPLFP__CTOR_OFFSET UNITYSDK_OFFSET(0x17FBFA50)

inline static constexpr unsigned int MABKICKPLFP_TypeDefinitionIndex = 17183;

class MABKICKPLFP : public ::System::Object
{
public:
	::Il2CppArray<::CCKIIKAOBDF*>* OJMBOGGMIKO; // 0x10
	::AEGPAJBBGFH DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MABKICKPLFP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MABKICKPLFP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MABKICKPLFP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MABKICKPLFP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MABKICKPLFP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MABKICKPLFP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MABKICKPLFP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MABKICKPLFP_FINALIZE_OFFSET))(this);
	}

	::CCKIIKAOBDF* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::CCKIIKAOBDF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MABKICKPLFP_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MABKICKPLFP_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MABKICKPLFP_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MABKICKPLFP_CHLEALKAOJO_OFFSET))(this);
	}
};
