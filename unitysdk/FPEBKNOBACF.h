#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CDKNMFHGHEK.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class ENEPEKEHKCE;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FPEBKNOBACF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x15A7CA90)
#define FPEBKNOBACF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x15A7C810)
#define FPEBKNOBACF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x15A7C820)
#define FPEBKNOBACF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x15A7C8E0)
#define FPEBKNOBACF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x15A7CA10)
#define FPEBKNOBACF_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x15A7CBC0)
#define FPEBKNOBACF_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x15A7CE10)
#define FPEBKNOBACF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x15A7C470)
#define FPEBKNOBACF_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x15A7CDF0)
#define FPEBKNOBACF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x15A7C450)
#define FPEBKNOBACF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x15A7C730)
#define FPEBKNOBACF__CTOR_OFFSET UNITYSDK_OFFSET(0x15A7CB70)

inline static constexpr unsigned int FPEBKNOBACF_TypeDefinitionIndex = 14580;

class FPEBKNOBACF : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::CDKNMFHGHEK DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::Il2CppArray<::ENEPEKEHKCE*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEBKNOBACF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEBKNOBACF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEBKNOBACF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEBKNOBACF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEBKNOBACF_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FPEBKNOBACF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FPEBKNOBACF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEBKNOBACF_BHLAEBMEOLO_OFFSET))(this);
	}

	::ENEPEKEHKCE* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::ENEPEKEHKCE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FPEBKNOBACF_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEBKNOBACF_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEBKNOBACF_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FPEBKNOBACF_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
