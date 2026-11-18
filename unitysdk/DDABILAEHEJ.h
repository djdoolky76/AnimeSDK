#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDINEECOLAP.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class GLJLNJOOGID;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DDABILAEHEJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17A955C0)
#define DDABILAEHEJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17A95380)
#define DDABILAEHEJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17A95500)
#define DDABILAEHEJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17A956A0)
#define DDABILAEHEJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17A95390)
#define DDABILAEHEJ_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17A95820)
#define DDABILAEHEJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17A95A70)
#define DDABILAEHEJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17A94FD0)
#define DDABILAEHEJ_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17A95A50)
#define DDABILAEHEJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17A94FB0)
#define DDABILAEHEJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17A95290)
#define DDABILAEHEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17A957D0)

inline static constexpr unsigned int DDABILAEHEJ_TypeDefinitionIndex = 14254;

class DDABILAEHEJ : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::FDINEECOLAP DHDJDGFNBOA; // 0x28
	::Il2CppArray<::GLJLNJOOGID*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDABILAEHEJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DDABILAEHEJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDABILAEHEJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DDABILAEHEJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DDABILAEHEJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDABILAEHEJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDABILAEHEJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDABILAEHEJ_FINALIZE_OFFSET))(this);
	}

	::GLJLNJOOGID* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::GLJLNJOOGID*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DDABILAEHEJ_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDABILAEHEJ_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DDABILAEHEJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDABILAEHEJ_CHLEALKAOJO_OFFSET))(this);
	}
};
