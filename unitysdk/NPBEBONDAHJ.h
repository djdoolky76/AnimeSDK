#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/KMNNKAJNKGF.h"
#include "unitysdk/System/Object.h"

class CEDONOBIJFA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NPBEBONDAHJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17357C40)
#define NPBEBONDAHJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17357A10)
#define NPBEBONDAHJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17357B80)
#define NPBEBONDAHJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17357D20)
#define NPBEBONDAHJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17357A20)
#define NPBEBONDAHJ_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17358090)
#define NPBEBONDAHJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17357EC0)
#define NPBEBONDAHJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17357670)
#define NPBEBONDAHJ_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17357EA0)
#define NPBEBONDAHJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17357650)
#define NPBEBONDAHJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17357930)
#define NPBEBONDAHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17357E50)

inline static constexpr unsigned int NPBEBONDAHJ_TypeDefinitionIndex = 10019;

class NPBEBONDAHJ : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::Il2CppArray<::CEDONOBIJFA*>* OJMBOGGMIKO; // 0x28
	::KMNNKAJNKGF DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPBEBONDAHJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPBEBONDAHJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPBEBONDAHJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NPBEBONDAHJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NPBEBONDAHJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPBEBONDAHJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPBEBONDAHJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPBEBONDAHJ_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPBEBONDAHJ_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NPBEBONDAHJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::CEDONOBIJFA* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::CEDONOBIJFA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPBEBONDAHJ_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPBEBONDAHJ_CHLEALKAOJO_OFFSET))(this);
	}
};
