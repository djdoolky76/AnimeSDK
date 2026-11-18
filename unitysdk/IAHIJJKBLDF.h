#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HADBMAKIOKP.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class NFDCIGPIGPF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IAHIJJKBLDF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BAE34D0)
#define IAHIJJKBLDF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BAE3290)
#define IAHIJJKBLDF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BAE3410)
#define IAHIJJKBLDF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BAE35B0)
#define IAHIJJKBLDF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BAE32A0)
#define IAHIJJKBLDF_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1BAE38E0)
#define IAHIJJKBLDF_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BAE36F0)
#define IAHIJJKBLDF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BAE2EE0)
#define IAHIJJKBLDF_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BAE38C0)
#define IAHIJJKBLDF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BAE2EC0)
#define IAHIJJKBLDF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BAE31A0)
#define IAHIJJKBLDF__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAE36E0)

inline static constexpr unsigned int IAHIJJKBLDF_TypeDefinitionIndex = 12066;

class IAHIJJKBLDF : public ::System::Object
{
public:
	::Il2CppArray<::NFDCIGPIGPF*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::HADBMAKIOKP DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAHIJJKBLDF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IAHIJJKBLDF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAHIJJKBLDF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IAHIJJKBLDF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + IAHIJJKBLDF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAHIJJKBLDF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAHIJJKBLDF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAHIJJKBLDF_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IAHIJJKBLDF_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAHIJJKBLDF_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAHIJJKBLDF_NAMKJOJBAOA_OFFSET))(this);
	}

	::NFDCIGPIGPF* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::NFDCIGPIGPF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IAHIJJKBLDF_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
