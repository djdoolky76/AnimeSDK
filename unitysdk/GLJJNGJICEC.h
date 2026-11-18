#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/ONHHGLGPEPH.h"
#include "unitysdk/System/Object.h"

class KELFKFICMMC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GLJJNGJICEC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x18BA4DE0)
#define GLJJNGJICEC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x18BA4BB0)
#define GLJJNGJICEC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x18BA4D20)
#define GLJJNGJICEC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18BA4EC0)
#define GLJJNGJICEC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x18BA4BC0)
#define GLJJNGJICEC_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x18BA5230)
#define GLJJNGJICEC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x18BA5040)
#define GLJJNGJICEC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x18BA4810)
#define GLJJNGJICEC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x18BA5210)
#define GLJJNGJICEC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x18BA47F0)
#define GLJJNGJICEC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18BA4AD0)
#define GLJJNGJICEC__CTOR_OFFSET UNITYSDK_OFFSET(0x18BA4FF0)

inline static constexpr unsigned int GLJJNGJICEC_TypeDefinitionIndex = 10969;

class GLJJNGJICEC : public ::System::Object
{
public:
	::ONHHGLGPEPH DHDJDGFNBOA; // 0x10
	::Il2CppArray<::KELFKFICMMC*>* OJMBOGGMIKO; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLJJNGJICEC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLJJNGJICEC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLJJNGJICEC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GLJJNGJICEC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GLJJNGJICEC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLJJNGJICEC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLJJNGJICEC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLJJNGJICEC_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLJJNGJICEC_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GLJJNGJICEC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLJJNGJICEC_NAMKJOJBAOA_OFFSET))(this);
	}

	::KELFKFICMMC* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::KELFKFICMMC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GLJJNGJICEC_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
