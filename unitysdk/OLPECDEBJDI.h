#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKHPPFILDAG.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class ABCCANKAEKH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OLPECDEBJDI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1AB37DF0)
#define OLPECDEBJDI_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1AB37BB0)
#define OLPECDEBJDI_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1AB37D30)
#define OLPECDEBJDI_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AB37ED0)
#define OLPECDEBJDI_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1AB37BC0)
#define OLPECDEBJDI_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1AB38050)
#define OLPECDEBJDI_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1AB382A0)
#define OLPECDEBJDI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1AB37800)
#define OLPECDEBJDI_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1AB38280)
#define OLPECDEBJDI_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1AB377E0)
#define OLPECDEBJDI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1AB37AC0)
#define OLPECDEBJDI__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB38000)

inline static constexpr unsigned int OLPECDEBJDI_TypeDefinitionIndex = 17049;

class OLPECDEBJDI : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::Il2CppArray<::ABCCANKAEKH*>* OJMBOGGMIKO; // 0x20
	::BKHPPFILDAG DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLPECDEBJDI__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OLPECDEBJDI_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLPECDEBJDI_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OLPECDEBJDI_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + OLPECDEBJDI_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLPECDEBJDI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLPECDEBJDI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLPECDEBJDI_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLPECDEBJDI_CHLEALKAOJO_OFFSET))(this);
	}

	::ABCCANKAEKH* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::ABCCANKAEKH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OLPECDEBJDI_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OLPECDEBJDI_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLPECDEBJDI_NAMKJOJBAOA_OFFSET))(this);
	}
};
