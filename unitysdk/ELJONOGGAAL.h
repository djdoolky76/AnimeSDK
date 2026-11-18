#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMBCENBGOJC.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class CHKBKONJKGD;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ELJONOGGAAL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17AA9BF0)
#define ELJONOGGAAL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17AA99B0)
#define ELJONOGGAAL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17AA9B30)
#define ELJONOGGAAL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17AA9CD0)
#define ELJONOGGAAL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17AA99C0)
#define ELJONOGGAAL_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17AA9E70)
#define ELJONOGGAAL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17AAA0A0)
#define ELJONOGGAAL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17AA9600)
#define ELJONOGGAAL_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17AA9E50)
#define ELJONOGGAAL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17AA95E0)
#define ELJONOGGAAL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17AA98C0)
#define ELJONOGGAAL__CTOR_OFFSET UNITYSDK_OFFSET(0x17AA9E00)

inline static constexpr unsigned int ELJONOGGAAL_TypeDefinitionIndex = 9413;

class ELJONOGGAAL : public ::System::Object
{
public:
	::Il2CppArray<::CHKBKONJKGD*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::FMBCENBGOJC DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJONOGGAAL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJONOGGAAL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJONOGGAAL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ELJONOGGAAL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + ELJONOGGAAL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJONOGGAAL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJONOGGAAL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJONOGGAAL_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJONOGGAAL_NAMKJOJBAOA_OFFSET))(this);
	}

	::CHKBKONJKGD* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::CHKBKONJKGD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ELJONOGGAAL_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJONOGGAAL_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ELJONOGGAAL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
