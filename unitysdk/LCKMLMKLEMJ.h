#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICOIIIJHCAN.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class DELBPJJBBDB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LCKMLMKLEMJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19DA2E00)
#define LCKMLMKLEMJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19DA2BC0)
#define LCKMLMKLEMJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19DA2D40)
#define LCKMLMKLEMJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19DA2EE0)
#define LCKMLMKLEMJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19DA2BD0)
#define LCKMLMKLEMJ_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19DA3230)
#define LCKMLMKLEMJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19DA3060)
#define LCKMLMKLEMJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19DA2810)
#define LCKMLMKLEMJ_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19DA3460)
#define LCKMLMKLEMJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19DA27F0)
#define LCKMLMKLEMJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19DA2AD0)
#define LCKMLMKLEMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19DA3010)

inline static constexpr unsigned int LCKMLMKLEMJ_TypeDefinitionIndex = 12432;

class LCKMLMKLEMJ : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::Il2CppArray<::DELBPJJBBDB*>* OJMBOGGMIKO; // 0x18
	::ICOIIIJHCAN DHDJDGFNBOA; // 0x20
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCKMLMKLEMJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LCKMLMKLEMJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCKMLMKLEMJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LCKMLMKLEMJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + LCKMLMKLEMJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCKMLMKLEMJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCKMLMKLEMJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCKMLMKLEMJ_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LCKMLMKLEMJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::DELBPJJBBDB* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::DELBPJJBBDB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LCKMLMKLEMJ_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCKMLMKLEMJ_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCKMLMKLEMJ_CHLEALKAOJO_OFFSET))(this);
	}
};
