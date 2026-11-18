#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PIDFCGGMILL.h"
#include "unitysdk/System/Object.h"

class GBNDLDKGOLP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NFECANNIDJA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17FD2E80)
#define NFECANNIDJA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17FD2C40)
#define NFECANNIDJA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17FD2DC0)
#define NFECANNIDJA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17FD2F60)
#define NFECANNIDJA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17FD2C50)
#define NFECANNIDJA_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17FD3270)
#define NFECANNIDJA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17FD30A0)
#define NFECANNIDJA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17FD2890)
#define NFECANNIDJA_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17FD34E0)
#define NFECANNIDJA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17FD2870)
#define NFECANNIDJA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17FD2B50)
#define NFECANNIDJA__CTOR_OFFSET UNITYSDK_OFFSET(0x17FD3090)

inline static constexpr unsigned int NFECANNIDJA_TypeDefinitionIndex = 10679;

class NFECANNIDJA : public ::System::Object
{
public:
	::Il2CppArray<::GBNDLDKGOLP*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::PIDFCGGMILL DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFECANNIDJA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFECANNIDJA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFECANNIDJA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NFECANNIDJA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NFECANNIDJA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFECANNIDJA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFECANNIDJA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFECANNIDJA_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NFECANNIDJA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::GBNDLDKGOLP* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::GBNDLDKGOLP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NFECANNIDJA_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFECANNIDJA_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFECANNIDJA_NAMKJOJBAOA_OFFSET))(this);
	}
};
