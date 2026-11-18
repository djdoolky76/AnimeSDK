#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIEECAGFGOB.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class CBOMHDDHDKJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FPEDNKPLGCA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A4CD780)
#define FPEDNKPLGCA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A4CD540)
#define FPEDNKPLGCA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A4CD6C0)
#define FPEDNKPLGCA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A4CD860)
#define FPEDNKPLGCA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A4CD550)
#define FPEDNKPLGCA_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A4CDBD0)
#define FPEDNKPLGCA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A4CD9E0)
#define FPEDNKPLGCA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A4CD190)
#define FPEDNKPLGCA_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A4CDBB0)
#define FPEDNKPLGCA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A4CD170)
#define FPEDNKPLGCA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A4CD450)
#define FPEDNKPLGCA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4CD990)

inline static constexpr unsigned int FPEDNKPLGCA_TypeDefinitionIndex = 11176;

class FPEDNKPLGCA : public ::System::Object
{
public:
	::Il2CppArray<::CBOMHDDHDKJ*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::BIEECAGFGOB DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEDNKPLGCA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEDNKPLGCA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEDNKPLGCA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FPEDNKPLGCA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FPEDNKPLGCA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEDNKPLGCA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEDNKPLGCA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEDNKPLGCA_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FPEDNKPLGCA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEDNKPLGCA_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEDNKPLGCA_CHLEALKAOJO_OFFSET))(this);
	}

	::CBOMHDDHDKJ* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::CBOMHDDHDKJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FPEDNKPLGCA_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
