#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JCLINBGBPJF.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class GIBBKGPDLDH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OIGLBJKFFCJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17FE1660)
#define OIGLBJKFFCJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17FE1420)
#define OIGLBJKFFCJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17FE15A0)
#define OIGLBJKFFCJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17FE1740)
#define OIGLBJKFFCJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17FE1430)
#define OIGLBJKFFCJ_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17FE1A90)
#define OIGLBJKFFCJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17FE18C0)
#define OIGLBJKFFCJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17FE1070)
#define OIGLBJKFFCJ_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17FE1CC0)
#define OIGLBJKFFCJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17FE1050)
#define OIGLBJKFFCJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17FE1330)
#define OIGLBJKFFCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17FE1870)

inline static constexpr unsigned int OIGLBJKFFCJ_TypeDefinitionIndex = 11498;

class OIGLBJKFFCJ : public ::System::Object
{
public:
	::Il2CppArray<::GIBBKGPDLDH*>* OJMBOGGMIKO; // 0x10
	::JCLINBGBPJF DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGLBJKFFCJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGLBJKFFCJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGLBJKFFCJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OIGLBJKFFCJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + OIGLBJKFFCJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGLBJKFFCJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGLBJKFFCJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGLBJKFFCJ_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OIGLBJKFFCJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGLBJKFFCJ_CHLEALKAOJO_OFFSET))(this);
	}

	::GIBBKGPDLDH* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::GIBBKGPDLDH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OIGLBJKFFCJ_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGLBJKFFCJ_NAMKJOJBAOA_OFFSET))(this);
	}
};
