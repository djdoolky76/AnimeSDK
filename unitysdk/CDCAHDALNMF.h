#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FHJILPKEPLB.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class PPADKCFPFBD;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CDCAHDALNMF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1578CDC0)
#define CDCAHDALNMF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1578CB80)
#define CDCAHDALNMF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1578CD00)
#define CDCAHDALNMF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1578CEA0)
#define CDCAHDALNMF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1578CB90)
#define CDCAHDALNMF_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1578D020)
#define CDCAHDALNMF_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1578D270)
#define CDCAHDALNMF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1578C7D0)
#define CDCAHDALNMF_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1578D250)
#define CDCAHDALNMF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1578C7B0)
#define CDCAHDALNMF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1578CA90)
#define CDCAHDALNMF__CTOR_OFFSET UNITYSDK_OFFSET(0x1578CFD0)

inline static constexpr unsigned int CDCAHDALNMF_TypeDefinitionIndex = 15340;

class CDCAHDALNMF : public ::System::Object
{
public:
	::FHJILPKEPLB DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::Il2CppArray<::PPADKCFPFBD*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCAHDALNMF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCAHDALNMF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCAHDALNMF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CDCAHDALNMF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CDCAHDALNMF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCAHDALNMF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCAHDALNMF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCAHDALNMF_FINALIZE_OFFSET))(this);
	}

	::PPADKCFPFBD* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::PPADKCFPFBD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CDCAHDALNMF_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CDCAHDALNMF_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCAHDALNMF_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCAHDALNMF_NAMKJOJBAOA_OFFSET))(this);
	}
};
