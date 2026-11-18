#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMFLNJNLNBF.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class JGIKLLNDMBJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BCJNJJBACDM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19AC3800)
#define BCJNJJBACDM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19AC35C0)
#define BCJNJJBACDM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19AC3740)
#define BCJNJJBACDM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19AC38E0)
#define BCJNJJBACDM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19AC35D0)
#define BCJNJJBACDM_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19AC3A60)
#define BCJNJJBACDM_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19AC3CB0)
#define BCJNJJBACDM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19AC3210)
#define BCJNJJBACDM_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19AC3C90)
#define BCJNJJBACDM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19AC31F0)
#define BCJNJJBACDM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19AC34D0)
#define BCJNJJBACDM__CTOR_OFFSET UNITYSDK_OFFSET(0x19AC3A10)

inline static constexpr unsigned int BCJNJJBACDM_TypeDefinitionIndex = 14269;

class BCJNJJBACDM : public ::System::Object
{
public:
	::Il2CppArray<::JGIKLLNDMBJ*>* OJMBOGGMIKO; // 0x10
	::AMFLNJNLNBF DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJNJJBACDM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJNJJBACDM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJNJJBACDM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BCJNJJBACDM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BCJNJJBACDM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJNJJBACDM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJNJJBACDM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJNJJBACDM_FINALIZE_OFFSET))(this);
	}

	::JGIKLLNDMBJ* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::JGIKLLNDMBJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BCJNJJBACDM_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJNJJBACDM_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCJNJJBACDM_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BCJNJJBACDM_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
