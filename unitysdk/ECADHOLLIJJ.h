#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFFIGOGAECL.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class MGAEAFALNOE;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ECADHOLLIJJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17AA2460)
#define ECADHOLLIJJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17AA21E0)
#define ECADHOLLIJJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17AA21F0)
#define ECADHOLLIJJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17AA22B0)
#define ECADHOLLIJJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17AA23E0)
#define ECADHOLLIJJ_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17AA2860)
#define ECADHOLLIJJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17AA25B0)
#define ECADHOLLIJJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17AA1E40)
#define ECADHOLLIJJ_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17AA2590)
#define ECADHOLLIJJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17AA1E20)
#define ECADHOLLIJJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17AA2100)
#define ECADHOLLIJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17AA2540)

inline static constexpr unsigned int ECADHOLLIJJ_TypeDefinitionIndex = 10411;

class ECADHOLLIJJ : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::MGAEAFALNOE*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::HFFIGOGAECL DHDJDGFNBOA; // 0x28
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECADHOLLIJJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECADHOLLIJJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECADHOLLIJJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECADHOLLIJJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECADHOLLIJJ_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ECADHOLLIJJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + ECADHOLLIJJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECADHOLLIJJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECADHOLLIJJ_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECADHOLLIJJ_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ECADHOLLIJJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::MGAEAFALNOE* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::MGAEAFALNOE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ECADHOLLIJJ_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
